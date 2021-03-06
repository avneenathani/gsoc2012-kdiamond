/***************************************************************************
 *   Copyright 2008-2010 Stefan Majewsky <majewsky@gmx.net>
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public
 *   License as published by the Free Software Foundation; either
 *   version 2 of the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 ***************************************************************************/

#ifndef KDIAMOND_VIEW_H
#define KDIAMOND_VIEW_H

#include <QGraphicsView>

namespace KDiamond
{

	class View : public QGraphicsView
	{
		public:
			View(QWidget* parent = 0);

			void setScene(QGraphicsScene* scene);
		protected:
			virtual void resizeEvent(QResizeEvent* event);
			virtual void wheelEvent(QWheelEvent* event);
	};

}

#endif // KDIAMOND_VIEW_H
