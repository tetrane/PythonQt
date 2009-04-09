#include "PythonQtWrapper_QModelIndex.h"

#include <QVariant>
#include <qabstractitemmodel.h>

QModelIndex* PythonQtWrapper_QModelIndex::new_QModelIndex()
{ 
return new QModelIndex(); }

QModelIndex* PythonQtWrapper_QModelIndex::new_QModelIndex(const QModelIndex&  other)
{ 
return new QModelIndex(other); }

QModelIndex  PythonQtWrapper_QModelIndex::child(QModelIndex* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->child(row, column);
}

int  PythonQtWrapper_QModelIndex::column(QModelIndex* theWrappedObject) const
{
return theWrappedObject->column();
}

QVariant  PythonQtWrapper_QModelIndex::data(QModelIndex* theWrappedObject, int  role) const
{
return theWrappedObject->data(role);
}

Qt::ItemFlags  PythonQtWrapper_QModelIndex::flags(QModelIndex* theWrappedObject) const
{
return theWrappedObject->flags();
}

qint64  PythonQtWrapper_QModelIndex::internalId(QModelIndex* theWrappedObject) const
{
return theWrappedObject->internalId();
}

void*  PythonQtWrapper_QModelIndex::internalPointer(QModelIndex* theWrappedObject) const
{
return theWrappedObject->internalPointer();
}

bool  PythonQtWrapper_QModelIndex::isValid(QModelIndex* theWrappedObject) const
{
return theWrappedObject->isValid();
}

const QAbstractItemModel*  PythonQtWrapper_QModelIndex::model(QModelIndex* theWrappedObject) const
{
return theWrappedObject->model();
}

bool  PythonQtWrapper_QModelIndex::operator_less(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
return *theWrappedObject < other;
}

bool  PythonQtWrapper_QModelIndex::operator_equal(QModelIndex* theWrappedObject, const QModelIndex&  other) const
{
return *theWrappedObject == other;
}

QModelIndex  PythonQtWrapper_QModelIndex::parent(QModelIndex* theWrappedObject) const
{
return theWrappedObject->parent();
}

int  PythonQtWrapper_QModelIndex::row(QModelIndex* theWrappedObject) const
{
return theWrappedObject->row();
}

QModelIndex  PythonQtWrapper_QModelIndex::sibling(QModelIndex* theWrappedObject, int  row, int  column) const
{
return theWrappedObject->sibling(row, column);
}
