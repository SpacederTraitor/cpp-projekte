#include "ordermodel.h"

OrderListModel::OrderListModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

int OrderListModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid()) return 0;
    return m_list.size();
}

QVariant OrderListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid()) return QVariant();
    if (role == Qt::DisplayRole) return QString::number(m_list.at(index.row()));
    return QVariant();
}

void OrderListModel::addOrder(int value)
{
    beginResetModel();
    m_list.insertSorted(value);
    endResetModel();
}

void OrderListModel::clearOrders()
{
    beginResetModel();
    m_list.clear();
    endResetModel();
}
