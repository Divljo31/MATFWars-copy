#ifndef WARGAME_H
#define WARGAME_H

#include <QDialog>
#include <QVector>
#include "FunctionNode.h"
#include "ObstacleNode.h"
#include "Player.h"
#include "Obstacle.h"

//menjano
#include <QLineEdit>
#include <QPushButton>

#include "PlayerNode.h"
#include "check.h"
#include <QGraphicsScene>

namespace Ui {
class WarGame;
}

class WarGame : public QDialog
{
    Q_OBJECT

public:
    explicit WarGame(QWidget *parent = nullptr);
    ~WarGame();
 //   Obstacle getObstacle(size_t index) const;

    void startWarGame();

private:
    Player* generatePlayer(int width, int height);
    void generateObstacles(int width, int height);
    QPointF randomPoint(int width, int height, double playerOrObstacle);
    bool allowedObstacle(Obstacle* o);
    bool allowedPlayer(Player* p);
    void cleanUp();
    void flipCanvas();
    void drawCanvas();
    void collisionDetection(Function* f);
    bool isPointInCircle(QPointF p, QPointF center, double radius);
    QPointF getFirePosition();

private:
    Player* player0;
    Player* player1;
    int currentPlayer = 0;
    QSet<Obstacle*> obstacles;
    QGraphicsScene *m_canvas;
    int gridWidth = 30;
    int gridHeight = 18;

signals:
    void backWarClicked();
    void newPlayerIsSet(PlayerNode* playerNode);
    void newObstacleIsSet(ObstacleNode* obstacleNode);
    void newFunctionIsSet(FunctionNode* functionNode);
    void setCoordinateSystem();
    void cleanUpCanvas();

private slots:
    void on_back_war_button_clicked();
    void on_quit_war_button_clicked();
    void fireFunction();

private:
    Ui::WarGame *ui;
    Check *ptrCheck;
    QString backStyle;
    QString fireStyle;
    QString quitStyle;

//menjam
    void switchPlayer();

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;

};

#endif // WARGAME_H
