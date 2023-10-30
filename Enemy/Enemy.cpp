#include"Enemy.h"

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

void (Enemy::* Enemy::phase_[])()
= {
	&Enemy::Approach,
	&Enemy::Leave
};

void Enemy::Init()
{
	*phase_ = Enemy::Approach;
}

void Enemy::Update()
{
	(this->*phase_[0])();
}

void Enemy::Draw()
{
}

void Enemy::Approach()
{
	printf("EnemyPhase  Approch");
}

void Enemy::Leave()
{
}

