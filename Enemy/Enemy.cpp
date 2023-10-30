#include"Enemy.h"

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

void (Enemy::* Enemy::sPhaseTable_[])()
= {
	&Enemy::Approach,
	&Enemy::Leave
};

void Enemy::Init()
{
	printf("初期化\n");
	phase_ = Phase::Approach;
}

void Enemy::Update()
{
	(this->*sPhaseTable_[static_cast<size_t>(this->phase_)])();
}

void Enemy::Approach()
{
	printf("EnemyPhase  Approch\n 切り替わりまで : %d\n",PhaseTimer_);
	Sleep(1 * 1000);

	PhaseTimer_--;
	if (PhaseTimer_<=0)
	{
		PhaseTimer_ = PhaseTimerMax_;
		phase_ = Phase::Leave;
	}
}

void Enemy::Leave()
{
	printf("EnemyPhase  Leave\n 終了まで : %d\n",PhaseTimer_);
	Sleep(1 * 1000);
	
	PhaseTimer_--;
	if (PhaseTimer_<=0)
	{
		isGameLoop_ = false;
	}
}

