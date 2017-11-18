/*
 * Copyright (C) 2017 Damir Porobic <https://github.com/damirporobic>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef PAINTERLINE_H
#define PAINTERLINE_H

#include "AbstractPainterItem.h"

class PainterLine : public AbstractPainterItem
{
public:
    PainterLine(const QPointF &pos, const QPen &attributes);
    virtual QRectF boundingRect() const override;
    virtual void addPoint(const QPointF &pos, bool modifier = 0) override;
    virtual void moveTo(const QPointF &newPos) override;
    virtual bool containsRect(const QPointF &topLeft, const QSize &size) const override;

protected:
    QLineF *mLine;

private:
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *) override;
};

#endif // PAINTERLINE_H
