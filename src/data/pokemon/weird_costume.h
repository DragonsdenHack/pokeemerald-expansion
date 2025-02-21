// CAMBIO DE FORMA MEDIANTE ITEM, SOLO ASPECTO ESTETICO
#define WEIRD_COSTUME(normal, special) {normal, special}

struct WeirdCostume {
	u16 species;
	u16 changeSpecies;
};

static const struct WeirdCostume gWeirdCostume[] = {
    WEIRD_COSTUME(SPECIES_GYARADOS, SPECIES_GYARADOSZ),
	WEIRD_COSTUME(SPECIES_DRAGONITE, SPECIES_DRAGONITE_BOND),
};
#undef WEIRD_COSTUME