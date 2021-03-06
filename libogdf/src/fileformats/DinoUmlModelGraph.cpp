/*
 * $Revision: 1.2 $
 * 
 * last checkin:
 *   $Author: klein $ 
 *   $Date: 2007-11-14 16:16:46 +0100 (Wed, 14 Nov 2007) $ 
 ***************************************************************/
 
/** \file
 * \brief Implementation of the class DinoUmlModelGraph
 * 
 * \author Dino Ahr
 * 
 * \par License:
 * This file is part of the Open Graph Drawing Framework (OGDF).
 * Copyright (C) 2005-2007
 * 
 * \par
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * Version 2 or 3 as published by the Free Software Foundation
 * and appearing in the files LICENSE_GPL_v2.txt and
 * LICENSE_GPL_v3.txt included in the packaging of this file.
 *
 * \par
 * In addition, as a special exception, you have permission to link
 * this software with the libraries of the COIN-OR Osi project
 * (http://www.coin-or.org/projects/Osi.xml), all libraries required
 * by Osi, and all LP-solver libraries directly supported by the
 * COIN-OR Osi project, and distribute executables, as long as
 * you follow the requirements of the GNU General Public License
 * in regard to all of the software in the executable aside from these
 * third-party libraries.
 * 
 * \par
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * \par
 * You should have received a copy of the GNU General Public 
 * License along with this program; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 * 
 * \see  http://www.gnu.org/copyleft/gpl.html
 ***************************************************************/


#include <ogdf/fileformats/DinoUmlModelGraph.h>


namespace ogdf {

	//
	// C o n s t r u c t o r
	//
	DinoUmlModelGraph::DinoUmlModelGraph(){

		// Initialize arrays
		m_nodeLabel.init(*this);
		m_eType.init(*this,Graph::association);
		m_vType.init(*this,Graph::vertex);

	}

	//
	// D e s t r u c t o r
	//
	DinoUmlModelGraph::~DinoUmlModelGraph(){

		// ??? Destroy arrays
	}

	//
	// o u t p u t O p e r a t o r  for DinoUmlModelGraph
	//
	ostream &operator<<(ostream &os, const DinoUmlModelGraph &modelGraph)
	{
		// Header
		os << "\n--- UmlModelGraph ---\n" << endl;

		// Traverse graph
		
		// Nodes
		NodeElement *v;
		os << "Classes/Interfaces:\n" << endl;
		forall_nodes(v,modelGraph) {
			os << "\t" << modelGraph.getNodeLabel(v) << endl;
		}

		// Edges
		EdgeElement *e;
		os << "\nRelations:\n" << endl;
		forall_edges(e,modelGraph) {
			os << "\t";
			
			if (modelGraph.type(e) == Graph::association){
				os << "Association between ";
			}
			if (modelGraph.type(e) == Graph::generalization){
				os << "Generalization between ";
			}
			if (modelGraph.type(e) == Graph::dependency){
				os << "Dependency between ";
			}

			os << modelGraph.getNodeLabel(e->source()) << " and " 
			   << modelGraph.getNodeLabel(e->target()) << endl;
		} 

		return os;

	} // <<


} // namespace ogdf
