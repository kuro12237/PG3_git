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
	*phase_ = &Enemy::Approach;
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
	printf("EnemyPhase  Approch\n");
	Sleep(1 * 1000);
	PhaseTimer_--;
	if (PhaseTimer_<=0)
	{
		PhaseTimer_ = PhaseTimerMax_;
		*phase_ = &Enemy::Leave;
	}
}

void Enemy::Leave()
{
	printf("EnemyPhase  Leave\n");
	Sleep(1 * 1000);
	PhaseTimer_--;

}

