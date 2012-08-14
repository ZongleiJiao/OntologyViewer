/*
 * vim: ts=4 sw=4 et tw=0 wm=0
 *
 * libavoid - Fast, Incremental, Object-avoiding Line Router
 *
 * Copyright (C) 2011  Monash University
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * See the file LICENSE.LGPL distributed with the library.
 *
 * Licensees holding a valid commercial license may use this file in
 * accordance with the commercial license agreement provided with the 
 * library.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
 *
 * Author(s):   Michael Wybrow <mjwybrow@users.sourceforge.net>
*/

#ifndef AVOID_MTST_H
#define AVOID_MTST_H

#include <cstdio>
#include <set>
#include <list>
#include <utility>

#include "libavoid/vertices.h"
#include "libavoid/hyperedgetree.h"


namespace Avoid {

class VertInf;
class Router;
class ConnRef;
class EdgeInf;

typedef std::list<VertexSet> VertexSetList;

typedef std::pair<EdgeInf *, VertInf *> LayeredOrthogonalEdge;
typedef std::list<LayeredOrthogonalEdge> LayeredOrthogonalEdgeList;

// Comparison for the vertex heap in the extended Dijkstra's algorithm.
struct HeapCmpVertInf
{
    bool operator()(const VertInf *a, const VertInf *b) const;
};


// Comparison for the bridging edge heap in the extended Kruskal's algorithm.
struct CmpEdgeInf
{
    bool operator()(const EdgeInf *a, const EdgeInf *b) const;
};


// This class is not intended for public use.
// It is used by the hyperedge routing code to build a minimum terminal
// spanning tree for a set of terminal vertices.
class MinimumTerminalSpanningTree
{
    public:
        MinimumTerminalSpanningTree(Router *router,
                std::set<VertInf *> terminals,
                JunctionHyperEdgeTreeNodeMap *hyperEdgeTreeJunctions = NULL);
        ~MinimumTerminalSpanningTree();

        // Uses Interleaved construction of the MTST and SPTF (heuristic 2 
        // from paper).  This is the preferred construction approach.
        void constructInterleaved(void);
        // Uses Sequential construction of the MTST (heuristic 1 from paper).
        void constructSequential(void);
        
        void setDebuggingOutput(FILE *fp, unsigned int counter);
        HyperEdgeTreeNode *rootJunction(void) const;

    private:
        void buildHyperEdgeTreeToRoot(VertInf *curr, 
                HyperEdgeTreeNode *prevNode, VertInf *prevVert, 
                bool markEdges = false);
        VertInf **resetDistsForPath(VertInf *currVert, VertInf **newRootVertPtr);
        void rewriteRestOfHyperedge(VertInf *vert, VertInf **newTreeRootPtr);
        void drawForest(VertInf *vert, VertInf *prev);

        void makeSet(VertInf *vertex);
        VertexSetList::iterator findSet(VertInf *vertex);
        void unionSets(VertexSetList::iterator s1, VertexSetList::iterator s2);
        HyperEdgeTreeNode *addNode(VertInf *vertex, HyperEdgeTreeNode *prevNode);

        void popInvalidBridgingEdges(void);
        void commitToBridgingEdge(EdgeInf *e, unsigned& step);
        bool connectsWithoutBend(VertInf *oldLeaf, VertInf *newLeaf);
        LayeredOrthogonalEdgeList getOrthogonalEdgesFromVertex(VertInf *vert, 
                VertInf *prev);
        VertInf *orthogonalPartner(VertInf *vert, double penalty = 0);
        VertexPair realVerticesCountingPartners(EdgeInf *edge);


        Router *router;
        bool isOrthogonal;
        std::set<VertInf *> terminals;
        std::set<VertInf *> origTerminals;
        JunctionHyperEdgeTreeNodeMap *hyperEdgeTreeJunctions;

        VertexNodeMap nodes;
        HyperEdgeTreeNode *m_rootJunction;
        double bendPenalty;
        VertexSetList allsets;
        std::list<VertInf *> visitedVertices;
        std::list<VertInf *> extraVertices;
        std::list<VertInf *> unusedVertices;
        std::list<VertInf **> rootVertexPointers;

        FILE *debug_fp;
        unsigned int debug_count;
        unsigned int step_count;
        char debug_label[5];

        // Vertex heap for extended Dijkstra's algorithm.
        std::vector<VertInf *> vHeap;
        HeapCmpVertInf vHeapCompare;

        // Bridging edge heap for the extended Kruskal's algorithm.
        std::vector<EdgeInf *> beHeap;
        CmpEdgeInf beHeapCompare;

        const VertID dimensionChangeVertexID;
};


}

#endif
