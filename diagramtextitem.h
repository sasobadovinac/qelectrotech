#ifndef DIAGRAM_TEXT_ITEM_H
#define DIAGRAM_TEXT_ITEM_H
#include <QtGui>
#include "diagram.h"
/**
	Cette classe represente un champ de texte editable sur le schema.
*/
class DiagramTextItem : public QGraphicsTextItem {
	// constructeurs, destructeur
	public:
	DiagramTextItem(QGraphicsItem * = 0, QGraphicsScene * = 0);
	DiagramTextItem(const QString &, QGraphicsItem * = 0, QGraphicsScene * = 0);
	virtual ~DiagramTextItem();
	
	// attributs
	public:
	enum { Type = UserType + 1004 };
	/// Texte precedent
	QString previous_text;
	
	// methodes
	public:
	/**
		Cette methode permet d'utiliser qgraphicsitem_cast sur cet objet
		@return le type de QGraphicsItem
	*/
	virtual int type() const { return Type; }
	Diagram *diagram() const;
	
	protected:
	virtual void focusOutEvent(QFocusEvent *);
};
#endif
