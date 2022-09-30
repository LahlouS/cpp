#ifndef TEST
#define TEST

#include <iostream>
#include <string>

class Personnage {
	public:
		Personnage(std::string name);
		void	RecevoirCoups(int degats);
		void	coupDePoint(Personnage & cible) const;
		void	print(void) const;
	private:
		int p_vie;
		std::string p_name;
};

class Guerrier : public Personnage {
	public:
		void	coupDeHache(Personnage & cible) const;
};


class Magicien : public Personnage {
    public:
		Magicien();
		Magicien(std::string name);
        void bouleDeFeu(Personnage & cible) const;
        void bouleDeGlace(Personnage & cible) const;

    private:
        int p_mana;
};

#endif
