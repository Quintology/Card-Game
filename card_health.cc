bool enemy( int enemyhealth, int enemydamage) {
	char attack;

	while (enemyhealth > 0) {


		//cout<< "stats \n

		std::cout << "Your Health ";
		std::cout << myhealth;
		std::cout << ": Enemy Health ";
		std::cout << enemyhealth;
		std::cout << "\n";
		std::cin >> mykick;

		if (attack == 'B') {
			enemyhealth -= mydamage;
			myhealth -= enemydamage;
		}

		if (enemyhealth <= 0) {
			myhealth += 5;
			mydamage += 2;
			mylvl++;
			std::cout << "you killed the enemy, Health= ";
			std::cout << myhealth;
			std::cout << ", Damage= ";
std::cout << my damage:
			          std::cout << "\n";
			return true;
		}
	}
	return false;

}
