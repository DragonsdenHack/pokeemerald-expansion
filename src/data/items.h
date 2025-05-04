const struct Item gItems[] =
{
    [ITEM_NONE] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Poké Balls

    [ITEM_POKE_BALL] =
    {
        .name = _("Pokéball"),
        .itemId = ITEM_POKE_BALL,
        .price = 200,
        .description = sPokeBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_POKE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_POKE_BALL - FIRST_BALL,
    },

    [ITEM_GREAT_BALL] =
    {
        .name = _("Superball"),
        .itemId = ITEM_GREAT_BALL,
        .price = 600,
        .description = sGreatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_GREAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_GREAT_BALL - FIRST_BALL,
    },

    [ITEM_ULTRA_BALL] =
    {
        .name = _("Hyperball"),
        .itemId = ITEM_ULTRA_BALL,
        .price = 1200,
        .description = sUltraBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_ULTRA_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_ULTRA_BALL - FIRST_BALL,
    },

    [ITEM_MASTER_BALL] =
    {
        .name = _("Meisterball"),
        .itemId = ITEM_MASTER_BALL,
        .price = 50000,
        .description = sMasterBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_MASTER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_MASTER_BALL - FIRST_BALL,
    },

    [ITEM_PREMIER_BALL] =
    {
        .name = _("Premierball"),
        .itemId = ITEM_PREMIER_BALL,
        .price = 20,
        .description = sPremierBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_PREMIER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_PREMIER_BALL - FIRST_BALL,
    },

    [ITEM_HEAL_BALL] =
    {
        .name = _("Heilball"),
        .itemId = ITEM_HEAL_BALL,
        .price = 300,
        .description = sHealBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_HEAL_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_HEAL_BALL - FIRST_BALL,
    },

    [ITEM_NET_BALL] =
    {
        .name = _("Netzball"),
        .itemId = ITEM_NET_BALL,
        .price = 1000,
        .description = sNetBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NET_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_NET_BALL - FIRST_BALL,
    },

    [ITEM_NEST_BALL] =
    {
        .name = _("Nestball"),
        .itemId = ITEM_NEST_BALL,
        .price = 1000,
        .description = sNestBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NEST_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_NEST_BALL - FIRST_BALL,
    },

    [ITEM_DIVE_BALL] =
    {
        .name = _("Tauchball"),
        .itemId = ITEM_DIVE_BALL,
        .price = 1000,
        .description = sDiveBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_DIVE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_DIVE_BALL - FIRST_BALL,
    },

    [ITEM_DUSK_BALL] =
    {
        .name = _("Finsterball"),
        .itemId = ITEM_DUSK_BALL,
        .price = 1000,
        .description = sDuskBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_DUSK_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_DUSK_BALL - FIRST_BALL,
    },

    [ITEM_TIMER_BALL] =
    {
        .name = _("Timerball"),
        .itemId = ITEM_TIMER_BALL,
        .price = 1000,
        .description = sTimerBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_TIMER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_TIMER_BALL - FIRST_BALL,
    },

    [ITEM_QUICK_BALL] =
    {
        .name = _("Flottball"),
        .itemId = ITEM_QUICK_BALL,
        .price = 1000,
        .description = sQuickBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_QUICK_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_QUICK_BALL - FIRST_BALL,
    },

    [ITEM_REPEAT_BALL] =
    {
        .name = _("Wiederball"),
        .itemId = ITEM_REPEAT_BALL,
        .price = 1000,
        .description = sRepeatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_REPEAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_REPEAT_BALL - FIRST_BALL,
    },

    [ITEM_LUXURY_BALL] =
    {
        .name = _("Luxusball"),
        .itemId = ITEM_LUXURY_BALL,
        .price = 1000,
        .description = sLuxuryBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LUXURY_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LUXURY_BALL - FIRST_BALL,
    },

    [ITEM_LEVEL_BALL] =
    {
        .name = _("Levelball"),
        .itemId = ITEM_LEVEL_BALL,
        .price = 1000,
        .description = sLevelBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LEVEL_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LEVEL_BALL - FIRST_BALL,
    },

    [ITEM_LURE_BALL] =
    {
        .name = _("Köderball"),
        .itemId = ITEM_LURE_BALL,
        .price = 1000,
        .description = sLureBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LURE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LURE_BALL - FIRST_BALL,
    },

    [ITEM_MOON_BALL] =
    {
        .name = _("Mondball"),
        .itemId = ITEM_MOON_BALL,
        .price = 1000,
        .description = sMoonBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_MOON_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_MOON_BALL - FIRST_BALL,
    },

    [ITEM_FRIEND_BALL] =
    {
        .name = _("Freundesball"),
        .itemId = ITEM_FRIEND_BALL,
        .price = 1000,
        .description = sFriendBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_FRIEND_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_FRIEND_BALL - FIRST_BALL,
    },

    [ITEM_LOVE_BALL] =
    {
        .name = _("Sympaball"),
        .itemId = ITEM_LOVE_BALL,
        .price = 1000,
        .description = sLoveBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LOVE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LOVE_BALL - FIRST_BALL,
    },

    [ITEM_FAST_BALL] =
    {
        .name = _("Turboball"),
        .itemId = ITEM_FAST_BALL,
        .price = 1000,
        .description = sFastBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_FAST_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_FAST_BALL - FIRST_BALL,
    },

    [ITEM_HEAVY_BALL] =
    {
        .name = _("Schwerball"),
        .itemId = ITEM_HEAVY_BALL,
        .price = 1000,
        .description = sHeavyBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_HEAVY_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_HEAVY_BALL - FIRST_BALL,
    },

    [ITEM_DREAM_BALL] =
    {
        .name = _("Traumball"),
        .itemId = ITEM_DREAM_BALL,
        .price = 1000,
        .description = sDreamBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_DREAM_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_DREAM_BALL - FIRST_BALL,
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = _("Safariball"),
        .itemId = ITEM_SAFARI_BALL,
        .price = 500,
        .description = sSafariBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_SAFARI_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_SAFARI_BALL - FIRST_BALL,
    },

    [ITEM_SPORT_BALL] =
    {
        .name = _("Turnierball"),
        .itemId = ITEM_SPORT_BALL,
        .price = 1000,
        .description = sSportBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_SPORT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_SPORT_BALL - FIRST_BALL,
    },

    [ITEM_PARK_BALL] =
    {
        .name = _("Parkball"),
        .itemId = ITEM_PARK_BALL,
        .price = 1000,
        .description = sParkBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_PARK_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_PARK_BALL - FIRST_BALL,
    },

    [ITEM_BEAST_BALL] =
    {
        .name = _("Ultraball"),
        .itemId = ITEM_BEAST_BALL,
        .price = 1000,
        .description = sBeastBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_BEAST_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_BEAST_BALL - FIRST_BALL,
    },

    [ITEM_CHERISH_BALL] =
    {
        .name = _("Jubelball"),
        .itemId = ITEM_CHERISH_BALL,
        .price = 1000,
        .description = sCherishBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_CHERISH_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_CHERISH_BALL - FIRST_BALL,
    },

// Medicine

    [ITEM_POTION] =
    {
        .name = _("Trank"),
        .itemId = ITEM_POTION,
        .price = 200,
        .holdEffectParam = 20,
        .description = sPotionDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SUPER_POTION] =
    {
        .name = _("Supertrank"),
        .itemId = ITEM_SUPER_POTION,
        .price = 700,
        .holdEffectParam = 60,
        .description = sSuperPotionDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_HYPER_POTION] =
    {
        .name = _("Hypertrank"),
        .itemId = ITEM_HYPER_POTION,
        .price = 1200,
        .holdEffectParam = 200,
        .description = sHyperPotionDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_POTION] =
    {
        .name = _("Top-Trank"),
        .itemId = ITEM_MAX_POTION,
        .price = 2500,
        .holdEffectParam = 255,
        .description = sMaxPotionDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FULL_RESTORE] =
    {
        .name = _("Top-Genesung"),
        .itemId = ITEM_FULL_RESTORE,
        .price = 3000,
        .holdEffectParam = 255,
        .description = sFullRestoreDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_REVIVE] =
    {
        .name = _("Beleber"),
        .itemId = ITEM_REVIVE,
        .price = 2000,
        .description = sReviveDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_REVIVE] =
    {
        .name = _("Top-Beleber"),
        .itemId = ITEM_MAX_REVIVE,
        .price = 4000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FRESH_WATER] =
    {
        .name = _("Tafelwasser"),
        .itemId = ITEM_FRESH_WATER,
        .price = 200,
        .holdEffectParam = 50,
        .description = sFreshWaterDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SODA_POP] =
    {
        .name = _("Sprudel"),
        .itemId = ITEM_SODA_POP,
        .price = 300,
        .holdEffectParam = 60,
        .description = sSodaPopDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LEMONADE] =
    {
        .name = _("Limonade"),
        .itemId = ITEM_LEMONADE,
        .price = 400,
        .holdEffectParam = 80,
        .description = sLemonadeDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MOOMOO_MILK] =
    {
        .name = _("Kuhmuh-Milch"),
        .itemId = ITEM_MOOMOO_MILK,
        .price = 600,
        .holdEffectParam = 100,
        .description = sMoomooMilkDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ENERGY_POWDER] =
    {
        .name = _("Energiestaub"),
        .itemId = ITEM_ENERGY_POWDER,
        .price = 500,
        .description = sEnergyPowderDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ENERGY_ROOT] =
    {
        .name = _("Kraftwurzel"),
        .itemId = ITEM_ENERGY_ROOT,
        .price = 1200,
        .description = sEnergyRootDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_HEAL_POWDER] =
    {
        .name = _("Heilpuder"),
        .itemId = ITEM_HEAL_POWDER,
        .price = 300,
        .description = sHealPowderDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_REVIVAL_HERB] =
    {
        .name = _("Vitalkraut"),
        .itemId = ITEM_REVIVAL_HERB,
        .price = 2800,
        .description = sRevivalHerbDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ANTIDOTE] =
    {
        .name = _("Gegengift"),
        .itemId = ITEM_ANTIDOTE,
        .price = 200,
        .description = sAntidoteDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PARALYZE_HEAL] =
    {
        .name = _("Para-Heiler"),
        .itemId = ITEM_PARALYZE_HEAL,
        .price = 300,
        .description = sParalyzeHealDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_BURN_HEAL] =
    {
        .name = _("Feuerheiler"),
        .itemId = ITEM_BURN_HEAL,
        .price = 300,
        .description = sBurnHealDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ICE_HEAL] =
    {
        .name = _("Eisheiler"),
        .itemId = ITEM_ICE_HEAL,
        .price = 100,
        .description = sIceHealDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_AWAKENING] =
    {
        .name = _("Aufwecker"),
        .itemId = ITEM_AWAKENING,
        .price = 100,
        .description = sAwakeningDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FULL_HEAL] =
    {
        .name = _("Hyperheiler"),
        .itemId = ITEM_FULL_HEAL,
        .price = 400,
        .description = sFullHealDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ETHER] =
    {
        .name = _("Äther"),
        .itemId = ITEM_ETHER,
        .price = 1200,
        .holdEffectParam = 10,
        .description = sEtherDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_MAX_ETHER] =
    {
        .name = _("Top-Äther"),
        .itemId = ITEM_MAX_ETHER,
        .price = 2000,
        .holdEffectParam = 255,
        .description = sMaxEtherDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_ELIXIR] =
    {
        .name = _("Elixier"),
        .itemId = ITEM_ELIXIR,
        .price = 3000,
        .holdEffectParam = 10,
        .description = sElixirDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_MAX_ELIXIR] =
    {
        .name = _("Top-Elixier"),
        .itemId = ITEM_MAX_ELIXIR,
        .price = 4500,
        .holdEffectParam = 255,
        .description = sMaxElixirDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_BERRY_JUICE] =
    {
        .name = _("Beerensaft"),
        .itemId = ITEM_BERRY_JUICE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
        .description = sBerryJuiceDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SACRED_ASH] =
    {
        .name = _("Zauberasche"),
        .itemId = ITEM_SACRED_ASH,
        .price = 14000,
        .description = sSacredAshDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
    },

    [ITEM_SWEET_HEART] =
    {
        .name = _("Herzkonfekt"),
        .itemId = ITEM_SWEET_HEART,
        .price = 3000,
        .holdEffectParam = 20,
        .description = sSweetHeartDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_HONEY] = // Todo
    {
        .name = _("Dyna-Honig"),
        .itemId = ITEM_MAX_HONEY,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Regional Specialties

    [ITEM_PEWTER_CRUNCHIES] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAGE_CANDY_BAR] = // Todo
    {
        .name = _("Wutkeks"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LAVA_COOKIE] =
    {
        .name = _("Lavakeks"),
        .itemId = ITEM_LAVA_COOKIE,
        .price = 350,
        .description = sLavaCookieDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_OLD_GATEAU] =
    {
        .name = _("Spezialität"),
        .itemId = ITEM_OLD_GATEAU,
        .price = 350,
        .description = sOldGateauDesc,
        .pocket = POCKET_ITEMS,
        .type = POCKET_MEDICINE,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_CASTELIACONE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUMIOSE_GALETTE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHALOUR_SABLE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_MALASADA] =
    {
        .name = _("Maxi-Malasada"),
        .itemId = ITEM_BIG_MALASADA,
        .price = 350,
        .description = sBigMalasadaDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

// Vitamins

    [ITEM_HP_UP] =
    {
        .name = _("KP-Plus"),
        .itemId = ITEM_HP_UP,
        .price = 3000,
        .description = sHPUpDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_PROTEIN] =
    {
        .name = _("Protein"),
        .itemId = ITEM_PROTEIN,
        .price = 3000,
        .description = sProteinDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_IRON] =
    {
        .name = _("Eisen"),
        .itemId = ITEM_IRON,
        .price = 3000,
        .description = sIronDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CALCIUM] =
    {
        .name = _("Kalzium"),
        .itemId = ITEM_CALCIUM,
        .price = 3000,
        .description = sCalciumDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_ZINC] =
    {
        .name = _("Zink"),
        .itemId = ITEM_ZINC,
        .price = 3000,
        .description = sZincDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CARBOS] =
    {
        .name = _("Carbon"),
        .itemId = ITEM_CARBOS,
        .price = 3000,
        .description = sCarbosDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_PP_UP] =
    {
        .name = _("AP-Plus"),
        .itemId = ITEM_PP_UP,
        .price = 10000,
        .description = sPPUpDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

    [ITEM_PP_MAX] =
    {
        .name = _("AP-Top"),
        .itemId = ITEM_PP_MAX,
        .price = 10000,
        .description = sPPMaxDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

// EV Feathers

    [ITEM_HEALTH_FEATHER] =
    {
        .name = _("Heilfeder"),
        .itemId = ITEM_HEALTH_FEATHER,
        .price = 1000,
        .description = sHealthFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_MUSCLE_FEATHER] =
    {
        .name = _("Kraftfeder"),
        .itemId = ITEM_MUSCLE_FEATHER,
        .price = 1000,
        .description = sMuscleFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_RESIST_FEATHER] =
    {
        .name = _("Abwehrfeder"),
        .itemId = ITEM_RESIST_FEATHER,
        .price = 1000,
        .description = sResistFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_GENIUS_FEATHER] =
    {
        .name = _("Geniefeder"),
        .itemId = ITEM_GENIUS_FEATHER,
        .price = 1000,
        .description = sGeniusFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CLEVER_FEATHER] =
    {
        .name = _("Espritfeder"),
        .itemId = ITEM_CLEVER_FEATHER,
        .price = 1000,
        .description = sCleverFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_SWIFT_FEATHER] =
    {
        .name = _("Flinkfeder"),
        .itemId = ITEM_SWIFT_FEATHER,
        .price = 1000,
        .description = sSwiftFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

// Ability Modifiers

    [ITEM_ABILITY_CAPSULE] =
    {
        .name = _("Fähigk-Kapsl"),
        .itemId = ITEM_ABILITY_CAPSULE,
        .price = 10000,
        .holdEffectParam = 0,
        .description = sAbilityCapsuleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityCapsule,
    },

    [ITEM_ABILITY_PATCH] = // Todo
    {
        .name = _("Fähig-Pflstr"),
        .itemId = ITEM_ABILITY_PATCH,
        .price = 10000,
        .description = sAbilityPatchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityPatch,
    },

// Candy

    [ITEM_RARE_CANDY] =
    {
        .name = _("Sonderbonbon"),
        .itemId = ITEM_RARE_CANDY,
        .price = 15000,
        .description = sRareCandyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    },

    [ITEM_EXP_CANDY_XS] = // Todo
    {
        .name = _("EP-Bonbon XS"),
        .itemId = ITEM_EXP_CANDY_XS,
        .price = 1500,
        .description = sExpCandyXSDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CandyXS,
    },

    [ITEM_EXP_CANDY_S] = // Todo
    {
        .name = _("EP-Bonbon S"),
        .itemId = ITEM_EXP_CANDY_S,
        .price = 3000,
        .description = sExpCandySDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CandyS,
    },
	
	[ITEM_EXP_CANDY_XM] = // Todo
    {
        .name = _("EP-Bonbon XM"),
        .itemId = ITEM_EXP_CANDY_XM,
        .price = 4500,
        .description = sExpCandyXMDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CandyXM,
    },

    [ITEM_EXP_CANDY_M] = // Todo
    {
        .name = _("EP-Bonbon M"),
        .itemId = ITEM_EXP_CANDY_M,
        .price = 6500,
        .description = sExpCandyMDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CandyM,
    },

    [ITEM_EXP_CANDY_L] = // Todo
    {
        .name = _("EP-Bonbon L"),
        .itemId = ITEM_EXP_CANDY_L,
        .price = 7500,
        .description = sExpCandyLDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CandyL,
    },

    [ITEM_EXP_CANDY_XL] = // Todo
    {
        .name = _("EP-Bonbon XL"),
        .itemId = ITEM_EXP_CANDY_XL,
        .price = 8500,
        .description = sExpCandyXLDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CandyXL,
    },

    [ITEM_DYNAMAX_CANDY] = // Todo
    {
        .name = _("Dynam-Bonbon"),
        .itemId = ITEM_DYNAMAX_CANDY,
        .price = 9500,
        .description = sDynamaxCandyDesc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CandyDynamax,
    },
	
	[ITEM_DYNAMAX_CANDY2] = // Todo
    {
        .name = _("Dyn-BonbonS"),
        .itemId = ITEM_DYNAMAX_CANDY2,
        .price = 10500,
        .description = sDynamaxCandy2Desc,
        .pocket = POCKET_MEDICINE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CandyDynamax2,
    },

// Medicinal Flutes

    [ITEM_BLUE_FLUTE] =
    {
        .name = _("Blaue Flöte"),
        .itemId = ITEM_BLUE_FLUTE,
        .price = 2000,
        .description = sBlueFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_YELLOW_FLUTE] =
    {
        .name = _("Gelbe Flöte"),
        .itemId = ITEM_YELLOW_FLUTE,
        .price = 2000,
        .description = sYellowFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_RED_FLUTE] =
    {
        .name = _("Rote Flöte"),
        .itemId = ITEM_RED_FLUTE,
        .price = 2000,
        .description = sRedFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

// Encounter-modifying Flutes

    [ITEM_BLACK_FLUTE] =
    {
        .name = _("Schwrz Flöte"),
        .itemId = ITEM_BLACK_FLUTE,
        .price = 2000,
        .holdEffectParam = 50,
        .description = sBlackFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    },

    [ITEM_WHITE_FLUTE] =
    {
        .name = _("Weiße Flöte"),
        .itemId = ITEM_WHITE_FLUTE,
        .price = 2000,
        .holdEffectParam = 150,
        .description = sWhiteFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    },

// Encounter Modifiers

    [ITEM_REPEL] =
    {
        .name = _("Schutz"),
        .itemId = ITEM_REPEL,
        .price = 400,
        .holdEffectParam = 100,
        .description = sRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_SUPER_REPEL] =
    {
        .name = _("Superschutz"),
        .itemId = ITEM_SUPER_REPEL,
        .price = 700,
        .holdEffectParam = 200,
        .description = sSuperRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_MAX_REPEL] =
    {
        .name = _("Top-Schutz"),
        .itemId = ITEM_MAX_REPEL,
        .price = 900,
        .holdEffectParam = 250,
        .description = sMaxRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_LURE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SUPER_LURE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAX_LURE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ESCAPE_ROPE] =
    {
        .name = _("Fluchtseil"),
        .itemId = ITEM_ESCAPE_ROPE,
        .description = sEscapeRopeDesc,
        #if I_KEY_ESCAPE_ROPE >= GEN_8
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #else
            .price = 1000,
            .pocket = POCKET_ITEMS,
        #endif
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
    },

// X Items

    [ITEM_X_ATTACK] =
    {
        .name = _("X-Angriff"),
        .itemId = ITEM_X_ATTACK,
        .price = 1000,
        .description = sXAttackDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_DEFENSE] =
    {
        .name = _("X-Abwehr"),
        .itemId = ITEM_X_DEFENSE,
        .price = 2000,
        .description = sXDefenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SP_ATK] =
    {
        .name = _("X-Spezial"),
        .itemId = ITEM_X_SP_ATK,
        .price = 1000,
        .description = sXSpAtkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SP_DEF] =
    {
        .name = _("X-Spzl-Vert"),
        .itemId = ITEM_X_SP_DEF,
        .price = 2000,
        .description = sXSpDefDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SPEED] =
    {
        .name = _("X-Tempo"),
        .itemId = ITEM_X_SPEED,
        .price = 1000,
        .description = sXSpeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_ACCURACY] =
    {
        .name = _("X-Treffer"),
        .itemId = ITEM_X_ACCURACY,
        .price = 1000,
        .description = sXAccuracyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_DIRE_HIT] =
    {
        .name = _("Angriffplus"),
        .itemId = ITEM_DIRE_HIT,
        .price = 1000,
        .description = sDireHitDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_GUARD_SPEC] =
    {
        .name = _("Megablock"),
        .itemId = ITEM_GUARD_SPEC,
        .price = 1500,
        .description = sGuardSpecDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_POKE_DOLL] =
    {
        .name = _("Poképuppe"),
        .itemId = ITEM_POKE_DOLL,
        .price = 100,
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_Escape,
    },

    [ITEM_FLUFFY_TAIL] =
    {
        .name = _("Eneco-Rute"),
        .itemId = ITEM_FLUFFY_TAIL,
        .price = 100,
        .description = sFluffyTailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_Escape,
    },

    [ITEM_POKE_TOY] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAX_MUSHROOMS] = // Todo
    {
        .name = _("Dyna-Pilz"),
        .itemId = ITEM_MAX_MUSHROOMS,
        .price = 8000,
        .description = sMaxMushroomsDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Treasures

    [ITEM_BOTTLE_CAP] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GOLD_BOTTLE_CAP] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NUGGET] =
    {
        .name = _("Nugget"),
        .itemId = ITEM_NUGGET,
        .price = 10000,
        .description = sNuggetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_NUGGET] = // Todo
    {
        .name = _("Riesennugget"),
        .itemId = ITEM_BIG_NUGGET,
        .price = 20000,
        .description = sBigNuggetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TINY_MUSHROOM] =
    {
        .name = _("Minipilz"),
        .itemId = ITEM_TINY_MUSHROOM,
        .price = 500,
        .description = sTinyMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_MUSHROOM] =
    {
        .name = _("Riesenpilz"),
        .itemId = ITEM_BIG_MUSHROOM,
        .price = 5000,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BALM_MUSHROOM] = // Todo
    {
        .name = _("Duftpilz"),
        .itemId = ITEM_BALM_MUSHROOM,
        .price = 15000,
        .description = sBalmMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PEARL] =
    {
        .name = _("Perle"),
        .itemId = ITEM_PEARL,
        .price = 2000,
        .description = sPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_PEARL] =
    {
        .name = _("Riesenperle"),
        .itemId = ITEM_BIG_PEARL,
        .price = 8000,
        .description = sBigPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PEARL_STRING] = // Todo
    {
        .name = _("Triperle"),
        .itemId = ITEM_PEARL_STRING,
        .price = 20000,
        .description = sPearlStringDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STARDUST] =
    {
        .name = _("Sternenstaub"),
        .itemId = ITEM_STARDUST,
        .price = 5000,
        .description = sStardustDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STAR_PIECE] =
    {
        .name = _("Sternenstück"),
        .itemId = ITEM_STAR_PIECE,
        .price = 9800,
        .description = sStarPieceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_COMET_SHARD] = // Todo
    {
        .name = _("Kometstück"),
        .itemId = ITEM_COMET_SHARD,
        .price = 30000,
        .description = sCometShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHOAL_SALT] =
    {
        .name = _("Küstensalz"),
        .itemId = ITEM_SHOAL_SALT,
        .price = 20,
        .description = sShoalSaltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHOAL_SHELL] =
    {
        .name = _("Küstenschale"),
        .itemId = ITEM_SHOAL_SHELL,
        .price = 20,
        .description = sShoalShellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RED_SHARD] =
    {
        .name = _("Purpurstück"),
        .itemId = ITEM_RED_SHARD,
        .price = 1000,
        .description = sRedShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_SHARD] =
    {
        .name = _("Indigostück"),
        .itemId = ITEM_BLUE_SHARD,
        .price = 1000,
        .description = sBlueShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_SHARD] =
    {
        .name = _("Gelbstück"),
        .itemId = ITEM_YELLOW_SHARD,
        .price = 1000,
        .description = sYellowShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_SHARD] =
    {
        .name = _("Grünstück"),
        .itemId = ITEM_GREEN_SHARD,
        .price = 1000,
        .description = sGreenShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEART_SCALE] =
    {
        .name = _("Herzschuppe"),
        .itemId = ITEM_HEART_SCALE,
        .price = 100,
        .description = sHeartScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HONEY] =
    {
        .name = _("Honig"),
        .itemId = ITEM_HONEY,
        .price = 300,
        .description = sHoneyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RARE_BONE] =
    {
        .name = _("Steinknochen"),
        .itemId = ITEM_RARE_BONE,
        .price = 5000,
        .description = sRareBoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ODD_KEYSTONE] =
    {
        .name = _("Spiritkern"),
        .itemId = ITEM_ODD_KEYSTONE,
        .price = 12000,
        .holdEffect = HOLD_EFFECT_ODD,
        .description = sOddKeystoneDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PRETTY_FEATHER] =
    {
        .name = _("Prachtfeder"),
        .itemId = ITEM_PRETTY_FEATHER,
        .price = 1000,
        .description = sPrettyFeatherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_COPPER] = // Todo
    {
        .name = _("Alter Heller"),
        .itemId = ITEM_RELIC_COPPER,
        .price = 1000,
        .description = sRelicCopperDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_SILVER] = // Todo
    {
        .name = _("Alter Taler"),
        .itemId = ITEM_RELIC_SILVER,
        .price = 5000,
        .description = sRelicSilverDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_GOLD] = // Todo
    {
        .name = _("Alter Dukat"),
        .itemId = ITEM_RELIC_GOLD,
        .price = 10000,
        .description = sRelicGoldDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_VASE] = // Todo
    {
        .name = _("Alte Vase"),
        .itemId = ITEM_RELIC_VASE,
        .price = 50000,
        .description = sRelicVaseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_BAND] = // Todo
    {
        .name = _("Alter Reif"),
        .itemId = ITEM_RELIC_BAND,
        .price = 60000,
        .description = sRelicBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_STATUE] = // Todo
    {
        .name = _("Alte Statue"),
        .itemId = ITEM_RELIC_STATUE,
        .price = 64000,
        .description = sRelicStatueDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RELIC_CROWN] = // Todo
    {
        .name = _("Alte Krone"),
        .itemId = ITEM_RELIC_CROWN,
        .price = 65000,
        .description = sRelicCrownDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STRANGE_SOUVENIR] = // Todo
    {
        .name = _("Skurrlsklptr"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Fossils

    [ITEM_HELIX_FOSSIL] =
    {
        .name = _("Helixfossil"),
        .itemId = ITEM_HELIX_FOSSIL,
        .description = sHelixFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 7000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DOME_FOSSIL] =
    {
        .name = _("Domfossil"),
        .itemId = ITEM_DOME_FOSSIL,
        .description = sDomeFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 7000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OLD_AMBER] =
    {
        .name = _("Altbernstein"),
        .itemId = ITEM_OLD_AMBER,
        .description = sOldAmberDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 10000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOT_FOSSIL] =
    {
        .name = _("Wurzelfossil"),
        .itemId = ITEM_ROOT_FOSSIL,
        .description = sRootFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 7000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLAW_FOSSIL] =
    {
        .name = _("Klauenfossil"),
        .itemId = ITEM_CLAW_FOSSIL,
        .description = sClawFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = 7000,
            .pocket = POCKET_ITEMS,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ARMOR_FOSSIL] =
    {
        .name = _("Panzerfossil"),
        .itemId = ITEM_ARMOR_FOSSIL,
        .price = 7000,
        .description = sArmorFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SKULL_FOSSIL] =
    {
        .name = _("Kopffossil"),
        .itemId = ITEM_SKULL_FOSSIL,
        .price = 7000,
        .description = sSkullFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_COVER_FOSSIL] =
    {
        .name = _("Schildfossil"),
        .itemId = ITEM_COVER_FOSSIL,
        .price = 7000,
        .description = sCoverFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PLUME_FOSSIL] =
    {
        .name = _("Federfossil"),
        .itemId = ITEM_PLUME_FOSSIL,
        .price = 7000,
        .description = sPlumeFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_JAW_FOSSIL] =
    {
        .name = _("Kieferfossil"),
        .itemId = ITEM_JAW_FOSSIL,
        .price = 7000,
        .description = sJawFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SAIL_FOSSIL] =
    {
        .name = _("Flossenfossil"),
        .itemId = ITEM_SAIL_FOSSIL,
        .price = 7000,
        .description = sSailFossilDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOSSILIZED_BIRD] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOSSILIZED_FISH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOSSILIZED_DRAKE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOSSILIZED_DINO] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mulch

    [ITEM_GROWTH_MULCH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DAMP_MULCH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STABLE_MULCH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GOOEY_MULCH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RICH_MULCH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SURPRISE_MULCH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BOOST_MULCH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AMAZE_MULCH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Apricorns

    [ITEM_RED_APRICORN] =
    {
        .name = _("Aprikoko Rot"),
        .itemId = ITEM_RED_APRICORN,
        .price = 200,
        .description = sRedApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_APRICORN] =
    {
        .name = _("Aprikoko Blau"),
        .itemId = ITEM_BLUE_APRICORN,
        .price = 200,
        .description = sBlueApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_APRICORN] =
    {
        .name = _("Aprikoko Gelb"),
        .itemId = ITEM_YELLOW_APRICORN,
        .price = 200,
        .description = sYellowApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_APRICORN] =
    {
        .name = _("Aprikoko Grün"),
        .itemId = ITEM_GREEN_APRICORN,
        .price = 200,
        .description = sGreenApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINK_APRICORN] =
    {
        .name = _("Aprikoko Pink"),
        .itemId = ITEM_PINK_APRICORN,
        .price = 200,
        .description = sPinkApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHITE_APRICORN] =
    {
        .name = _("Aprikoko Weiß"),
        .itemId = ITEM_WHITE_APRICORN,
        .price = 200,
        .description = sWhiteApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_APRICORN] =
    {
        .name = _("Aprkok Schwrz"),
        .itemId = ITEM_BLACK_APRICORN,
        .price = 200,
        .description = sBlackApricornDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WISHING_PIECE] = // Todo
    {
        .name = _("Buntschwinge"),
        .itemId = ITEM_WISHING_PIECE,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_ALA_ARCOIRIS,
        .description = sWishingPieceDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GALARICA_TWIG] = // Todo
    {
        .name = _("Silberflügel"),
        .itemId = ITEM_WISHING_PIECE,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_ALA_PLATEADA,
        .description = sGalaricaTwigDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ARMORITE_ORE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DYNITE_ORE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mail

    [ITEM_ORANGE_MAIL] =
    {
        .name = _("Zigzagbrief"),
        .itemId = ITEM_ORANGE_MAIL,
        .price = 50,
        .description = sOrangeMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_ORANGE_MAIL),
    },

    [ITEM_HARBOR_MAIL] =
    {
        .name = _("Hafenbrief"),
        .itemId = ITEM_HARBOR_MAIL,
        .price = 50,
        .description = sHarborMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_HARBOR_MAIL),
    },

    [ITEM_GLITTER_MAIL] =
    {
        .name = _("Glitzerbrief"),
        .itemId = ITEM_GLITTER_MAIL,
        .price = 50,
        .description = sGlitterMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_GLITTER_MAIL),
    },

    [ITEM_MECH_MAIL] =
    {
        .name = _("Eilbrief"),
        .itemId = ITEM_MECH_MAIL,
        .price = 50,
        .description = sMechMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_MECH_MAIL),
    },

    [ITEM_WOOD_MAIL] =
    {
        .name = _("Waldbrief"),
        .itemId = ITEM_WOOD_MAIL,
        .price = 50,
        .description = sWoodMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
    },

    [ITEM_WAVE_MAIL] =
    {
        .name = _("Wellenbrief"),
        .itemId = ITEM_WAVE_MAIL,
        .price = 50,
        .description = sWaveMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
    },

    [ITEM_BEAD_MAIL] =
    {
        .name = _("Perlenbrief"),
        .itemId = ITEM_BEAD_MAIL,
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
    },

    [ITEM_SHADOW_MAIL] =
    {
        .name = _("Dunkelbrief"),
        .itemId = ITEM_SHADOW_MAIL,
        .price = 50,
        .description = sShadowMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
    },

    [ITEM_TROPIC_MAIL] =
    {
        .name = _("Tropenbrief"),
        .itemId = ITEM_TROPIC_MAIL,
        .price = 50,
        .description = sTropicMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
    },

    [ITEM_DREAM_MAIL] =
    {
        .name = _("Traumbrief"),
        .itemId = ITEM_DREAM_MAIL,
        .price = 50,
        .description = sDreamMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
    },

    [ITEM_FAB_MAIL] =
    {
        .name = _("Edelbrief"),
        .itemId = ITEM_FAB_MAIL,
        .price = 50,
        .description = sFabMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
    },

    [ITEM_RETRO_MAIL] =
    {
        .name = _("Retrobrief"),
        .itemId = ITEM_RETRO_MAIL,
        .price = 50,
        .description = sRetroMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
    },

// Evolution Items

    [ITEM_FIRE_STONE] =
    {
        .name = _("Feuerstein"),
        .itemId = ITEM_FIRE_STONE,
        .price = 2100,
        .description = sFireStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_WATER_STONE] =
    {
        .name = _("Wasserstein"),
        .itemId = ITEM_WATER_STONE,
        .price = 2100,
        .description = sWaterStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_THUNDER_STONE] =
    {
        .name = _("Donnerstein"),
        .itemId = ITEM_THUNDER_STONE,
        .price = 2100,
        .description = sThunderStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_LEAF_STONE] =
    {
        .name = _("Blattstein"),
        .itemId = ITEM_LEAF_STONE,
        .price = 2100,
        .description = sLeafStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_ICE_STONE] =
    {
        .name = _("Eisstein"),
        .itemId = ITEM_ICE_STONE,
        .price = 3000,
        .description = sIceStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_SUN_STONE] =
    {
        .name = _("Sonnenstein"),
        .itemId = ITEM_SUN_STONE,
        .price = 3000,
        .description = sSunStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_MOON_STONE] =
    {
        .name = _("Mondstein"),
        .itemId = ITEM_MOON_STONE,
        .price = 3000,
        .description = sMoonStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_SHINY_STONE] =
    {
        .name = _("Leuchtstein"),
        .itemId = ITEM_SHINY_STONE,
        .price = 3000,
        .description = sShinyStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_DUSK_STONE] =
    {
        .name = _("Finsterstein"),
        .itemId = ITEM_DUSK_STONE,
        .price = 3000,
        .description = sDuskStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_DAWN_STONE] =
    {
        .name = _("Funkelstein"),
        .itemId = ITEM_DAWN_STONE,
        .price = 3000,
        .description = sDawnStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_SWEET_APPLE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TART_APPLE] = // Todo
    {
        .name = _("Sakralstein"),
        .itemId = ITEM_TART_APPLE,
        .price = 9800,
        .description = sDawnStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_CRACKED_POT] = // Todo
    {
        .name = _("Tauschstein"),
        .itemId = ITEM_CRACKED_POT,
        .price = 9800,
        .description = sDawnStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_CHIPPED_POT] = // Todo
    {
        .name = _("Rocketstein"),
        .itemId = ITEM_CHIPPED_POT,
        .price = 50000,
        .description = sDawnStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_GALARICA_CUFF] = // Todo
    {
        .name = _("Devonstein"),
        .itemId = ITEM_GALARICA_CUFF,
        .price = 50000,
        .description = sDawnStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_GALARICA_WREATH] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_SCALE] =
    {
        .name = _("Drachenschupp"),
        .itemId = ITEM_DRAGON_SCALE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
        .holdEffectParam = 10,
        .description = sDragonScaleDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_UPGRADE] =
    {
        .name = _("Upgrade"),
        .itemId = ITEM_UPGRADE,
        .price = 11000,
        .holdEffect = HOLD_EFFECT_UPGRADE,
        .description = sUpgradeDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_PROTECTOR] =
    {
        .name = _("Schützer"),
        .itemId = ITEM_PROTECTOR,
        .price = 15000,
        .holdEffect = HOLD_EFFECT_PROTECTOR,
        .description = sProtectorDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ELECTIRIZER] =
    {
        .name = _("Stromisierer"),
        .itemId = ITEM_ELECTIRIZER,
        .price = 12000,
        .holdEffect = HOLD_EFFECT_ELECTIRIZER,
        .description = sElectirizerDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGMARIZER] =
    {
        .name = _("Magmaisierer"),
        .itemId = ITEM_MAGMARIZER,
        .price = 12000,
        .holdEffect = HOLD_EFFECT_MAGMARIZER,
        .description = sMagmarizerDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DUBIOUS_DISC] =
    {
        .name = _("Dubiosdisc"),
        .itemId = ITEM_UPGRADE,
        .price = 14000,
        .holdEffect = HOLD_EFFECT_DUBIOUS_DISC,
        .description = sDubiousDiscDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_REAPER_CLOTH] =
    {
        .name = _("Düsterumhang"),
        .itemId = ITEM_REAPER_CLOTH,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_REAPER_CLOTH,
        .description = sReaperClothDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PRISM_SCALE] =
    {
        .name = _("Schönschuppe"),
        .itemId = ITEM_PRISM_SCALE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_PRISM_SCALE,
        .description = sPrismScaleDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHIPPED_DREAM] =
    {
        .name = _("Sahnehäubchen"),
        .itemId = ITEM_WHIPPED_DREAM,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_WHIPPED_DREAM,
        .description = sWhippedDreamDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SACHET] =
    {
        .name = _("Duftbeutel"),
        .itemId = ITEM_SACHET,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_SACHET,
        .description = sSachetDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OVAL_STONE] =
    {
        .name = _("Ovaler Stein"),
        .itemId = ITEM_OVAL_STONE,
        .price = 2000,
        .description = sOvalStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STRAWBERRY_SWEET] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LOVE_SWEET] = // Todo
    {
        .name = _("Zucker-Herz"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BERRY_SWEET] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLOVER_SWEET] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FLOWER_SWEET] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STAR_SWEET] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RIBBON_SWEET] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EVERSTONE] =
    {
        .name = _("Ewigstein"),
        .itemId = ITEM_EVERSTONE,
        .price = 30000,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = sEverstoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Nectars

    [ITEM_RED_NECTAR] =
    {
        .name = _("Roter Nektar"),
        .itemId = ITEM_RED_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
        .description = sRedNectarDesc,
        .pocket = POCKET_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_YELLOW_NECTAR] =
    {
        .name = _("Gelber Nektar"),
        .itemId = ITEM_YELLOW_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
        .description = sYellowNectarDesc,
        .pocket = POCKET_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_PINK_NECTAR] =
    {
        .name = _("Rosa Nektar"),
        .itemId = ITEM_PINK_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
        .description = sPinkNectarDesc,
        .pocket = POCKET_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_PURPLE_NECTAR] =
    {
        .name = _("Purprnr Nektr"),
        .itemId = ITEM_PURPLE_NECTAR,
        .price = 300,
        .holdEffectParam = 0,
        .description = sPurpleNectarDesc,
        .pocket = POCKET_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse,
            .secondaryId = FORM_ITEM_USE,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

// Plates

    [ITEM_FLAME_PLATE] =
    {
        .name = _("Feuertafel"),
        .itemId = ITEM_FLAME_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sFlamePlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_SPLASH_PLATE] =
    {
        .name = _("Wassertafel"),
        .itemId = ITEM_SPLASH_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sSplashPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ZAP_PLATE] =
    {
        .name = _("Blitztafel"),
        .itemId = ITEM_ZAP_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sZapPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_MEADOW_PLATE] =
    {
        .name = _("Wiesentafel"),
        .itemId = ITEM_MEADOW_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sMeadowPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICICLE_PLATE] =
    {
        .name = _("Frosttafel"),
        .itemId = ITEM_ICICLE_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sIciclePlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIST_PLATE] =
    {
        .name = _("Fausttafel"),
        .itemId = ITEM_FIST_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sFistPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_TOXIC_PLATE] =
    {
        .name = _("Gifttafel"),
        .itemId = ITEM_TOXIC_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sToxicPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_EARTH_PLATE] =
    {
        .name = _("Erdtafel"),
        .itemId = ITEM_EARTH_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sEarthPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_SKY_PLATE] =
    {
        .name = _("Wolkentafel"),
        .itemId = ITEM_SKY_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sSkyPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_MIND_PLATE] =
    {
        .name = _("Hirntafel"),
        .itemId = ITEM_MIND_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sMindPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_INSECT_PLATE] =
    {
        .name = _("Käfertafel"),
        .itemId = ITEM_INSECT_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sInsectPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_STONE_PLATE] =
    {
        .name = _("Steintafel"),
        .itemId = ITEM_STONE_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sStonePlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_SPOOKY_PLATE] =
    {
        .name = _("Spuktafel"),
        .itemId = ITEM_SPOOKY_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sSpookyPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRACO_PLATE] =
    {
        .name = _("Dracotafel"),
        .itemId = ITEM_DRACO_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sDracoPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DREAD_PLATE] =
    {
        .name = _("Furchttafel"),
        .itemId = ITEM_DREAD_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sDreadPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_IRON_PLATE] =
    {
        .name = _("Eisentafel"),
        .itemId = ITEM_IRON_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sIronPlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_PIXIE_PLATE] =
    {
        .name = _("Feentafel"),
        .itemId = ITEM_PIXIE_PLATE,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PLATE,
        .holdEffectParam = 30,
        .description = sPixiePlateDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

// Drives

    [ITEM_DOUSE_DRIVE] =
    {
        .name = _("Aquamodul"),
        .itemId = ITEM_DOUSE_DRIVE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sDouseDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_SHOCK_DRIVE] =
    {
        .name = _("Blitzmodul"),
        .itemId = ITEM_SHOCK_DRIVE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sShockDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_BURN_DRIVE] =
    {
        .name = _("Flammenmodul"),
        .itemId = ITEM_BURN_DRIVE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sBurnDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_CHILL_DRIVE] =
    {
        .name = _("Gefriermodul"),
        .itemId = ITEM_CHILL_DRIVE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .description = sChillDriveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

// Memories

    [ITEM_FIRE_MEMORY] =
    {
        .name = _("Feuer-Disc"),
        .itemId = ITEM_FIRE_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFireMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_WATER_MEMORY] =
    {
        .name = _("Wasser-Disc"),
        .itemId = ITEM_WATER_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sWaterMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ELECTRIC_MEMORY] =
    {
        .name = _("Elektro-Disc"),
        .itemId = ITEM_ELECTRIC_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sElectricMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_GRASS_MEMORY] =
    {
        .name = _("Pflanzen-Disc"),
        .itemId = ITEM_GRASS_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sGrassMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICE_MEMORY] =
    {
        .name = _("Eis-Disc"),
        .itemId = ITEM_ICE_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sIceMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIGHTING_MEMORY] =
    {
        .name = _("Kampf-Disc"),
        .itemId = ITEM_FIGHTING_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFightingMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_POISON_MEMORY] =
    {
        .name = _("Gift-Disc"),
        .itemId = ITEM_POISON_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sPoisonMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_GROUND_MEMORY] =
    {
        .name = _("Boden-Disc"),
        .itemId = ITEM_GROUND_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sGroundMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_FLYING_MEMORY] =
    {
        .name = _("Flug-Disc"),
        .itemId = ITEM_FLYING_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFlyingMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_PSYCHIC_MEMORY] =
    {
        .name = _("Psycho-Disc"),
        .itemId = ITEM_PSYCHIC_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sPsychicMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_BUG_MEMORY] =
    {
        .name = _("Käfer-Disc"),
        .itemId = ITEM_BUG_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sBugMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_ROCK_MEMORY] =
    {
        .name = _("Gesteins-Disc"),
        .itemId = ITEM_ROCK_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sRockMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_GHOST_MEMORY] =
    {
        .name = _("Geister-Disc"),
        .itemId = ITEM_GHOST_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sGhostMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRAGON_MEMORY] =
    {
        .name = _("Drachen-Disc"),
        .itemId = ITEM_DRAGON_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sDragonMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DARK_MEMORY] =
    {
        .name = _("Unlicht-Disc"),
        .itemId = ITEM_DARK_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sDarkMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_STEEL_MEMORY] =
    {
        .name = _("Stahl-Disc"),
        .itemId = ITEM_STEEL_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sSteelMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_FAIRY_MEMORY] =
    {
        .name = _("Feen-Disc"),
        .itemId = ITEM_FAIRY_MEMORY,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_MEMORY,
        .holdEffectParam = 0,
        .description = sFairyMemoryDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

    [ITEM_RUSTED_SWORD] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUSTED_SHIELD] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Colored Orbs

    [ITEM_RED_ORB] =
    {
        .name = _("Rote Kugel"),
        .itemId = ITEM_RED_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = sRedOrbDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_ORB] =
    {
        .name = _("Blaue Kugel"),
        .itemId = ITEM_BLUE_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = sBlueOrbDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_JADE_ORB] = // Todo
    {
        .name = _("Grüne Kugel"),
        .itemId = ITEM_NONE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = sDummyDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mega Stones

    [ITEM_VENUSAURITE] =
    {
        .name = _("Bisaflornit"),
        .itemId = ITEM_VENUSAURITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sVenusauriteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARIZARDITE_X] =
    {
        .name = _("Gluraknit X"),
        .itemId = ITEM_CHARIZARDITE_X,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARIZARDITE_Y] =
    {
        .name = _("Gluraknit Y"),
        .itemId = ITEM_CHARIZARDITE_Y,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCharizarditeDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLASTOISINITE] =
    {
        .name = _("Turtoknit"),
        .itemId = ITEM_BLASTOISINITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBlastoisiniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BEEDRILLITE] =
    {
        .name = _("Bibornit"),
        .itemId = ITEM_BEEDRILLITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBeedrilliteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PIDGEOTITE] =
    {
        .name = _("Taubossnit"),
        .itemId = ITEM_PIDGEOTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sPidgeotiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ALAKAZITE] =
    {
        .name = _("Simsalanit"),
        .itemId = ITEM_ALAKAZITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAlakaziteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SLOWBRONITE] =
    {
        .name = _("Lahmusnit"),
        .itemId = ITEM_SLOWBRONITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSlowbroniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GENGARITE] =
    {
        .name = _("Gengarnit"),
        .itemId = ITEM_GENGARITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGengariteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KANGASKHANITE] =
    {
        .name = _("Kangamanit"),
        .itemId = ITEM_KANGASKHANITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sKangaskhaniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINSIRITE] =
    {
        .name = _("Pinsirnit"),
        .itemId = ITEM_PINSIRITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sPinsiriteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GYARADOSITE] =
    {
        .name = _("Garadosnit"),
        .itemId = ITEM_GYARADOSITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGyaradositeDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AERODACTYLITE] =
    {
        .name = _("Aerodactylont"),
        .itemId = ITEM_AERODACTYLITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAerodactyliteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MEWTWONITE_X] =
    {
        .name = _("Mewtunit X"),
        .itemId = ITEM_MEWTWONITE_X,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MEWTWONITE_Y] =
    {
        .name = _("Mewtunit Y"),
        .itemId = ITEM_MEWTWONITE_Y,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMewtwoniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AMPHAROSITE] =
    {
        .name = _("Ampharosnit"),
        .itemId = ITEM_AMPHAROSITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAmpharositeDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STEELIXITE] =
    {
        .name = _("Stahlosnit"),
        .itemId = ITEM_STEELIXITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSteelixiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCIZORITE] =
    {
        .name = _("Scheroxnit"),
        .itemId = ITEM_SCIZORITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sScizoriteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HERACRONITE] =
    {
        .name = _("Skarabornit"),
        .itemId = ITEM_HERACRONITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sHeracroniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HOUNDOOMINITE] =
    {
        .name = _("Hundemonit"),
        .itemId = ITEM_HOUNDOOMINITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sHoundoominiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TYRANITARITE] =
    {
        .name = _("Despotarnit"),
        .itemId = ITEM_TYRANITARITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sTyranitariteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCEPTILITE] =
    {
        .name = _("Gewaldronit"),
        .itemId = ITEM_SCEPTILITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSceptiliteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLAZIKENITE] =
    {
        .name = _("Lohgocknit"),
        .itemId = ITEM_BLAZIKENITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBlazikeniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SWAMPERTITE] =
    {
        .name = _("Sumpexnit"),
        .itemId = ITEM_SWAMPERTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSwampertiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GARDEVOIRITE] =
    {
        .name = _("Guardevoirnit"),
        .itemId = ITEM_GARDEVOIRITE,
        .price = 33000,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGardevoiriteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SABLENITE] =
    {
        .name = _("Zobirisnit"),
        .itemId = ITEM_SABLENITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSableniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAWILITE] =
    {
        .name = _("Flunkifernit"),
        .itemId = ITEM_MAWILITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMawiliteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AGGRONITE] =
    {
        .name = _("Stollossnit"),
        .itemId = ITEM_AGGRONITE,
        .price = 37500,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAggroniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MEDICHAMITE] =
    {
        .name = _("Meditalisnit"),
        .itemId = ITEM_MEDICHAMITE,
        .price = 37500,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMedichamiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MANECTITE] =
    {
        .name = _("Voltensonit"),
        .itemId = ITEM_MANECTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sManectiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHARPEDONITE] =
    {
        .name = _("Tohaidonit"),
        .itemId = ITEM_SHARPEDONITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSharpedoniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CAMERUPTITE] =
    {
        .name = _("Cameruptnit"),
        .itemId = ITEM_CAMERUPTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sCameruptiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ALTARIANITE] =
    {
        .name = _("Altarianit"),
        .itemId = ITEM_ALTARIANITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAltarianiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BANETTITE] =
    {
        .name = _("Banetteonit"),
        .itemId = ITEM_BANETTITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sBanettiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ABSOLITE] =
    {
        .name = _("Absolnit"),
        .itemId = ITEM_ABSOLITE,
        .price = 42000,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAbsoliteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GLALITITE] =
    {
        .name = _("Firnontornit"),
        .itemId = ITEM_GLALITITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGlalititeDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SALAMENCITE] =
    {
        .name = _("Brutalandanit"),
        .itemId = ITEM_SALAMENCITE,
        .price = 60000,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sSalamenciteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAGROSSITE] =
    {
        .name = _("Metagrossnit"),
        .itemId = ITEM_METAGROSSITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMetagrossiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LATIASITE] =
    {
        .name = _("Latiasnit"),
        .itemId = ITEM_LATIASITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLatiasiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LATIOSITE] =
    {
        .name = _("Latiosnit"),
        .itemId = ITEM_LATIOSITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLatiositeDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LOPUNNITE] =
    {
        .name = _("Schlapornit"),
        .itemId = ITEM_LOPUNNITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLopunniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GARCHOMPITE] =
    {
        .name = _("Knakracknit"),
        .itemId = ITEM_GARCHOMPITE,
        .price = 65000,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGarchompiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCARIONITE] =
    {
        .name = _("Lucarionit"),
        .itemId = ITEM_LUCARIONITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sLucarioniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ABOMASITE] =
    {
        .name = _("Rexblisarnit"),
        .itemId = ITEM_ABOMASITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAbomasiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GALLADITE] =
    {
        .name = _("Galagladinit"),
        .itemId = ITEM_GALLADITE,
        .price = 33000,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sGalladiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AUDINITE] =
    {
        .name = _("Ohrdochnit"),
        .itemId = ITEM_AUDINITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sAudiniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DIANCITE] =
    {
        .name = _("Diancienit"),
        .itemId = ITEM_DIANCITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sDianciteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Gems

    [ITEM_NORMAL_GEM] =
    {
        .name = _("Normaljuwel"),
        .itemId = ITEM_NORMAL_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sNormalGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
    },

    [ITEM_FIRE_GEM] =
    {
        .name = _("Feuerjuwel"),
        .itemId = ITEM_FIRE_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sFireGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
    },

    [ITEM_WATER_GEM] =
    {
        .name = _("Wasserjuwel"),
        .itemId = ITEM_WATER_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sWaterGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
    },

    [ITEM_ELECTRIC_GEM] =
    {
        .name = _("Elektrojuwel"),
        .itemId = ITEM_ELECTRIC_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sElectricGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
    },

    [ITEM_GRASS_GEM] =
    {
        .name = _("Pflanzenjuwel"),
        .itemId = ITEM_GRASS_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sGrassGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
    },

    [ITEM_ICE_GEM] =
    {
        .name = _("Eisjuwel"),
        .itemId = ITEM_ICE_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sIceGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
    },

    [ITEM_FIGHTING_GEM] =
    {
        .name = _("Kampfjuwel"),
        .itemId = ITEM_FIGHTING_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sFightingGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
    },

    [ITEM_POISON_GEM] =
    {
        .name = _("Giftjuwel"),
        .itemId = ITEM_POISON_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sPoisonGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
    },

    [ITEM_GROUND_GEM] =
    {
        .name = _("Bodenjuwel"),
        .itemId = ITEM_GROUND_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sGroundGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
    },

    [ITEM_FLYING_GEM] =
    {
        .name = _("Flugjuwel"),
        .itemId = ITEM_FLYING_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sFlyingGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
    },

    [ITEM_PSYCHIC_GEM] =
    {
        .name = _("Psychojuwel"),
        .itemId = ITEM_PSYCHIC_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sPsychicGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
    },

    [ITEM_BUG_GEM] =
    {
        .name = _("Käferjuwel"),
        .itemId = ITEM_BUG_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sBugGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
    },

    [ITEM_ROCK_GEM] =
    {
        .name = _("Gesteinsjuwel"),
        .itemId = ITEM_ROCK_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sRockGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
    },

    [ITEM_GHOST_GEM] =
    {
        .name = _("Geisterjuwel"),
        .itemId = ITEM_GHOST_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sGhostGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
    },

    [ITEM_DRAGON_GEM] =
    {
        .name = _("Drakojuwel"),
        .itemId = ITEM_DRAGON_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sDragonGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
    },

    [ITEM_DARK_GEM] =
    {
        .name = _("Unlichtjuwel"),
        .itemId = ITEM_DARK_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sDarkGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
    },

    [ITEM_STEEL_GEM] =
    {
        .name = _("Stahljuwel"),
        .itemId = ITEM_STEEL_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sSteelGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL,
    },

    [ITEM_FAIRY_GEM] =
    {
        .name = _("Feenjuwel"),
        .itemId = ITEM_FAIRY_GEM,
        .price = 1500,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 40,
        .description = sFairyGemDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
    },

// Z-Crystals

    [ITEM_NORMALIUM_Z] =
    {
        .name = _("Normium Z"),
        .itemId = ITEM_NORMALIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sNormaliumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL
    },

    [ITEM_FIRIUM_Z] =
    {
        .name = _("Pyrium Z"),
        .itemId = ITEM_FIRIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFiriumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE
    },

    [ITEM_WATERIUM_Z] =
    {
        .name = _("Aquium Z"),
        .itemId = ITEM_WATERIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sWateriumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER
    },

    [ITEM_ELECTRIUM_Z] =
    {
        .name = _("Voltium Z"),
        .itemId = ITEM_ELECTRIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sElectriumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC
    },

    [ITEM_GRASSIUM_Z] =
    {
        .name = _("Botanium Z"),
        .itemId = ITEM_GRASSIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sGrassiumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS
    },

    [ITEM_ICIUM_Z] =
    {
        .name = _("Glacium Z"),
        .itemId = ITEM_ICIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sIciumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE
    },

    [ITEM_FIGHTINIUM_Z] =
    {
        .name = _("Battalium Z"),
        .itemId = ITEM_FIGHTINIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFightiniumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING
    },

    [ITEM_POISONIUM_Z] =
    {
        .name = _("Toxium Z"),
        .itemId = ITEM_POISONIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPoisoniumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON
    },

    [ITEM_GROUNDIUM_Z] =
    {
        .name = _("Terrium Z"),
        .itemId = ITEM_GROUNDIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sGroundiumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND
    },

    [ITEM_FLYINIUM_Z] =
    {
        .name = _("Aerium Z"),
        .itemId = ITEM_FLYINIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFlyiniumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING
    },

    [ITEM_PSYCHIUM_Z] =
    {
        .name = _("Psium Z"),
        .itemId = ITEM_PSYCHIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPsychiumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC
    },

    [ITEM_BUGINIUM_Z] =
    {
        .name = _("Insectium Z"),
        .itemId = ITEM_BUGINIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sBuginiumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG
    },

    [ITEM_ROCKIUM_Z] =
    {
        .name = _("Petrium Z"),
        .itemId = ITEM_ROCKIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sRockiumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK
    },

    [ITEM_GHOSTIUM_Z] =
    {
        .name = _("Phantomium Z"),
        .itemId = ITEM_GHOSTIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sGhostiumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST
    },

    [ITEM_DRAGONIUM_Z] =
    {
        .name = _("Dracium Z"),
        .itemId = ITEM_DRAGONIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sDragoniumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON
    },

    [ITEM_DARKINIUM_Z] =
    {
        .name = _("Noctium Z"),
        .itemId = ITEM_DARKINIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sDarkiniumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK
    },

    [ITEM_STEELIUM_Z] =
    {
        .name = _("Metallium Z"),
        .itemId = ITEM_STEELIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sSteeliumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_STEEL
    },

    [ITEM_FAIRIUM_Z] =
    {
        .name = _("Sylphium Z"),
        .itemId = ITEM_FAIRIUM_Z,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sFairiumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY
    },

    [ITEM_PIKANIUM_Z] =
    {
        .name = _("Pikachium Z"),
        .itemId = ITEM_PIKANIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPikaniumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_EEVIUM_Z] =
    {
        .name = _("Evolium Z"),
        .itemId = ITEM_EEVIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sEeviumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_SNORLIUM_Z] =
    {
        .name = _("Relaxonium Z"),
        .itemId = ITEM_SNORLIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sSnorliumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_MEWNIUM_Z] =
    {
        .name = _("Mewnium Z"),
        .itemId = ITEM_MEWNIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sMewniumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_DECIDIUM_Z] =
    {
        .name = _("Silvarronm Z"),
        .itemId = ITEM_DECIDIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sDecidiumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_INCINIUM_Z] =
    {
        .name = _("Fuegronium Z"),
        .itemId = ITEM_INCINIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sInciniumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_PRIMARIUM_Z] =
    {
        .name = _("Primarenium Z"),
        .itemId = ITEM_PRIMARIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPrimariumZDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_LYCANIUM_Z] =
    {
        .name = _("Wolwerockm Z"),
        .itemId = ITEM_LYCANIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sLycaniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_MIMIKIUM_Z] =
    {
        .name = _("Mimigmium Z"),
        .itemId = ITEM_MIMIKIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sMimikiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_KOMMONIUM_Z] =
    {
        .name = _("Grandirasm Z"),
        .itemId = ITEM_KOMMONIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sKommoniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_TAPUNIUM_Z] =
    {
        .name = _("Kapium Z"),
        .itemId = ITEM_TAPUNIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sTapuniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  //signature z move
    },

    [ITEM_SOLGANIUM_Z] =
    {
        .name = _("Solgalium Z"),
        .itemId = ITEM_SOLGANIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sSolganiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_LUNALIUM_Z] =
    {
        .name = _("Lunalium Z"),
        .itemId = ITEM_LUNALIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sLunaliumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_MARSHADIUM_Z] =
    {
        .name = _("Marshadownm Z"),
        .itemId = ITEM_MARSHADIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sMarshadiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_ALORAICHIUM_Z] =
    {
        .name = _("A-Raichunm Z"),
        .itemId = ITEM_ALORAICHIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sAloraichiumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_PIKASHUNIUM_Z] =
    {
        .name = _("Ash-Pikchm Z"),
        .itemId = ITEM_PIKASHUNIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sPikashuniumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  // signature z move
    },

    [ITEM_ULTRANECROZIUM_Z] =
    {
        .name = _("U-necronium Z"),
        .itemId = ITEM_ULTRANECROZIUM_Z,
        .price = 0,
        .holdEffect = HOLD_EFFECT_Z_CRYSTAL,
        .description = sUltranecroziumZDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 255  //signature z move
    },

// Species-specific Held Items

    [ITEM_LIGHT_BALL] =
    {
        .name = _("Kugelblitz"),
        .itemId = ITEM_LIGHT_BALL,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
        .description = sLightBallDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LEEK] =
    {
        .name = _("Lauchstange"),
        .itemId = ITEM_LEEK,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_LEEK,
        .description = sLeekDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_THICK_CLUB] =
    {
        .name = _("Kampfknochen"),
        .itemId = ITEM_THICK_CLUB,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
        .description = sThickClubDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCKY_PUNCH] =
    {
        .name = _("Lucky Punch"),
        .itemId = ITEM_LUCKY_PUNCH,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
        .description = sLuckyPunchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAL_POWDER] =
    {
        .name = _("Metallstaub"),
        .itemId = ITEM_METAL_POWDER,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
        .description = sMetalPowderDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_QUICK_POWDER] =
    {
        .name = _("Flottstaub"),
        .itemId = ITEM_QUICK_POWDER,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_QUICK_POWDER,
        .description = sQuickPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
        .name = _("Abyssschuppe"),
        .itemId = ITEM_DEEP_SEA_SCALE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
        .description = sDeepSeaScaleDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
        .name = _("Abysszahn"),
        .itemId = ITEM_DEEP_SEA_TOOTH,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
        .description = sDeepSeaToothDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOUL_DEW] =
    {
        .name = _("Soul Dew"),
        .itemId = ITEM_SOUL_DEW,
        .price = 0,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
        #if defined(BATTLE_ENGINE) && B_SOUL_DEW_BOOST >= GEN_7
            .holdEffectParam = 50,
        #else
            .holdEffectParam = 50,
        #endif
        .description = sSoulDewDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ADAMANT_ORB] =
    {
        .name = _("Adamant-Orb"),
        .itemId = ITEM_ADAMANT_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
        .holdEffectParam = 20,
        .description = sAdamantOrbDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUSTROUS_ORB] =
    {
        .name = _("Weiß-Orb"),
        .itemId = ITEM_LUSTROUS_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
        .holdEffectParam = 20,
        .description = sLustrousOrbDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRISEOUS_ORB] =
    {
        .name = _("Platinum-Orb"),
        .itemId = ITEM_GRISEOUS_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
        .holdEffectParam = 20,
        .description = sGriseousOrbDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Incenses

    [ITEM_SEA_INCENSE] =
    {
        .name = _("Seerauch"),
        .itemId = ITEM_SEA_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LAX_INCENSE] =
    {
        .name = _("Laxrauch"),
        .itemId = ITEM_LAX_INCENSE,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 20,
        .description = sLaxIncenseDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ODD_INCENSE] =
    {
        .name = _("Schrägrauch"),
        .itemId = ITEM_ODD_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 20,
        .description = sOddIncenseDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROCK_INCENSE] =
    {
        .name = _("Steinrauch"),
        .itemId = ITEM_ROCK_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 20,
        .description = sRockIncenseDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FULL_INCENSE] =
    {
        .name = _("Lahmrauch"),
        .itemId = ITEM_FULL_INCENSE,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .holdEffectParam = 5,
        .description = sFullIncenseDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WAVE_INCENSE] =
    {
        .name = _("Wellenrauch"),
        .itemId = ITEM_WAVE_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sWaveIncenseDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROSE_INCENSE] =
    {
        .name = _("Rosenrauch"),
        .itemId = ITEM_ROSE_INCENSE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 20,
        .description = sRoseIncenseDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCK_INCENSE] =
    {
        .name = _("Glücksrauch"),
        .itemId = ITEM_LUCK_INCENSE,
        .price = 11000,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
        .description = sLuckIncenseDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PURE_INCENSE] =
    {
        .name = _("Scheuchrauch"),
        .itemId = ITEM_PURE_INCENSE,
        .price = 6000,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Contest Scarves

    [ITEM_RED_SCARF] =
    {
        .name = _("Roter Schal"),
        .itemId = ITEM_RED_SCARF,
        .price = 100,
        .description = sRedScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_SCARF] =
    {
        .name = _("Blauer Schal"),
        .itemId = ITEM_BLUE_SCARF,
        .price = 100,
        .description = sBlueScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINK_SCARF] =
    {
        .name = _("Rosa Schal"),
        .itemId = ITEM_PINK_SCARF,
        .price = 100,
        .description = sPinkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_SCARF] =
    {
        .name = _("Grüner Schal"),
        .itemId = ITEM_GREEN_SCARF,
        .price = 100,
        .description = sGreenScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_SCARF] =
    {
        .name = _("Gelber Schal"),
        .itemId = ITEM_YELLOW_SCARF,
        .price = 100,
        .description = sYellowScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// EV Gain Modifiers

    [ITEM_MACHO_BRACE] =
    {
        .name = _("Machoschiene"),
        .itemId = ITEM_MACHO_BRACE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = sMachoBraceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POWER_WEIGHT] =
    {
        .name = _("Machtgewicht"),
        .itemId = ITEM_POWER_WEIGHT,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerWeightDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_HP,
    },

    [ITEM_POWER_BRACER] =
    {
        .name = _("Machtreif"),
        .itemId = ITEM_POWER_BRACER,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerBracerDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_ATK,
    },

    [ITEM_POWER_BELT] =
    {
        .name = _("Machtgurt"),
        .itemId = ITEM_POWER_BELT,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_DEF,
    },

    [ITEM_POWER_LENS] =
    {
        .name = _("Machtlinse"),
        .itemId = ITEM_POWER_LENS,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPATK,
    },

    [ITEM_POWER_BAND] =
    {
        .name = _("Machtband"),
        .itemId = ITEM_POWER_BAND,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPDEF,
    },

    [ITEM_POWER_ANKLET] =
    {
        .name = _("Machtkette"),
        .itemId = ITEM_POWER_ANKLET,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_POWER_ITEM,
        .holdEffectParam = 8,
        .description = sPowerAnkletDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = STAT_SPEED,
    },

// Type-boosting Held Items

    [ITEM_SILK_SCARF] =
    {
        .name = _("Seidenschal"),
        .itemId = ITEM_SILK_SCARF,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_NORMAL_POWER,
        .holdEffectParam = 20,
        .description = sSilkScarfDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARCOAL] =
    {
        .name = _("Holzkohle"),
        .itemId = ITEM_CHARCOAL,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = 20,
        .description = sCharcoalDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MYSTIC_WATER] =
    {
        .name = _("Zauberwasser"),
        .itemId = ITEM_MYSTIC_WATER,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = sMysticWaterDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGNET] =
    {
        .name = _("Magnet"),
        .itemId = ITEM_MAGNET,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = 20,
        .description = sMagnetDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MIRACLE_SEED] =
    {
        .name = _("Wundersaat"),
        .itemId = ITEM_MIRACLE_SEED,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 20,
        .description = sMiracleSeedDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NEVER_MELT_ICE] =
    {
        .name = _("Ewiges Eis"),
        .itemId = ITEM_NEVER_MELT_ICE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = 20,
        .description = sNeverMeltIceDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_BELT] =
    {
        .name = _("Schwarzgurt"),
        .itemId = ITEM_BLACK_BELT,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = 20,
        .description = sBlackBeltDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POISON_BARB] =
    {
        .name = _("Poison Barb"),
        .itemId = ITEM_POISON_BARB,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = 20,
        .description = sPoisonBarbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOFT_SAND] =
    {
        .name = _("Pudersand"),
        .itemId = ITEM_SOFT_SAND,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = 20,
        .description = sSoftSandDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHARP_BEAK] =
    {
        .name = _("SpitzrSchnabl"),
        .itemId = ITEM_SHARP_BEAK,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = 20,
        .description = sSharpBeakDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TWISTED_SPOON] =
    {
        .name = _("Krummlöffel"),
        .itemId = ITEM_TWISTED_SPOON,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 20,
        .description = sTwistedSpoonDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILVER_POWDER] =
    {
        .name = _("Silberstaub"),
        .itemId = ITEM_SILVER_POWDER,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = 20,
        .description = sSilverPowderDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HARD_STONE] =
    {
        .name = _("Granitstein"),
        .itemId = ITEM_HARD_STONE,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 20,
        .description = sHardStoneDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPELL_TAG] =
    {
        .name = _("Bannsticker"),
        .itemId = ITEM_SPELL_TAG,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = 20,
        .description = sSpellTagDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_FANG] =
    {
        .name = _("Drachenzahn"),
        .itemId = ITEM_DRAGON_FANG,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = 20,
        .description = sDragonFangDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_GLASSES] =
    {
        .name = _("Schattenbrill"),
        .itemId = ITEM_BLACK_GLASSES,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = 20,
        .description = sBlackGlassesDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAL_COAT] =
    {
        .name = _("Metallmantel"),
        .itemId = ITEM_METAL_COAT,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = 20,
        .description = sMetalCoatDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Choice Items

    [ITEM_CHOICE_BAND] =
    {
        .name = _("Wahlband"),
        .itemId = ITEM_CHOICE_BAND,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = sChoiceBandDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHOICE_SPECS] =
    {
        .name = _("Wahlbrille"),
        .itemId = ITEM_CHOICE_SPECS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
        .description = sChoiceSpecsDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHOICE_SCARF] =
    {
        .name = _("Wahlschal"),
        .itemId = ITEM_CHOICE_SCARF,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
        .description = sChoiceScarfDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Status Orbs

    [ITEM_FLAME_ORB] =
    {
        .name = _("Heiß-Orb"),
        .itemId = ITEM_FLAME_ORB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FLAME_ORB,
        .description = sFlameOrbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TOXIC_ORB] =
    {
        .name = _("Toxik-Orb"),
        .itemId = ITEM_TOXIC_ORB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_TOXIC_ORB,
        .description = sToxicOrbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Weather Rocks

    [ITEM_DAMP_ROCK] =
    {
        .name = _("Nassbrocken"),
        .itemId = ITEM_DAMP_ROCK,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_DAMP_ROCK,
        .description = sDampRockDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEAT_ROCK] =
    {
        .name = _("Heißbrocken"),
        .itemId = ITEM_HEAT_ROCK,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_HEAT_ROCK,
        .description = sHeatRockDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SMOOTH_ROCK] =
    {
        .name = _("Glattbrocken"),
        .itemId = ITEM_SMOOTH_ROCK,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
        .description = sSmoothRockDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ICY_ROCK] =
    {
        .name = _("Eisbrocken"),
        .itemId = ITEM_ICY_ROCK,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ICY_ROCK,
        .description = sIcyRockDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Terrain Seeds

    [ITEM_ELECTRIC_SEED] =
    {
        .name = _("Elektro-Samen"),
        .itemId = ITEM_ELECTRIC_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_ELECTRIC_TERRAIN,
        .description = sElectricSeedDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PSYCHIC_SEED] =
    {
        .name = _("Psycho-Samen"),
        .itemId = ITEM_PSYCHIC_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_PSYCHIC_TERRAIN,
        .description = sPsychicSeedDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MISTY_SEED] =
    {
        .name = _("Nebel-Samen"),
        .itemId = ITEM_MISTY_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_MISTY_TERRAIN,
        .description = sMistySeedDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRASSY_SEED] =
    {
        .name = _("Gras-Samen"),
        .itemId = ITEM_GRASSY_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = HOLD_EFFECT_PARAM_GRASSY_TERRAIN,
        .description = sGrassySeedDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Type-activated Stat Modifiers

    [ITEM_ABSORB_BULB] =
    {
        .name = _("Knolle"),
        .itemId = ITEM_ABSORB_BULB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ABSORB_BULB,
        .holdEffectParam = 0,
        .description = sAbsorbBulbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CELL_BATTERY] =
    {
        .name = _("Akku"),
        .itemId = ITEM_CELL_BATTERY,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CELL_BATTERY,
        .holdEffectParam = 0,
        .description = sCellBatteryDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUMINOUS_MOSS] =
    {
        .name = _("Leuchtmoos"),
        .itemId = ITEM_LUMINOUS_MOSS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LUMINOUS_MOSS,
        .holdEffectParam = 0,
        .description = sLuminousMossDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SNOWBALL] =
    {
        .name = _("Schneeball"),
        .itemId = ITEM_SNOWBALL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SNOWBALL,
        .holdEffectParam = 0,
        .description = sSnowballDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Misc. Held Items

    [ITEM_BRIGHT_POWDER] =
    {
        .name = _("Blendpuder"),
        .itemId = ITEM_BRIGHT_POWDER,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = sBrightPowderDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHITE_HERB] =
    {
        .name = _("Schlohkraut"),
        .itemId = ITEM_WHITE_HERB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_RESTORE_STATS,
        .description = sWhiteHerbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXP_SHARE] =
    {
        .name = _("EP-Teiler"),
        .itemId = ITEM_EXP_SHARE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        .description = sExpShareDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_QUICK_CLAW] =
    {
        .name = _("Flinkklaue"),
        .itemId = ITEM_QUICK_CLAW,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
        .description = sQuickClawDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOOTHE_BELL] =
    {
        .name = _("Sanftglocke"),
        .itemId = ITEM_SOOTHE_BELL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
        .description = sSootheBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MENTAL_HERB] =
    {
        .name = _("Mentalkraut"),
        .itemId = ITEM_MENTAL_HERB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_MENTAL_HERB,
        .description = sMentalHerbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KINGS_ROCK] =
    {
        .name = _("King-Stein"),
        .itemId = ITEM_KINGS_ROCK,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_KINGS_ROCK,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AMULET_COIN] =
    {
        .name = _("Münzamulett"),
        .itemId = ITEM_AMULET_COIN,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
        .description = sAmuletCoinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLEANSE_TAG] =
    {
        .name = _("Schutzsticker"),
        .itemId = ITEM_CLEANSE_TAG,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sCleanseTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SMOKE_BALL] =
    {
        .name = _("Rauchball"),
        .itemId = ITEM_SMOKE_BALL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
        .description = sSmokeBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOCUS_BAND] =
    {
        .name = _("Fokusband"),
        .itemId = ITEM_FOCUS_BAND,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
        .description = sFocusBandDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCKY_EGG] =
    {
        .name = _("Glücks-Ei"),
        .itemId = ITEM_LUCKY_EGG,
        .price = 10000,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = sLuckyEggDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCOPE_LENS] =
    {
        .name = _("Scope-Linse"),
        .itemId = ITEM_SCOPE_LENS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = sScopeLensDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LEFTOVERS] =
    {
        .name = _("Überreste"),
        .itemId = ITEM_LEFTOVERS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
        .description = sLeftoversDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHELL_BELL] =
    {
        .name = _("Muschelglcke"),
        .itemId = ITEM_SHELL_BELL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 8,
        .description = sShellBellDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WIDE_LENS] =
    {
        .name = _("Großlinse"),
        .itemId = ITEM_WIDE_LENS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_WIDE_LENS,
        .holdEffectParam = 10,
        .description = sWideLensDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MUSCLE_BAND] =
    {
        .name = _("Muskelband"),
        .itemId = ITEM_MUSCLE_BAND,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_MUSCLE_BAND,
        .holdEffectParam = 10,
        .description = sMuscleBandDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WISE_GLASSES] =
    {
        .name = _("Schlaubrille"),
        .itemId = ITEM_WISE_GLASSES,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_WISE_GLASSES,
        .holdEffectParam = 10,
        .description = sWiseGlassesDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXPERT_BELT] =
    {
        .name = _("Expertengurt"),
        .itemId = ITEM_EXPERT_BELT,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EXPERT_BELT,
        .holdEffectParam = 20,
        .description = sExpertBeltDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIGHT_CLAY] =
    {
        .name = _("Lichtlehm"),
        .itemId = ITEM_LIGHT_CLAY,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LIGHT_CLAY,
        .description = sLightClayDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIFE_ORB] =
    {
        .name = _("Leben-Orb"),
        .itemId = ITEM_LIFE_ORB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LIFE_ORB,
        .description = sLifeOrbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POWER_HERB] =
    {
        .name = _("Energiekraut"),
        .itemId = ITEM_POWER_HERB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_POWER_HERB,
        .description = sPowerHerbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOCUS_SASH] =
    {
        .name = _("Fokusgurt"),
        .itemId = ITEM_FOCUS_SASH,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FOCUS_SASH,
        .description = sFocusSashDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ZOOM_LENS] =
    {
        .name = _("Zoomlinse"),
        .itemId = ITEM_ZOOM_LENS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ZOOM_LENS,
        .holdEffectParam = 20,
        .description = sZoomLensDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METRONOME] =
    {
        .name = _("Metronom"),
        .itemId = ITEM_METRONOME,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_METRONOME,
        .holdEffectParam = 20,
        .description = sMetronomeDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_IRON_BALL] =
    {
        .name = _("Eisenkugel"),
        .itemId = ITEM_IRON_BALL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_IRON_BALL,
        .description = sIronBallDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LAGGING_TAIL] =
    {
        .name = _("Schwerschweif"),
        .itemId = ITEM_LAGGING_TAIL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .description = sLaggingTailDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DESTINY_KNOT] =
    {
        .name = _("Fatumknoten"),
        .itemId = ITEM_DESTINY_KNOT,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_DESTINY_KNOT,
        .description = sDestinyKnotDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_SLUDGE] =
    {
        .name = _("Giftschleim"),
        .itemId = ITEM_BLACK_SLUDGE,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
        .description = sBlackSludgeDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRIP_CLAW] =
    {
        .name = _("Griffklaue"),
        .itemId = ITEM_GRIP_CLAW,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_GRIP_CLAW,
        .description = sGripClawDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STICKY_BARB] =
    {
        .name = _("Klettdorn"),
        .itemId = ITEM_STICKY_BARB,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
        .description = sStickyBarbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHED_SHELL] =
    {
        .name = _("Wechselhülle"),
        .itemId = ITEM_SHED_SHELL,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SHED_SHELL,
        .description = sShedShellDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_ROOT] =
    {
        .name = _("Großwurzel"),
        .itemId = ITEM_BIG_ROOT,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BIG_ROOT,
        .holdEffectParam = 30,
        .description = sBigRootDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAZOR_CLAW] =
    {
        .name = _("Scharfklaue"),
        .itemId = ITEM_RAZOR_CLAW,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_RAZOR_CLAW,
        .description = sRazorClawDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAZOR_FANG] =
    {
        .name = _("Scharfzahn"),
        .itemId = ITEM_RAZOR_FANG,
        .price = 5000,
        .holdEffect = HOLD_EFFECT_RAZOR_FANG,
        .holdEffectParam = 10,
        .description = sRazorFangDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EVIOLITE] =
    {
        .name = _("Evolith"),
        .itemId = ITEM_EVIOLITE,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EVIOLITE,
        .holdEffectParam = 50,
        .description = sEvioliteDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FLOAT_STONE] =
    {
        .name = _("Leichtstein"),
        .itemId = ITEM_FLOAT_STONE,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_FLOAT_STONE,
        .description = sFloatStoneDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROCKY_HELMET] =
    {
        .name = _("Beulenhelm"),
        .itemId = ITEM_ROCKY_HELMET,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ROCKY_HELMET,
        .holdEffectParam = 0,
        .description = sRockyHelmetDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AIR_BALLOON] =
    {
        .name = _("Luftballon"),
        .itemId = ITEM_AIR_BALLOON,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_AIR_BALLOON,
        .holdEffectParam = 0,
        .description = sAirBalloonDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RED_CARD] =
    {
        .name = _("Rote Karte"),
        .itemId = ITEM_RED_CARD,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_RED_CARD,
        .holdEffectParam = 0,
        .description = sRedCardDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RING_TARGET] =
    {
        .name = _("Zielscheibe"),
        .itemId = ITEM_RING_TARGET,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_RING_TARGET,
        .holdEffectParam = 0,
        .description = sRingTargetDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BINDING_BAND] =
    {
        .name = _("Klammerband"),
        .itemId = ITEM_BINDING_BAND,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_BINDING_BAND,
        .description = sBindingBandDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EJECT_BUTTON] =
    {
        .name = _("Fluchtknopf"),
        .itemId = ITEM_EJECT_BUTTON,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_EJECT_BUTTON,
        .holdEffectParam = 0,
        .description = sEjectButtonDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WEAKNESS_POLICY] =
    {
        .name = _("Schwächensctz"),
        .itemId = ITEM_WEAKNESS_POLICY,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_WEAKNESS_POLICY,
        .holdEffectParam = 0,
        .description = sWeaknessPolicyDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ASSAULT_VEST] =
    {
        .name = _("Offensivweste"),
        .itemId = ITEM_ASSAULT_VEST,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .holdEffectParam = 50,
        .description = sAssaultVestDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SAFETY_GOGGLES] =
    {
        .name = _("Schutzbrille"),
        .itemId = ITEM_SAFETY_GOGGLES,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SAFETY_GOGGLES,
        .description = sSafetyGogglesDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ADRENALINE_ORB] =
    {
        .name = _("Zitter-Orb"),
        .itemId = ITEM_ADRENALINE_ORB,
        .price = 300,
        .holdEffect = HOLD_EFFECT_ADRENALINE_ORB,
        .description = sAdrenalineOrbDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TERRAIN_EXTENDER] =
    {
        .name = _("Feldbeschchtg"),
        .itemId = ITEM_TERRAIN_EXTENDER,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
        .description = sTerrainExtenderDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PROTECTIVE_PADS] =
    {
        .name = _("Schutzpolster"),
        .itemId = ITEM_PROTECTIVE_PADS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_PROTECTIVE_PADS,
        .description = sProtectivePadsDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_THROAT_SPRAY] = // Todo
    {
        .name = _("Halsspray"),
        .itemId = ITEM_THROAT_SPRAY,
        .price = 8000,
        .description = sThroatSprayDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EJECT_PACK] = // Todo
    {
        .name = _("Fluchttasche"),
        .itemId = ITEM_EJECT_PACK,
        .price = 12000,
        .description = sEjectPackDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEAVY_DUTY_BOOTS] = // Todo
    {
        .name = _("Plateauschuhe"),
        .itemId = ITEM_HEAVY_DUTY_BOOTS,
        .price = 20000,
        .description = sHeavyDutyBootsDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUNDER_POLICY] = // Todo
    {
        .name = _("F.schutz"),
        .itemId = ITEM_BLUNDER_POLICY,
        .price = 2000,
        .description = sBlunderPolicyDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_SERVICE] = // Todo
    {
        .name = _("Bizarroservc"),
        .itemId = ITEM_ROOM_SERVICE,
        .price = 5000,
        .description = sRoomServiceDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_UTILITY_UMBRELLA] = // Todo
    {
        .name = _("Allzweckschrm"),
        .itemId = ITEM_UTILITY_UMBRELLA,
        .price = 9000,
        .description = sUtilityUmbrellaDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
        .name = _("Amrenabeere"),
        .itemId = ITEM_CHERI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = sCheriBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_CHESTO_BERRY] =
    {
        .name = _("Maronbeere"),
        .itemId = ITEM_CHESTO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = sChestoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PECHA_BERRY] =
    {
        .name = _("Pirsifbeere"),
        .itemId = ITEM_PECHA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = sPechaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_RAWST_BERRY] =
    {
        .name = _("Fragiabeere"),
        .itemId = ITEM_RAWST_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = sRawstBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ASPEAR_BERRY] =
    {
        .name = _("Wilbirbeere"),
        .itemId = ITEM_ASPEAR_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = sAspearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LEPPA_BERRY] =
    {
        .name = _("Jonagobeere"),
        .itemId = ITEM_LEPPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = sLeppaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_ORAN_BERRY] =
    {
        .name = _("Sinelbeere"),
        .itemId = ITEM_ORAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = sOranBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PERSIM_BERRY] =
    {
        .name = _("Persimbeere"),
        .itemId = ITEM_PERSIM_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = sPersimBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LUM_BERRY] =
    {
        .name = _("Prunusbeere"),
        .itemId = ITEM_LUM_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = sLumBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SITRUS_BERRY] =
    {
        .name = _("Tsitrubeere"),
        .itemId = ITEM_SITRUS_BERRY,
        .price = 20,
        #if defined(BATTLE_ENGINE) && I_SITRUS_BERRY_HEAL >= GEN_4
            .holdEffect = HOLD_EFFECT_RESTORE_PCT_HP,
            .holdEffectParam = 25,
        #else
            .holdEffect = HOLD_EFFECT_RESTORE_HP,
            .holdEffectParam = 30,
        #endif
        .description = sSitrusBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FIGY_BERRY] =
    {
        .name = _("Giefebeere"),
        .itemId = ITEM_FIGY_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = 8,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WIKI_BERRY] =
    {
        .name = _("Wikibeere"),
        .itemId = ITEM_WIKI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = 8,
        .description = sWikiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGO_BERRY] =
    {
        .name = _("Magobeere"),
        .itemId = ITEM_MAGO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = 8,
        .description = sMagoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AGUAV_BERRY] =
    {
        .name = _("Gauvebeere"),
        .itemId = ITEM_AGUAV_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = 8,
        .description = sAguavBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_IAPAPA_BERRY] =
    {
        .name = _("Yapabeere"),
        .itemId = ITEM_IAPAPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = 8,
        .description = sIapapaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAZZ_BERRY] =
    {
        .name = _("Himmihbeere"),
        .itemId = ITEM_RAZZ_BERRY,
        .price = 20,
        .description = sRazzBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUK_BERRY] =
    {
        .name = _("Morbbeere"),
        .itemId = ITEM_BLUK_BERRY,
        .price = 20,
        .description = sBlukBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NANAB_BERRY] =
    {
        .name = _("Nanabbeere"),
        .itemId = ITEM_NANAB_BERRY,
        .price = 20,
        .description = sNanabBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WEPEAR_BERRY] =
    {
        .name = _("Nirbebeere"),
        .itemId = ITEM_WEPEAR_BERRY,
        .price = 20,
        .description = sWepearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINAP_BERRY] =
    {
        .name = _("Sananabeere"),
        .itemId = ITEM_PINAP_BERRY,
        .price = 20,
        .description = sPinapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POMEG_BERRY] =
    {
        .name = _("Granabeere"),
        .itemId = ITEM_POMEG_BERRY,
        .price = 20,
        .description = sPomegBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_KELPSY_BERRY] =
    {
        .name = _("Setangbeere"),
        .itemId = ITEM_KELPSY_BERRY,
        .price = 20,
        .description = sKelpsyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_QUALOT_BERRY] =
    {
        .name = _("Qualotbeere"),
        .itemId = ITEM_QUALOT_BERRY,
        .price = 20,
        .description = sQualotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_HONDEW_BERRY] =
    {
        .name = _("Honmelbeere"),
        .itemId = ITEM_HONDEW_BERRY,
        .price = 20,
        .description = sHondewBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_GREPA_BERRY] =
    {
        .name = _("Labrusbeere"),
        .itemId = ITEM_GREPA_BERRY,
        .price = 20,
        .description = sGrepaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_TAMATO_BERRY] =
    {
        .name = _("Tamotbeere"),
        .itemId = ITEM_TAMATO_BERRY,
        .price = 20,
        .description = sTamatoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_CORNN_BERRY] =
    {
        .name = _("Saimbeere"),
        .itemId = ITEM_CORNN_BERRY,
        .price = 20,
        .description = sCornnBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGOST_BERRY] =
    {
        .name = _("Magostbeere"),
        .itemId = ITEM_MAGOST_BERRY,
        .price = 20,
        .description = sMagostBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RABUTA_BERRY] =
    {
        .name = _("Rabutabeere"),
        .itemId = ITEM_RABUTA_BERRY,
        .price = 20,
        .description = sRabutaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NOMEL_BERRY] =
    {
        .name = _("Tronzibeere"),
        .itemId = ITEM_NOMEL_BERRY,
        .price = 20,
        .description = sNomelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPELON_BERRY] =
    {
        .name = _("Kiwanbeere"),
        .itemId = ITEM_SPELON_BERRY,
        .price = 20,
        .description = sSpelonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PAMTRE_BERRY] =
    {
        .name = _("Pallmbeere"),
        .itemId = ITEM_PAMTRE_BERRY,
        .price = 20,
        .description = sPamtreBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WATMEL_BERRY] =
    {
        .name = _("Wasmelbeere"),
        .itemId = ITEM_WATMEL_BERRY,
        .price = 20,
        .description = sWatmelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DURIN_BERRY] =
    {
        .name = _("Durinbeere"),
        .itemId = ITEM_DURIN_BERRY,
        .price = 20,
        .description = sDurinBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BELUE_BERRY] =
    {
        .name = _("Myrtilbeere"),
        .itemId = ITEM_BELUE_BERRY,
        .price = 20,
        .description = sBelueBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHILAN_BERRY] =
    {
        .name = _("Latchibeere"),
        .itemId = ITEM_CHILAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_NORMAL,
        .description = sChilanBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OCCA_BERRY] =
    {
        .name = _("Koakobeere"),
        .itemId = ITEM_OCCA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIRE,
        .description = sOccaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PASSHO_BERRY] =
    {
        .name = _("Foepasbeere"),
        .itemId = ITEM_PASSHO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_WATER,
        .description = sPasshoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WACAN_BERRY] =
    {
        .name = _("Kerzalbeere"),
        .itemId = ITEM_WACAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ELECTRIC,
        .description = sWacanBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RINDO_BERRY] =
    {
        .name = _("Grindobeere"),
        .itemId = ITEM_RINDO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GRASS,
        .description = sRindoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YACHE_BERRY] =
    {
        .name = _("Kiroyabeere"),
        .itemId = ITEM_YACHE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ICE,
        .description = sYacheBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHOPLE_BERRY] =
    {
        .name = _("Rospelbeere"),
        .itemId = ITEM_CHOPLE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIGHTING,
        .description = sChopleBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEBIA_BERRY] =
    {
        .name = _("Grarzbeere"),
        .itemId = ITEM_KEBIA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_POISON,
        .description = sKebiaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHUCA_BERRY] =
    {
        .name = _("Schukebeere"),
        .itemId = ITEM_SHUCA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GROUND,
        .description = sShucaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_COBA_BERRY] =
    {
        .name = _("Kobabeere"),
        .itemId = ITEM_COBA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FLYING,
        .description = sCobaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PAYAPA_BERRY] =
    {
        .name = _("Pyapabeere"),
        .itemId = ITEM_PAYAPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_PSYCHIC,
        .description = sPayapaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TANGA_BERRY] =
    {
        .name = _("Tanigabeere"),
        .itemId = ITEM_TANGA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_BUG,
        .description = sTangaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARTI_BERRY] =
    {
        .name = _("Chiaribeere"),
        .itemId = ITEM_CHARTI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ROCK,
        .description = sChartiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KASIB_BERRY] =
    {
        .name = _("Zitarzbeere"),
        .itemId = ITEM_KASIB_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GHOST,
        .description = sKasibBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HABAN_BERRY] =
    {
        .name = _("Terirobeere"),
        .itemId = ITEM_HABAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DRAGON,
        .description = sHabanBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_COLBUR_BERRY] =
    {
        .name = _("Burleobeere"),
        .itemId = ITEM_COLBUR_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DARK,
        .description = sColburBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BABIRI_BERRY] =
    {
        .name = _("Babiribeere"),
        .itemId = ITEM_BABIRI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_STEEL,
        .description = sBabiriBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROSELI_BERRY] =
    {
        .name = _("Hibisbeere"),
        .itemId = ITEM_ROSELI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FAIRY,
        .description = sRoseliBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIECHI_BERRY] =
    {
        .name = _("Lydzibeere"),
        .itemId = ITEM_LIECHI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sLiechiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GANLON_BERRY] =
    {
        .name = _("Linganbeere"),
        .itemId = ITEM_GANLON_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sGanlonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SALAC_BERRY] =
    {
        .name = _("Salkabeere"),
        .itemId = ITEM_SALAC_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = sSalacBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PETAYA_BERRY] =
    {
        .name = _("Tahaybeere"),
        .itemId = ITEM_PETAYA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sPetayaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_APICOT_BERRY] =
    {
        .name = _("Apikobeere"),
        .itemId = ITEM_APICOT_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sApicotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LANSAT_BERRY] =
    {
        .name = _("Lansatbeere"),
        .itemId = ITEM_LANSAT_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = sLansatBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STARF_BERRY] =
    {
        .name = _("Krambobeere"),
        .itemId = ITEM_STARF_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = sStarfBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ENIGMA_BERRY] = // Todo
    {
        .name = _("Enigma Berry"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MICLE_BERRY] =
    {
        .name = _("Wunfrubeere"),
        .itemId = ITEM_MICLE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_MICLE_BERRY,
        .holdEffectParam = 4,
        .description = sMicleBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CUSTAP_BERRY] =
    {
        .name = _("Eipfelbeere"),
        .itemId = ITEM_CUSTAP_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CUSTAP_BERRY,
        .holdEffectParam = 4,
        .description = sCustapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_JABOCA_BERRY] =
    {
        .name = _("Jabocabeere"),
        .itemId = ITEM_JABOCA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_JABOCA_BERRY,
        .description = sJabocaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROWAP_BERRY] =
    {
        .name = _("Berserk-Gen"),
        .itemId = ITEM_ROWAP_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_GEN_LOCO,
        .description = sRowapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEE_BERRY] =
    {
        .name = _("Akibeere"),
        .itemId = ITEM_KEE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_KEE_BERRY,
        .description = sKeeBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MARANGA_BERRY] =
    {
        .name = _("Tarabeere"),
        .itemId = ITEM_MARANGA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_MARANGA_BERRY,
        .description = sMarangaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ENIGMA_BERRY_E_READER] =
    {
        .name = _("Enigmabeere"),
        .itemId = ITEM_ENIGMA_BERRY,
        .price = 20,
        .description = sEnigmaBerryEReaderDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_EnigmaBerry,
    },

// TMs/HMs

    [ITEM_TM01_FOCUS_PUNCH] =
    {
        .name = _("TM01"),
        .itemId = ITEM_TM01_FOCUS_PUNCH,
        .price = 15000,
        .description = sTM01Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM02_DRAGON_CLAW] =
    {
        .name = _("TM02"),
        .itemId = ITEM_TM02_DRAGON_CLAW,
        .price = 50000,
        .description = sTM02Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM03_WATER_PULSE] =
    {
        .name = _("TM03"),
        .itemId = ITEM_TM03_WATER_PULSE,
        .price = 25000,
        .description = sTM03Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM04_CALM_MIND] =
    {
        .name = _("TM04"),
        .itemId = ITEM_TM04_CALM_MIND,
        .price = 30000,
        .description = sTM04Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM05_ROAR] =
    {
        .name = _("TM05"),
        .itemId = ITEM_TM05_ROAR,
        .price = 1000,
        .description = sTM05Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM06_TOXIC] =
    {
        .name = _("TM06"),
        .itemId = ITEM_TM06_TOXIC,
        .price = 22000,
        .description = sTM06Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM07_HAIL] =
    {
        .name = _("TM07"),
        .itemId = ITEM_TM07_HAIL,
        .price = 20000,
        .description = sTM07Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM08_BULK_UP] =
    {
        .name = _("TM08"),
        .itemId = ITEM_TM08_BULK_UP,
        .price = 12000,
        .description = sTM08Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM09_BULLET_SEED] =
    {
        .name = _("TM09"),
        .itemId = ITEM_TM09_BULLET_SEED,
        .price = 9000,
        .description = sTM09Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM10_HIDDEN_POWER] =
    {
        .name = _("TM10"),
        .itemId = ITEM_TM10_HIDDEN_POWER,
        .price = 3000,
        .description = sTM10Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM11_SUNNY_DAY] =
    {
        .name = _("TM11"),
        .itemId = ITEM_TM11_SUNNY_DAY,
        .price = 20000,
        .description = sTM11Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM12_TAUNT] =
    {
        .name = _("TM12"),
        .itemId = ITEM_TM12_TAUNT,
        .price = 3000,
        .description = sTM12Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM13_ICE_BEAM] =
    {
        .name = _("TM13"),
        .itemId = ITEM_TM13_ICE_BEAM,
        .price = 65000,
        .description = sTM13Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM14_BLIZZARD] =
    {
        .name = _("TM14"),
        .itemId = ITEM_TM14_BLIZZARD,
        .price = 55000,
        .description = sTM14Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM15_HYPER_BEAM] =
    {
        .name = _("TM15"),
        .itemId = ITEM_TM15_HYPER_BEAM,
        .price = 50000,
        .description = sTM15Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM16_LIGHT_SCREEN] =
    {
        .name = _("TM16"),
        .itemId = ITEM_TM16_LIGHT_SCREEN,
        .price = 30000,
        .description = sTM16Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM17_PROTECT] =
    {
        .name = _("TM17"),
        .itemId = ITEM_TM17_PROTECT,
        .price = 30000,
        .description = sTM17Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM18_RAIN_DANCE] =
    {
        .name = _("TM18"),
        .itemId = ITEM_TM18_RAIN_DANCE,
        .price = 20000,
        .description = sTM18Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM19_GIGA_DRAIN] =
    {
        .name = _("TM19"),
        .itemId = ITEM_TM19_GIGA_DRAIN,
        .price = 40000,
        .description = sTM19Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM20_SAFEGUARD] =
    {
        .name = _("TM20"),
        .itemId = ITEM_TM20_SAFEGUARD,
        .price = 8000,
        .description = sTM20Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM21_FRUSTRATION] =
    {
        .name = _("TM21"),
        .itemId = ITEM_TM21_FRUSTRATION,
        .price = 10000,
        .description = sTM21Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM22_SOLAR_BEAM] =
    {
        .name = _("TM22"),
        .itemId = ITEM_TM22_SOLAR_BEAM,
        .price = 35000,
        .description = sTM22Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM23_IRON_TAIL] =
    {
        .name = _("TM23"),
        .itemId = ITEM_TM23_IRON_TAIL,
        .price = 15000,
        .description = sTM23Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM24_THUNDERBOLT] =
    {
        .name = _("TM24"),
        .itemId = ITEM_TM24_THUNDERBOLT,
        .price = 65000,
        .description = sTM24Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM25_THUNDER] =
    {
        .name = _("TM25"),
        .itemId = ITEM_TM25_THUNDER,
        .price = 55000,
        .description = sTM25Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM26_EARTHQUAKE] =
    {
        .name = _("TM26"),
        .itemId = ITEM_TM26_EARTHQUAKE,
        .price = 60000,
        .description = sTM26Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM27_RETURN] =
    {
        .name = _("TM27"),
        .itemId = ITEM_TM27_RETURN,
        .price = 10000,
        .description = sTM27Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM28_DIG] =
    {
        .name = _("TM28"),
        .itemId = ITEM_TM28_DIG,
        .price = 7500,
        .description = sTM28Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM29_PSYCHIC] =
    {
        .name = _("TM29"),
        .itemId = ITEM_TM29_PSYCHIC,
        .price = 65000,
        .description = sTM29Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM30_SHADOW_BALL] =
    {
        .name = _("TM30"),
        .itemId = ITEM_TM30_SHADOW_BALL,
        .price = 65000,
        .description = sTM30Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM31_BRICK_BREAK] =
    {
        .name = _("TM31"),
        .itemId = ITEM_TM31_BRICK_BREAK,
        .price = 15000,
        .description = sTM31Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM32_DOUBLE_TEAM] =
    {
        .name = _("TM32"),
        .itemId = ITEM_TM32_DOUBLE_TEAM,
        .price = 6000,
        .description = sTM32Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM33_REFLECT] =
    {
        .name = _("TM33"),
        .itemId = ITEM_TM33_REFLECT,
        .price = 30000,
        .description = sTM33Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM34_SHOCK_WAVE] =
    {
        .name = _("TM34"),
        .itemId = ITEM_TM34_SHOCK_WAVE,
        .price = 25000,
        .description = sTM34Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM35_FLAMETHROWER] =
    {
        .name = _("TM35"),
        .itemId = ITEM_TM35_FLAMETHROWER,
        .price = 65000,
        .description = sTM35Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM36_SLUDGE_BOMB] =
    {
        .name = _("TM36"),
        .itemId = ITEM_TM36_SLUDGE_BOMB,
        .price = 65000,
        .description = sTM36Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM37_SANDSTORM] =
    {
        .name = _("TM37"),
        .itemId = ITEM_TM37_SANDSTORM,
        .price = 20000,
        .description = sTM37Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM38_FIRE_BLAST] =
    {
        .name = _("TM38"),
        .itemId = ITEM_TM38_FIRE_BLAST,
        .price = 55000,
        .description = sTM38Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM39_ROCK_TOMB] =
    {
        .name = _("TM39"),
        .itemId = ITEM_TM39_ROCK_TOMB,
        .price = 26000,
        .description = sTM39Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM40_AERIAL_ACE] =
    {
        .name = _("TM40"),
        .itemId = ITEM_TM40_AERIAL_ACE,
        .price = 25000,
        .description = sTM40Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM41_TORMENT] =
    {
        .name = _("TM41"),
        .itemId = ITEM_TM41_TORMENT,
        .price = 5000,
        .description = sTM41Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM42_FACADE] =
    {
        .name = _("TM42"),
        .itemId = ITEM_TM42_FACADE,
        .price = 18000,
        .description = sTM42Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM43_SECRET_POWER] =
    {
        .name = _("TM43"),
        .itemId = ITEM_TM43_SECRET_POWER,
        .price = 8000,
        .description = sTM43Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM44_REST] =
    {
        .name = _("TM44"),
        .itemId = ITEM_TM44_REST,
        .price = 20000,
        .description = sTM44Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM45_ATTRACT] =
    {
        .name = _("TM45"),
        .itemId = ITEM_TM45_ATTRACT,
        .price = 9000,
        .description = sTM45Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM46_THIEF] =
    {
        .name = _("TM46"),
        .itemId = ITEM_TM46_THIEF,
        .price = 14000,
        .description = sTM46Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM47_STEEL_WING] =
    {
        .name = _("TM47"),
        .itemId = ITEM_TM47_STEEL_WING,
        .price = 11000,
        .description = sTM47Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM48_SKILL_SWAP] =
    {
        .name = _("TM48"),
        .itemId = ITEM_TM48_SKILL_SWAP,
        .price = 9500,
        .description = sTM48Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM49_SNATCH] =
    {
        .name = _("TM49"),
        .itemId = ITEM_TM49_SNATCH,
        .price = 5500,
        .description = sTM49Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM50_OVERHEAT] =
    {
        .name = _("TM50"),
        .itemId = ITEM_TM50_OVERHEAT,
        .price = 58000,
        .description = sTM50Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM51_FOCUS_BLAST] =
    {
        .name = _("TM51"),
        .itemId = ITEM_TM51_FOCUS_BLAST,
        .price = 45000,
        .description = sTM51Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM52_ACROBATICS] =
    {
        .name = _("TM52"),
        .itemId = ITEM_TM52_ACROBATICS,
        .price = 50000,
        .description = sTM52Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM53_GIGA_IMPACT] =
    {
        .name = _("TM53"),
        .itemId = ITEM_TM53_GIGA_IMPACT,
        .price = 50000,
        .description = sTM53Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM54_DARK_PULSE] =
    {
        .name = _("TM54"),
        .itemId = ITEM_TM54_DARK_PULSE,
        .price = 65000,
        .description = sTM54Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM55_WILD_CHARGE] =
    {
        .name = _("TM55"),
        .itemId = ITEM_TM55_WILD_CHARGE,
        .price = 30000,
        .description = sTM55Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM56_STONE_EDGE] =
    {
        .name = _("TM56"),
        .itemId = ITEM_TM56_STONE_EDGE,
        .price = 45000,
        .description = sTM56Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM57_CROSS_POISON] =
    {
        .name = _("TM57"),
        .itemId = ITEM_TM57_CROSS_POISON,
        .price = 30000,
        .description = sTM57Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM58_X_SCISSOR] =
    {
        .name = _("TM58"),
        .itemId = ITEM_TM58_X_SCISSOR,
        .price = 30000,
        .description = sTM58Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM59_HONE_CLAWS] =
    {
        .name = _("TM59"),
        .itemId = ITEM_TM59_HONE_CLAWS,
        .price = 30000,
        .description = sTM59Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM60_PSYSHOCK] =
    {
        .name = _("TM60"),
        .itemId = ITEM_TM60_PSYSHOCK,
        .price = 60000,
        .description = sTM60Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM61_ROOST] =
    {
        .name = _("TM61"),
        .itemId = ITEM_TM61_ROOST,
        .price = 38000,
        .description = sTM61Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM62_SMACK_DOWN] =
    {
        .name = _("TM62"),
        .itemId = ITEM_TM62_SMACK_DOWN,
        .price = 18000,
        .description = sTM62Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM63_SLUDGE_WAVE] =
    {
        .name = _("TM63"),
        .itemId = ITEM_TM63_SLUDGE_WAVE,
        .price = 65000,
        .description = sTM63Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM64_FLAME_CHARGE] =
    {
        .name = _("TM64"),
        .itemId = ITEM_TM64_FLAME_CHARGE,
        .price = 22000,
        .description = sTM64Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM65_LOW_SWEEP] =
    {
        .name = _("TM65"),
        .itemId = ITEM_TM65_LOW_SWEEP,
        .price = 30000,
        .description = sTM65Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM66_ECHOED_VOICE] =
    {
        .name = _("TM66"),
        .itemId = ITEM_TM66_ECHOED_VOICE,
        .price = 12500,
        .description = sTM66Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM67_ENERGY_BALL] =
    {
        .name = _("TM67"),
        .itemId = ITEM_TM67_ENERGY_BALL,
        .price = 55000,
        .description = sTM67Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM68_FALSE_SWIPE] =
    {
        .name = _("TM68"),
        .itemId = ITEM_TM68_FALSE_SWIPE,
        .price = 7000,
        .description = sTM68Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM69_SCALD] =
    {
        .name = _("TM69"),
        .itemId = ITEM_TM69_SCALD,
        .price = 55000,
        .description = sTM69Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM70_CHARGE_BEAM] =
    {
        .name = _("TM70"),
        .itemId = ITEM_TM70_CHARGE_BEAM,
        .price = 28000,
        .description = sTM70Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM71_SKY_DROP] =
    {
        .name = _("TM71"),
        .itemId = ITEM_TM71_SKY_DROP,
        .price = 18000,
        .description = sTM71Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM72_WILL_O_WISP] =
    {
        .name = _("TM72"),
        .itemId = ITEM_TM72_WILL_O_WISP,
        .price = 30000,
        .description = sTM72Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM73_EXPLOSION] =
    {
        .name = _("TM73"),
        .itemId = ITEM_TM73_EXPLOSION,
        .price = 30000,
        .description = sTM73Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM74_SHADOW_CLAW] =
    {
        .name = _("TM74"),
        .itemId = ITEM_TM74_SHADOW_CLAW,
        .price = 40000,
        .description = sTM74Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM75_PAYBACK] =
    {
        .name = _("TM75"),
        .itemId = ITEM_TM75_PAYBACK,
        .price = 45000,
        .description = sTM75Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM76_RETALIATE] =
    {
        .name = _("TM76"),
        .itemId = ITEM_TM76_RETALIATE,
        .price = 30000,
        .description = sTM76Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM77_ROCK_POLISH] =
    {
        .name = _("TM77"),
        .itemId = ITEM_TM77_ROCK_POLISH,
        .price = 35000,
        .description = sTM77Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM78_VOLT_SWITCH] =
    {
        .name = _("TM78"),
        .itemId = ITEM_TM78_VOLT_SWITCH,
        .price = 45000,
        .description = sTM78Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM79_THUNDER_WAVE] =
    {
        .name = _("TM79"),
        .itemId = ITEM_TM79_THUNDER_WAVE,
        .price = 30000,
        .description = sTM79Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM80_GYRO_BALL] =
    {
        .name = _("TM80"),
        .itemId = ITEM_TM80_GYRO_BALL,
        .price = 30000,
        .description = sTM80Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM81_SWORDS_DANCE] =
    {
        .name = _("TM81"),
        .itemId = ITEM_TM81_SWORDS_DANCE,
        .price = 30000,
        .description = sTM81Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM82_STRUGGLE_BUG] =
    {
        .name = _("TM82"),
        .itemId = ITEM_TM82_STRUGGLE_BUG,
        .price = 20000,
        .description = sTM82Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM83_BULLDOZE] =
    {
        .name = _("TM83"),
        .itemId = ITEM_TM83_BULLDOZE,
        .price = 20000,
        .description = sTM83Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM84_FROST_BREATH] =
    {
        .name = _("TM84"),
        .itemId = ITEM_TM84_FROST_BREATH,
        .price = 34000,
        .description = sTM84Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM85_ROCK_SLIDE] =
    {
        .name = _("TM85"),
        .itemId = ITEM_TM85_ROCK_SLIDE,
        .price = 38000,
        .description = sTM85Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM86_DRAGON_TAIL] =
    {
        .name = _("TM86"),
        .itemId = ITEM_TM86_DRAGON_TAIL,
        .price = 26000,
        .description = sTM86Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM87_POISON_JAB] =
    {
        .name = _("TM87"),
        .itemId = ITEM_TM87_POISON_JAB,
        .price = 45000,
        .description = sTM87Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM88_GRASS_KNOT] =
    {
        .name = _("TM88"),
        .itemId = ITEM_TM88_GRASS_KNOT,
        .price = 32000,
        .description = sTM88Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM89_SWAGGER] =
    {
        .name = _("TM89"),
        .itemId = ITEM_TM89_SWAGGER,
        .price = 30000,
        .description = sTM89Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM90_PLUCK] =
    {
        .name = _("TM90"),
        .itemId = ITEM_TM90_PLUCK,
        .price = 14000,
        .description = sTM90Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM91_U_TURN] =
    {
        .name = _("TM91"),
        .itemId = ITEM_TM91_U_TURN,
        .price = 45000,
        .description = sTM91Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM92_SUBSTITUTE] =
    {
        .name = _("TM92"),
        .itemId = ITEM_TM92_SUBSTITUTE,
        .price = 20000,
        .description = sTM92Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM93_FLASH_CANNON] =
    {
        .name = _("TM93"),
        .itemId = ITEM_TM93_FLASH_CANNON,
        .price = 50000,
        .description = sTM93Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM94_TRICK_ROOM] =
    {
        .name = _("TM94"),
        .itemId = ITEM_TM94_TRICK_ROOM,
        .price = 34000,
        .description = sTM94Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM95_STEALTH_ROCK] =
    {
        .name = _("TM95"),
        .itemId = ITEM_TM95_STEALTH_ROCK,
        .price = 60000,
        .description = sTM95Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM96_AVALANCHE] =
    {
        .name = _("TM96"),
        .itemId = ITEM_TM96_AVALANCHE,
        .price = 40000,
        .description = sTM96Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM97_BRINE] =
    {
        .name = _("TM97"),
        .itemId = ITEM_TM97_BRINE,
        .price = 23000,
        .description = sTM97Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM98_DRAIN_PUNCH] =
    {
        .name = _("TM98"),
        .itemId = ITEM_TM98_DRAIN_PUNCH,
        .price = 40000,
        .description = sTM98Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM99_DRAGON_PULSE] =
    {
        .name = _("TM99"),
        .itemId = ITEM_TM99_DRAGON_PULSE,
        .price = 46000,
        .description = sTM99Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM100_DAZZLING_GLEAM] =
    {
        .name = _("TM100"),
        .itemId = ITEM_TM100_DAZZLING_GLEAM,
        .price = 40000,
        .description = sTM100Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM101_BRUTAL_SWING] =
    {
        .name = _("TM101"),
        .itemId = ITEM_TM101_BRUTAL_SWING,
        .price = 17000,
        .description = sTM101Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM102_SMART_STRIKE] =
    {
        .name = _("TM102"),
        .itemId = ITEM_TM102_SMART_STRIKE,
        .price = 22000,
        .description = sTM102Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM103_AURORA_VEIL] =
    {
        .name = _("TM103"),
        .itemId = ITEM_TM103_AURORA_VEIL,
        .price = 30000,
        .description = sTM103Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM104_INFESTATION] =
    {
        .name = _("TM104"),
        .itemId = ITEM_TM104_INFESTATION,
        .price = 10000,
        .description = sTM104Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM105_SNARL] =
    {
        .name = _("TM105"),
        .itemId = ITEM_TM105_SNARL,
        .price = 12000,
        .description = sTM105Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM106_POWER_UP_PUNCH] =
    {
        .name = _("TM106"),
        .itemId = ITEM_TM106_POWER_UP_PUNCH,
        .price = 16000,
        .description = sTM106Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM107_ICE_PUNCH] =
    {
        .name = _("TM107"),
        .itemId = ITEM_TM107_ICE_PUNCH,
        .price = 25000,
        .description = sTM107Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM108_THUNDER_PUNCH] =
    {
        .name = _("TM108"),
        .itemId = ITEM_TM108_THUNDER_PUNCH,
        .price = 25000,
        .description = sTM108Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM109_FIRE_PUNCH] =
    {
        .name = _("TM109"),
        .itemId = ITEM_TM109_FIRE_PUNCH,
        .price = 25000,
        .description = sTM109Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM110_SKY_ATTACK] =
    {
        .name = _("TM110"),
        .itemId = ITEM_TM110_SKY_ATTACK,
        .price = 56000,
        .description = sTM110Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM111_PSYWAVE] =
    {
        .name = _("TM111"),
        .itemId = ITEM_TM111_PSYWAVE,
        .price = 24000,
        .description = sTM111Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM112_AURA_SPHERE] =
    {
        .name = _("TM112"),
        .itemId = ITEM_TM112_AURA_SPHERE,
        .price = 50000,
        .description = sTM112Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM113_TAILWIND] =
    {
        .name = _("TM113"),
        .itemId = ITEM_TM113_TAILWIND,
        .price = 30000,
        .description = sTM113Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM114_GUNK_SHOT] =
    {
        .name = _("TM114"),
        .itemId = ITEM_TM114_GUNK_SHOT,
        .price = 61000,
        .description = sTM114Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM115_IRON_HEAD] =
    {
        .name = _("TM115"),
        .itemId = ITEM_TM115_IRON_HEAD,
        .price = 59000,
        .description = sTM115Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM116_ELECTRIC_TERRAIN] =
    {
        .name = _("TM116"),
        .itemId = ITEM_TM116_ELECTRIC_TERRAIN,
        .price = 30000,
        .description = sTM116Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM117_GRASSY_TERRAIN] =
    {
        .name = _("TM117"),
        .itemId = ITEM_TM117_GRASSY_TERRAIN,
        .price = 30000,
        .description = sTM117Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM118_PSYCHIC_TERRAIN] =
    {
        .name = _("TM118"),
        .itemId = ITEM_TM118_PSYCHIC_TERRAIN,
        .price = 30000,
        .description = sTM118Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_TM119_MISTY_TERRAIN] =
    {
        .name = _("TM119"),
        .itemId = ITEM_TM119_MISTY_TERRAIN,
        .price = 30000,
        .description = sTM119Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM120_HEAVY_SLAM] =
    {
        .name = _("TM120"),
        .itemId = ITEM_TM120_HEAVY_SLAM,
        .price = 30000,
        .description = sTM120Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM121_HYPER_VOICE] =
    {
        .name = _("TM121"),
        .itemId = ITEM_TM121_HYPER_VOICE,
        .price = 30000,
        .description = sTM121Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM122_EERIE_IMPULSE] =
    {
        .name = _("TM122"),
        .itemId = ITEM_TM122_EERIE_IMPULSE,
        .price = 30000,
        .description = sTM122Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM123_SOLAR_BLADE] =
    {
        .name = _("TM123"),
        .itemId = ITEM_TM123_SOLAR_BLADE,
        .price = 30000,
        .description = sTM123Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM124_THUNDER_FANG] =
    {
        .name = _("TM124"),
        .itemId = ITEM_TM124_THUNDER_FANG,
        .price = 30000,
        .description = sTM124Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM125_ICE_FANG] =
    {
        .name = _("TM125"),
        .itemId = ITEM_TM125_ICE_FANG,
        .price = 30000,
        .description = sTM125Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM126_FIRE_FANG] =
    {
        .name = _("TM126"),
        .itemId = ITEM_TM126_FIRE_FANG,
        .price = 30000,
        .description = sTM126Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM127_ELECTROWEB] =
    {
        .name = _("TM127"),
        .itemId = ITEM_TM127_ELECTROWEB,
        .price = 30000,
        .description = sTM127Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM128_FISSURE] =
    {
        .name = _("TM128"),
        .itemId = ITEM_TM128_FISSURE,
        .price = 30000,
        .description = sTM128Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM129_POISON_TAIL] =
    {
        .name = _("TM129"),
        .itemId = ITEM_TM129_POISON_TAIL,
        .price = 30000,
        .description = sTM129Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM130_TRI_ATTACK] =
    {
        .name = _("TM130"),
        .itemId = ITEM_TM130_TRI_ATTACK,
        .price = 30000,
        .description = sTM130Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM131_EARTH_POWER] =
    {
        .name = _("TM131"),
        .itemId = ITEM_TM131_EARTH_POWER,
        .price = 30000,
        .description = sTM131Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM132_NASTY_PLOT] =
    {
        .name = _("TM132"),
        .itemId = ITEM_TM132_NASTY_PLOT,
        .price = 30000,
        .description = sTM132Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM133_HEAT_CRASH] =
    {
        .name = _("TM133"),
        .itemId = ITEM_TM133_HEAT_CRASH,
        .price = 30000,
        .description = sTM133Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM134_CURSE] =
    {
        .name = _("TM134"),
        .itemId = ITEM_TM134_CURSE,
        .price = 30000,
        .description = sTM134Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM135_VACUUM_WAVE] =
    {
        .name = _("TM135"),
        .itemId = ITEM_TM135_VACUUM_WAVE,
        .price = 30000,
        .description = sTM135Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM136_WEATHER_BALL] =
    {
        .name = _("TM136"),
        .itemId = ITEM_TM136_WEATHER_BALL,
        .price = 30000,
        .description = sTM136Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM137_SUPER_FANG] =
    {
        .name = _("TM137"),
        .itemId = ITEM_TM137_SUPER_FANG,
        .price = 30000,
        .description = sTM137Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM138_HIGH_HORSEPOWER] =
    {
        .name = _("TM138"),
        .itemId = ITEM_TM138_HIGH_HORSEPOWER,
        .price = 30000,
        .description = sTM138Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM139_SCORCHING_SANDS] =
    {
        .name = _("TM139"),
        .itemId = ITEM_TM139_SCORCHING_SANDS,
        .price = 30000,
        .description = sTM139Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM140_POLTERGEIST] =
    {
        .name = _("TM140"),
        .itemId = ITEM_TM140_POLTERGEIST,
        .price = 30000,
        .description = sTM140Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM141_STEEL_BEAM] =
    {
        .name = _("TM141"),
        .itemId = ITEM_TM141_STEEL_BEAM,
        .price = 30000,
        .description = sTM141Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM142_TRICK] =
    {
        .name = _("TM142"),
        .itemId = ITEM_TM142_TRICK,
        .price = 30000,
        .description = sTM142Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM143_LEECH_LIFE] =
    {
        .name = _("TM143"),
        .itemId = ITEM_TM143_LEECH_LIFE,
        .price = 30000,
        .description = sTM143Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM144_ROCK_BLAST] =
    {
        .name = _("TM144"),
        .itemId = ITEM_TM144_ROCK_BLAST,
        .price = 30000,
        .description = sTM144Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM145_STORED_POWER] =
    {
        .name = _("TM145"),
        .itemId = ITEM_TM145_STORED_POWER,
        .price = 30000,
        .description = sTM145Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM146_DRAINING_KISS] =
    {
        .name = _("TM146"),
        .itemId = ITEM_TM146_DRAINING_KISS,
        .price = 30000,
        .description = sTM146Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM147_SOFT_BOILED] =
    {
        .name = _("TM147"),
        .itemId = ITEM_TM147_SOFT_BOILED,
        .price = 30000,
        .description = sTM147Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM148_DREAM_EATER] =
    {
        .name = _("TM148"),
        .itemId = ITEM_TM148_DREAM_EATER,
        .price = 30000,
        .description = sTM148Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM149_ZAP_CANNON] =
    {
        .name = _("TM149"),
        .itemId = ITEM_TM149_ZAP_CANNON,
        .price = 30000,
        .description = sTM149Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM150_BODY_SLAM] =
    {
        .name = _("TM150"),
        .itemId = ITEM_TM150_BODY_SLAM,
        .price = 30000,
        .description = sTM150Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM151_ICICLE_SPEAR] =
    {
        .name = _("TM151"),
        .itemId = ITEM_TM151_ICICLE_SPEAR,
        .price = 30000,
        .description = sTM151Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM152_MYSTICAL_FIRE] =
    {
        .name = _("TM152"),
        .itemId = ITEM_TM152_MYSTICAL_FIRE,
        .price = 30000,
        .description = sTM152Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM153_PSYCHO_CUT] =
    {
        .name = _("TM153"),
        .itemId = ITEM_TM153_PSYCHO_CUT,
        .price = 30000,
        .description = sTM153Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM154_SHEER_COLD] =
    {
        .name = _("TM154"),
        .itemId = ITEM_TM154_SHEER_COLD,
        .price = 30000,
        .description = sTM154Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM155_VENOSHOCK] =
    {
        .name = _("TM155"),
        .itemId = ITEM_TM155_VENOSHOCK,
        .price = 30000,
        .description = sTM155Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM156_GUILLOTINE] =
    {
        .name = _("TM156"),
        .itemId = ITEM_TM156_GUILLOTINE,
        .price = 30000,
        .description = sTM156Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM157_PIN_MISSILE] =
    {
        .name = _("TM157"),
        .itemId = ITEM_TM157_PIN_MISSILE,
        .price = 30000,
        .description = sTM157Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM158_ACID_SPRAY] =
    {
        .name = _("TM158"),
        .itemId = ITEM_TM158_ACID_SPRAY,
        .price = 30000,
        .description = sTM158Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM159_FOUL_PLAY] =
    {
        .name = _("TM159"),
        .itemId = ITEM_TM159_FOUL_PLAY,
        .price = 30000,
        .description = sTM159Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM160_HORN_DRILL] =
    {
        .name = _("TM160"),
        .itemId = ITEM_TM160_HORN_DRILL,
        .price = 30000,
        .description = sTM160Desc,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },
	
	[ITEM_TM161_DRACO_METEOR] = {
    .name = _("TM161"),
    .itemId = ITEM_TM161_DRACO_METEOR,
    .price = 30000,
    .description = sTM161Desc,
    .pocket = POCKET_TM_HM,
    .type = ITEM_USE_PARTY_MENU,
    .fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM162_HEAT_WAVE] = {
		.name = _("TM162"),
		.itemId = ITEM_TM162_HEAT_WAVE,
		.price = 30000,
		.description = sTM162Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM163_GRASSY_GLIDE] = {
		.name = _("TM163"),
		.itemId = ITEM_TM163_GRASSY_GLIDE,
		.price = 30000,
		.description = sTM163Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM164_RISING_VOLTAGE] = {
		.name = _("TM164"),
		.itemId = ITEM_TM164_RISING_VOLTAGE,
		.price = 30000,
		.description = sTM164Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM165_EXPANDING_FORCE] = {
		.name = _("TM165"),
		.itemId = ITEM_TM165_EXPANDING_FORCE,
		.price = 30000,
		.description = sTM165Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM166_AMNESIA] = {
		.name = _("TM166"),
		.itemId = ITEM_TM166_AMNESIA,
		.price = 30000,
		.description = sTM166Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM167_FLIP_TURN] = {
		.name = _("TM167"),
		.itemId = ITEM_TM167_FLIP_TURN,
		.price = 30000,
		.description = sTM167Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM168_ICY_WIND] = {
		.name = _("TM168"),
		.itemId = ITEM_TM168_ICY_WIND,
		.price = 30000,
		.description = sTM168Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},
	
	[ITEM_TM169_DUAL_WINGBEAT] = {
		.name = _("TM169"),
		.itemId = ITEM_TM169_DUAL_WINGBEAT,
		.price = 30000,
		.description = sTM169Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM170_THOUSAND_WAVES] = {
		.name = _("TM170"),
		.itemId = ITEM_TM170_THOUSAND_WAVES,
		.price = 30000,
		.description = sTM170Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM171_TELEPORT] = {
		.name = _("TM171"),
		.itemId = ITEM_TM171_TELEPORT,
		.price = 30000,
		.description = sTM171Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM172_SLEEP_TALK] = {
		.name = _("TM172"),
		.itemId = ITEM_TM172_SLEEP_TALK,
		.price = 30000,
		.description = sTM172Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM173_POWER_GEM] = {
		.name = _("TM173"),
		.itemId = ITEM_TM173_POWER_GEM,
		.price = 30000,
		.description = sTM173Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM174_REVERSAL] = {
		.name = _("TM174"),
		.itemId = ITEM_TM174_REVERSAL,
		.price = 30000,
		.description = sTM174Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM175_CLOSE_COMBAT] = {
		.name = _("TM175"),
		.itemId = ITEM_TM175_CLOSE_COMBAT,
		.price = 30000,
		.description = sTM175Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM176_PHANTOM_FORCE] = {
		.name = _("TM176"),
		.itemId = ITEM_TM176_PHANTOM_FORCE,
		.price = 30000,
		.description = sTM176Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM177_SPIKES] = {
		.name = _("TM177"),
		.itemId = ITEM_TM177_SPIKES,
		.price = 30000,
		.description = sTM177Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM178_IRON_DEFENSE] = {
		.name = _("TM178"),
		.itemId = ITEM_TM178_IRON_DEFENSE,
		.price = 30000,
		.description = sTM178Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM179_ENCORE] = {
		.name = _("TM179"),
		.itemId = ITEM_TM179_ENCORE,
		.price = 30000,
		.description = sTM179Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM180_SEED_BOMB] = {
		.name = _("TM180"),
		.itemId = ITEM_TM180_SEED_BOMB,
		.price = 30000,
		.description = sTM180Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM181_PSYCHIC_FANGS] = {
		.name = _("TM181"),
		.itemId = ITEM_TM181_PSYCHIC_FANGS,
		.price = 30000,
		.description = sTM181Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM182_RAZOR_WIND] = {
		.name = _("TM182"),
		.itemId = ITEM_TM182_RAZOR_WIND,
		.price = 30000,
		.description = sTM182Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM183_WORK_UP] = {
		.name = _("TM183"),
		.itemId = ITEM_TM183_WORK_UP,
		.price = 30000,
		.description = sTM183Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM184_NIGHTMARE] = {
		.name = _("TM184"),
		.itemId = ITEM_TM184_NIGHTMARE,
		.price = 30000,
		.description = sTM184Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM185_MAGICAL_LEAF] = {
		.name = _("TM185"),
		.itemId = ITEM_TM185_MAGICAL_LEAF,
		.price = 30000,
		.description = sTM185Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM186_KNOCK_OFF] = {
		.name = _("TM186"),
		.itemId = ITEM_TM186_KNOCK_OFF,
		.price = 30000,
		.description = sTM186Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM187_SCALE_SHOT] = {
		.name = _("TM187"),
		.itemId = ITEM_TM187_SCALE_SHOT,
		.price = 30000,
		.description = sTM187Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM188_METEOR_BEAM] = {
		.name = _("TM188"),
		.itemId = ITEM_TM188_METEOR_BEAM,
		.price = 30000,
		.description = sTM188Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM189_CHARGE] = {
		.name = _("TM189"),
		.itemId = ITEM_TM189_CHARGE,
		.price = 30000,
		.description = sTM189Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM190_LEAF_STORM] = {
		.name = _("TM190"),
		.itemId = ITEM_TM190_LEAF_STORM,
		.price = 30000,
		.description = sTM190Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM191_TOXIC_SPIKES] = {
		.name = _("TM191"),
		.itemId = ITEM_TM191_TOXIC_SPIKES,
		.price = 30000,
		.description = sTM191Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM192_LOW_KICK] = {
		.name = _("TM192"),
		.itemId = ITEM_TM192_LOW_KICK,
		.price = 30000,
		.description = sTM192Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM193_MEGA_KICK] = {
		.name = _("TM193"),
		.itemId = ITEM_TM193_MEGA_KICK,
		.price = 30000,
		.description = sTM193Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM194_SKULL_BASH] = {
		.name = _("TM194"),
		.itemId = ITEM_TM194_SKULL_BASH,
		.price = 30000,
		.description = sTM194Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM195_DRAGON_RAGE] = {
		.name = _("TM195"),
		.itemId = ITEM_TM195_DRAGON_RAGE,
		.price = 30000,
		.description = sTM195Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM196_DOUBLE_EDGE] = {
		.name = _("TM196"),
		.itemId = ITEM_TM196_DOUBLE_EDGE,
		.price = 30000,
		.description = sTM196Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM197_SUBMISSION] = {
		.name = _("TM197"),
		.itemId = ITEM_TM197_SUBMISSION,
		.price = 30000,
		.description = sTM197Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM198_MUD_SLAP] = {
		.name = _("TM198"),
		.itemId = ITEM_TM198_MUD_SLAP,
		.price = 30000,
		.description = sTM198Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM199_AGILITY] = {
		.name = _("TM199"),
		.itemId = ITEM_TM199_AGILITY,
		.price = 30000,
		.description = sTM199Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM200_HYDRO_PUMP] = {
		.name = _("TM200"),
		.itemId = ITEM_TM200_HYDRO_PUMP,
		.price = 30000,
		.description = sTM200Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM201_ANCIENT_POWER] = {
		.name = _("TM201"),
		.itemId = ITEM_TM201_ANCIENT_POWER,
		.price = 30000,
		.description = sTM201Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM202_BODY_PRESS] = {
		.name = _("TM202"),
		.itemId = ITEM_TM202_BODY_PRESS,
		.price = 30000,
		.description = sTM202Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM203_FUTURE_SIGHT] = {
		.name = _("TM203"),
		.itemId = ITEM_TM203_FUTURE_SIGHT,
		.price = 30000,
		.description = sTM203Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM204_COSMIC_POWER] = {
		.name = _("TM204"),
		.itemId = ITEM_TM204_COSMIC_POWER,
		.price = 30000,
		.description = sTM204Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM205_MAGNET_RISE] = {
		.name = _("TM205"),
		.itemId = ITEM_TM205_MAGNET_RISE,
		.price = 30000,
		.description = sTM205Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM206_OMINOUS_WIND] = {
		.name = _("TM206"),
		.itemId = ITEM_TM206_OMINOUS_WIND,
		.price = 30000,
		.description = sTM206Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},
    
	[ITEM_TM207_ENDURE] = {
		.name = _("TM207"),
		.itemId = ITEM_TM207_ENDURE,
		.price = 30000,
		.description = sTM207Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM208_MACH_PUNCH] = {
		.name = _("TM208"),
		.itemId = ITEM_TM208_MACH_PUNCH,
		.price = 30000,
		.description = sTM208Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM209_DEFOG] = {
		.name = _("TM209"),
		.itemId = ITEM_TM209_DEFOG,
		.price = 30000,
		.description = sTM209Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM210_BOUNCE] = {
		.name = _("TM210"),
		.itemId = ITEM_TM210_BOUNCE,
		.price = 30000,
		.description = sTM210Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM211_POISON_FANG] = {
		.name = _("TM211"),
		.itemId = ITEM_TM211_POISON_FANG,
		.price = 30000,
		.description = sTM211Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM212_INGRAIN] = {
		.name = _("TM212"),
		.itemId = ITEM_TM212_INGRAIN,
		.price = 30000,
		.description = sTM212Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM213_ACID_ARMOR] = {
		.name = _("TM213"),
		.itemId = ITEM_TM213_ACID_ARMOR,
		.price = 30000,
		.description = sTM213Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM214_NEEDLE_ARM] = {
		.name = _("TM214"),
		.itemId = ITEM_TM214_NEEDLE_ARM,
		.price = 30000,
		.description = sTM214Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM215_SKY_UPPERCUT] = {
		.name = _("TM215"),
		.itemId = ITEM_TM215_SKY_UPPERCUT,
		.price = 30000,
		.description = sTM215Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM216_AQUA_RING] = {
		.name = _("TM216"),
		.itemId = ITEM_TM216_AQUA_RING,
		.price = 30000,
		.description = sTM216Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM217_BULLET_PUNCH] = {
		.name = _("TM217"),
		.itemId = ITEM_TM217_BULLET_PUNCH,
		.price = 30000,
		.description = sTM217Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM218_BRAVE_BIRD] = {
		.name = _("TM218"),
		.itemId = ITEM_TM218_BRAVE_BIRD,
		.price = 30000,
		.description = sTM218Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM219_ATTACK_ORDER] = {
		.name = _("TM219"),
		.itemId = ITEM_TM219_ATTACK_ORDER,
		.price = 30000,
		.description = sTM219Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM220_DEFEND_ORDER] = {
		.name = _("TM220"),
		.itemId = ITEM_TM220_DEFEND_ORDER,
		.price = 30000,
		.description = sTM220Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM221_COIL] = {
		.name = _("TM221"),
		.itemId = ITEM_TM221_COIL,
		.price = 30000,
		.description = sTM221Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM222_HORN_LEECH] = {
		.name = _("TM222"),
		.itemId = ITEM_TM222_HORN_LEECH,
		.price = 30000,
		.description = sTM222Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM223_COTTON_GUARD] = {
		.name = _("TM223"),
		.itemId = ITEM_TM223_COTTON_GUARD,
		.price = 30000,
		.description = sTM223Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM224_STICKY_WEB] = {
		.name = _("TM224"),
		.itemId = ITEM_TM224_STICKY_WEB,
		.price = 30000,
		.description = sTM224Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM225_ICE_HAMMER] = {
		.name = _("TM225"),
		.itemId = ITEM_TM225_ICE_HAMMER,
		.price = 30000,
		.description = sTM225Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM226_RAPID_SPIN] = {
		.name = _("TM226"),
		.itemId = ITEM_TM226_RAPID_SPIN,
		.price = 30000,
		.description = sTM226Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM227_SUPERPOWER] = {
		.name = _("TM227"),
		.itemId = ITEM_TM227_SUPERPOWER,
		.price = 30000,
		.description = sTM227Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM228_SILVER_WIND] = {
		.name = _("TM228"),
		.itemId = ITEM_TM228_SILVER_WIND,
		.price = 30000,
		.description = sTM228Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM229_LEAF_BLADE] = {
		.name = _("TM229"),
		.itemId = ITEM_TM229_LEAF_BLADE,
		.price = 30000,
		.description = sTM229Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM230_STORM_THROW] = {
		.name = _("TM230"),
		.itemId = ITEM_TM230_STORM_THROW,
		.price = 30000,
		.description = sTM230Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM231_SHELL_SMASH] = {
		.name = _("TM231"),
		.itemId = ITEM_TM231_SHELL_SMASH,
		.price = 30000,
		.description = sTM231Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM232_DUAL_CHOP] = {
		.name = _("TM232"),
		.itemId = ITEM_TM232_DUAL_CHOP,
		.price = 30000,
		.description = sTM232Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM233_MUDDY_WATER] = {
		.name = _("TM233"),
		.itemId = ITEM_TM233_MUDDY_WATER,
		.price = 30000,
		.description = sTM233Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM234_METEOR_MASH] = {
		.name = _("TM234"),
		.itemId = ITEM_TM234_METEOR_MASH,
		.price = 30000,
		.description = sTM234Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM235_CRABHAMMER] = {
		.name = _("TM235"),
		.itemId = ITEM_TM235_CRABHAMMER,
		.price = 30000,
		.description = sTM235Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM236_ERUPTION] = {
		.name = _("TM236"),
		.itemId = ITEM_TM236_ERUPTION,
		.price = 30000,
		.description = sTM236Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM237_WATER_SPOUT] = {
		.name = _("TM237"),
		.itemId = ITEM_TM237_WATER_SPOUT,
		.price = 30000,
		.description = sTM237Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM238_SIMPLE_BEAM] = {
		.name = _("TM238"),
		.itemId = ITEM_TM238_SIMPLE_BEAM,
		.price = 30000,
		.description = sTM238Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM239_POWER_WHIP] = {
		.name = _("TM239"),
		.itemId = ITEM_TM239_POWER_WHIP,
		.price = 30000,
		.description = sTM239Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM240_MUD_SHOT] = {
		.name = _("TM240"),
		.itemId = ITEM_TM240_MUD_SHOT,
		.price = 30000,
		.description = sTM240Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM241_BLAZE_KICK] = {
		.name = _("TM241"),
		.itemId = ITEM_TM241_BLAZE_KICK,
		.price = 30000,
		.description = sTM241Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM242_BIDE] = {
		.name = _("TM242"),
		.itemId = ITEM_TM242_BIDE,
		.price = 30000,
		.description = sTM242Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM243_NATURE_POWER] = {
		.name = _("TM243"),
		.itemId = ITEM_TM243_NATURE_POWER,
		.price = 30000,
		.description = sTM243Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM244_ELECTRO_BALL] = {
		.name = _("TM244"),
		.itemId = ITEM_TM244_ELECTRO_BALL,
		.price = 30000,
		.description = sTM244Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},

	[ITEM_TM245_SHIFT_GEAR] = {
		.name = _("TM245"),
		.itemId = ITEM_TM245_SHIFT_GEAR,
		.price = 30000,
		.description = sTM245Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},
    
	[ITEM_TM246_SACRED_SWORD] = {
		.name = _("TM246"),
		.itemId = ITEM_TM246_SACRED_SWORD,
		.price = 30000,
		.description = sTM246Desc,
		.pocket = POCKET_TM_HM,
		.type = ITEM_USE_PARTY_MENU,
		.fieldUseFunc = ItemUseOutOfBattle_TMHM,
	},
	
    [ITEM_HM01_CUT] =
    {
        .name = _("HM01"),
        .itemId = ITEM_HM01_CUT,
        .price = 0,
        .description = sHM01Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM02_FLY] =
    {
        .name = _("HM02"),
        .itemId = ITEM_HM02_FLY,
        .price = 0,
        .description = sHM02Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM03_SURF] =
    {
        .name = _("HM03"),
        .itemId = ITEM_HM03_SURF,
        .price = 0,
        .description = sHM03Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM04_STRENGTH] =
    {
        .name = _("HM04"),
        .itemId = ITEM_HM04_STRENGTH,
        .price = 0,
        .description = sHM04Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM05_FLASH] =
    {
        .name = _("HM05"),
        .itemId = ITEM_HM05_FLASH,
        .price = 0,
        .description = sHM05Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM06_ROCK_SMASH] =
    {
        .name = _("HM06"),
        .itemId = ITEM_HM06_ROCK_SMASH,
        .price = 0,
        .description = sHM06Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM07_WATERFALL] =
    {
        .name = _("HM07"),
        .itemId = ITEM_HM07_WATERFALL,
        .price = 0,
        .description = sHM07Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },

    [ITEM_HM08_DIVE] =
    {
        .name = _("HM08"),
        .itemId = ITEM_HM08_DIVE,
        .price = 0,
        .description = sHM08Desc,
        .importance = 1,
        .pocket = POCKET_TM_HM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
    },


// Charms

    [ITEM_OVAL_CHARM] =
    {
        .name = _("Ovalpin"),
        .itemId = ITEM_OVAL_CHARM,
        .price = 0,
        .importance = 1,
        .description = sOvalCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHINY_CHARM] =
    {
        .name = _("Schillerpin"),
        .itemId = ITEM_SHINY_CHARM,
        .price = 0,
        .importance = 1,
        .description = sShinyCharmDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CATCHING_CHARM] = // Todo
    {
        .name = _("Amul.Captura"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXP_CHARM] = // Todo
    {
        .name = _("Amuleto Exp."),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Form-changing Key Items

    [ITEM_ROTOM_CATALOG] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRACIDEA] =
    {
        .name = _("Gracidea"),
        .itemId = ITEM_GRACIDEA,
        .price = 0,
        .holdEffect = HOLD_EFFECT_GRACIDEA,
        .description = sGracideaDesc,
        .pocket = POCKET_KEY_ITEMS,
        #ifdef POKEMON_EXPANSION
            .type = ITEM_USE_PARTY_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_FormChange,
            .secondaryId = FORM_ITEM_USE_TIME,
        #else
            .type = ITEM_USE_BAG_MENU,
            .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        #endif
    },

    [ITEM_REVEAL_GLASS] = // Todo
    {
        .name = _("Wahrspiegel"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DNA_SPLICERS] = // Todo
    {
        .name = _("DNS-Keil"),
        .itemId = ITEM_DNA_SPLICERS,
        .price = 0,
		.importance = 1,
        .description = sDNASplicersDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ZYGARDE_CUBE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PRISON_BOTTLE] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_N_SOLARIZER] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_N_LUNARIZER] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_REINS_OF_UNITY] = // Todo
    {
        .name = _("Zügel D.Bunds"),
        .itemId = ITEM_REINS_OF_UNITY,
        .price = 0,
		.importance = 1,
        .description = sReinsOfUnityDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
    },

// Battle Mechanic Key Items

    [ITEM_KEY_STONE] = // Todo
    {
        .name = _("Schlüssl-Stn"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MEGA_RING] = // Todo (Replaces ITEM_MEGA_BRACELET)
    {
        .name = _("Mega-Ring"),
        .itemId = ITEM_MEGA_RING,
        .price = 0,
        .importance = 1,
        .description = sMegaRingDesc,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_Z_POWER_RING] = // Todo (Replaces ITEM_Z_POWER_RING)
    {
        .name = _("Z-Ring"),
        .itemId = ITEM_Z_POWER_RING,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .description = sZPowerRingDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DYNAMAX_BAND] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Misc. Key Items

    [ITEM_BICYCLE] =
    {
        .name = _("Fahrrad"),
        .itemId = ITEM_BICYCLE,
        .price = 0,
        .description = sBicycleDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MACH_BIKE] =
    {
        .name = _("Eilrad"),
        .itemId = ITEM_MACH_BIKE,
        .price = 0,
        .description = sMachBikeDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = MACH_BIKE,
    },

    [ITEM_ACRO_BIKE] =
    {
        .name = _("Kunstrad"),
        .itemId = ITEM_ACRO_BIKE,
        .price = 0,
        .description = sAcroBikeDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = ACRO_BIKE,
    },

    [ITEM_OLD_ROD] =
    {
        .name = _("Angel"),
        .itemId = ITEM_OLD_ROD,
        .price = 0,
        .description = sOldRodDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = OLD_ROD,
    },

    [ITEM_GOOD_ROD] =
    {
        .name = _("Profiangel"),
        .itemId = ITEM_GOOD_ROD,
        .price = 0,
        .description = sGoodRodDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = GOOD_ROD,
    },

    [ITEM_SUPER_ROD] =
    {
        .name = _("Superangel"),
        .itemId = ITEM_SUPER_ROD,
        .price = 0,
        .description = sSuperRodDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = SUPER_ROD,
    },

    [ITEM_DOWSING_MACHINE] =
    {
        .name = _("Itemradar"),
        .itemId = ITEM_DOWSING_MACHINE,
        .price = 0,
        .description = sDowsingMachineDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
    },

    [ITEM_TOWN_MAP] =
    {
        .name = _("Karte"),
        .itemId = ITEM_TOWN_MAP,
        .price = 0,
        .description = sTownMapDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TownMap,
    },

    [ITEM_VS_SEEKER] =
    {
        .name = _("Gerät-&"),
        .itemId = ITEM_VS_SEEKER,
        .price = 0,
        .description = sVsSeekerDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TM_CASE] =
    {
        .name = _("TM-Box"),
        .itemId = ITEM_TM_CASE,
        .price = 0,
        .description = sTMCaseDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BERRY_POUCH] =
    {
        .name = _("Beerentüte"),
        .itemId = ITEM_BERRY_POUCH,
        .price = 0,
        .description = sBerryPouchDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKEMON_BOX_LINK] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_COIN_CASE] =
    {
        .name = _("Münzkorb"),
        .itemId = ITEM_COIN_CASE,
        .price = 0,
        .description = sCoinCaseDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
    },

    [ITEM_POWDER_JAR] =
    {
        .name = _("Puderdöschen"),
        .itemId = ITEM_POWDER_JAR,
        .price = 0,
        .description = sPowderJarDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
    },

    [ITEM_WAILMER_PAIL] =
    {
        .name = _("Wailmerkanne"),
        .itemId = ITEM_WAILMER_PAIL,
        .price = 0,
        .description = sWailmerPailDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
    },

    [ITEM_POKE_RADAR] = // Todo
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKEBLOCK_CASE] =
    {
        .name = _("Pokériegelbox"),
        .itemId = ITEM_POKEBLOCK_CASE,
        .price = 0,
        .description = sPokeblockCaseDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PBLOCK_CASE,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
    },

    [ITEM_SOOT_SACK] =
    {
        .name = _("Aschetasche"),
        .itemId = ITEM_SOOT_SACK,
        .price = 0,
        .description = sSootSackDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POKE_FLUTE] =
    {
        .name = _("Pokéflöte"),
        .itemId = ITEM_POKE_FLUTE,
        .price = 0,
        .description = sPokeFluteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FAME_CHECKER] =
    {
        .name = _("Ruhmesdatei"),
        .itemId = ITEM_FAME_CHECKER,
        .price = 0,
        .description = sFameCheckerDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEACHY_TV] =
    {
        .name = _("Lehrkanal"),
        .itemId = ITEM_TEACHY_TV,
        .price = 0,
        .description = sTeachyTVDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Story Key Items

    [ITEM_SS_TICKET] =
    {
        .name = _("Bootsticket"),
        .itemId = ITEM_SS_TICKET,
        .price = 0,
        .description = sSSTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EON_TICKET] =
    {
        .name = _("Elite Pass"),
        .itemId = ITEM_EON_TICKET,
        .price = 0,
        .description = sEonTicketDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 1,
    },

    [ITEM_MYSTIC_TICKET] =
    {
        .name = _("Geheimticket"),
        .itemId = ITEM_MYSTIC_TICKET,
        .price = 0,
        .description = sMysticTicketDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AURORA_TICKET] =
    {
        .name = _("Auroraticket"),
        .itemId = ITEM_AURORA_TICKET,
        .price = 0,
        .description = sAuroraTicketDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OLD_SEA_MAP] =
    {
        .name = _("Alte Karte"),
        .itemId = ITEM_OLD_SEA_MAP,
        .price = 0,
        .description = sOldSeaMapDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LETTER] =
    {
        .name = _("Brief an Troy"),
        .itemId = ITEM_LETTER,
        .price = 0,
        .description = sLetterDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_PARTS] =
    {
        .name = _("Devon-Waren"),
        .itemId = ITEM_DEVON_PARTS,
        .price = 0,
        .description = sDevonPartsDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GO_GOGGLES] =
    {
        .name = _("Wüstenbrille"),
        .itemId = ITEM_GO_GOGGLES,
        .price = 0,
        .description = sGoGogglesDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_SCOPE] =
    {
        .name = _("Devon-Scope"),
        .itemId = ITEM_DEVON_SCOPE,
        .price = 0,
        .description = sDevonScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BASEMENT_KEY] =
    {
        .name = _("Büro-Schlüssl"),
        .itemId = ITEM_BASEMENT_KEY,
        .price = 0,
        .description = sBasementKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCANNER] =
    {
        .name = _("Querströme"),
        .itemId = ITEM_SCANNER,
        .price = 0,
        .description = sScannerDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STORAGE_KEY] =
    {
        .name = _("Lagerschlüssl"),
        .itemId = ITEM_STORAGE_KEY,
        .price = 0,
        .description = sStorageKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_1] =
    {
        .name = _("K1-Schlüssel"),
        .itemId = ITEM_KEY_TO_ROOM_1,
        .price = 0,
        .description = sKeyToRoom1Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_2] =
    {
        .name = _("K2-Schlüssel"),
        .itemId = ITEM_KEY_TO_ROOM_2,
        .price = 0,
        .description = sKeyToRoom2Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_4] =
    {
        .name = _("K4-Schlüssel"),
        .itemId = ITEM_KEY_TO_ROOM_4,
        .price = 0,
        .description = sKeyToRoom4Desc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KEY_TO_ROOM_6] =
    {
        .name = _("Goldstein"),
        .itemId = ITEM_KEY_TO_ROOM_6,
        .price = 9800,
        .description = sThunderStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_METEORITE] =
    {
        .name = _("Meteorit"),
        .itemId = ITEM_METEORITE,
        .price = 0,
        .description = sMeteoriteDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGMA_EMBLEM] =
    {
        .name = _("Magmaemblem"),
        .itemId = ITEM_MAGMA_EMBLEM,
        .price = 0,
        .description = sMagmaEmblemDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CONTEST_PASS] =
    {
        .name = _("Saf-VIP-Pass"),
        .itemId = ITEM_CONTEST_PASS,
        .price = 0,
        .description = sContestPassDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_OAKS_PARCEL] =
    {
        .name = _("Paket"),
        .itemId = ITEM_OAKS_PARCEL,
        .price = 0,
        .description = sOaksParcelDesc,
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SECRET_KEY] =
    {
        .name = _("Geheimschlüsl"),
        .itemId = ITEM_SECRET_KEY,
        .price = 0,
        .description = sSecretKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIKE_VOUCHER] =
    {
        .name = _("Rad-Coupon"),
        .itemId = ITEM_BIKE_VOUCHER,
        .price = 0,
        .description = sBikeVoucherDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GOLD_TEETH] =
    {
        .name = _("Goldns Gebiss"),
        .itemId = ITEM_GOLD_TEETH,
        .price = 0,
        .description = sGoldTeethDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CARD_KEY] =
    {
        .name = _("Türöffner"),
        .itemId = ITEM_CARD_KEY,
        .price = 0,
        .description = sCardKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIFT_KEY] =
    {
        .name = _("Liftöffner"),
        .itemId = ITEM_LIFT_KEY,
        .price = 0,
        .description = sLiftKeyDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILPH_SCOPE] =
    {
        .name = _("Silph Scope"),
        .itemId = ITEM_SILPH_SCOPE,
        .price = 0,
        .description = sSilphScopeDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TRI_PASS] =
    {
        .name = _("Tri-Pass"),
        .itemId = ITEM_TRI_PASS,
        .price = 0,
        .description = sTriPassDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAINBOW_PASS] =
    {
        .name = _("Bunt-Pass"),
        .itemId = ITEM_RAINBOW_PASS,
        .price = 0,
        .description = sRainbowPassDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TEA] =
    {
        .name = _("Tee"),
        .itemId = ITEM_TEA,
        .price = 0,
        .description = sTeaDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RUBY] =
    {
        .name = _("Rubin"),
        .itemId = ITEM_RUBY,
        .price = 0,
        .description = sRubyDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SAPPHIRE] =
    {
        .name = _("Saphir"),
        .itemId = ITEM_SAPPHIRE,
        .price = 0,
        .description = sSapphireDesc,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    //mints
    [ITEM_ADAMANT_MINT] = 
    {
        .name = _("Hart-Minze"),
        .itemId = ITEM_ADAMANT_MINT,
        .price = 20000,
        .description = sAdamantMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_ADAMANT,
    },
    [ITEM_BOLD_MINT] = 
    {
        .name = _("Kühn-Minze"),
        .itemId = ITEM_BOLD_MINT,
        .price = 20000,
        .description = sBoldMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_BOLD,
    },
    [ITEM_BRAVE_MINT] = 
    {
        .name = _("Mutig-Minze"),
        .itemId = ITEM_BRAVE_MINT,
        .price = 20000,
        .description = sBraveMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_BRAVE,
    },
    [ITEM_CALM_MINT] = 
    {
        .name = _("Still-Minze"),
        .itemId = ITEM_CALM_MINT,
        .price = 20000,
        .description = sCalmMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_CALM,
    },
    [ITEM_CAREFUL_MINT] = 
    {
        .name = _("Sacht-Minze"),
        .itemId = ITEM_CAREFUL_MINT,
        .price = 20000,
        .description = sCarefulMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_CAREFUL,
    },
    [ITEM_GENTLE_MINT] = 
    {
        .name = _("Zart-Minze"),
        .itemId = ITEM_GENTLE_MINT,
        .price = 20000,
        .description = sGentleMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_GENTLE,
    },
    [ITEM_HASTY_MINT] = 
    {
        .name = _("Hastig-Minze"),
        .itemId = ITEM_HASTY_MINT,
        .price = 20000,
        .description = sHastyMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_HASTY,
    },
    [ITEM_IMPISH_MINT] = 
    {
        .name = _("Pfiffig-Minze"),
        .itemId = ITEM_IMPISH_MINT,
        .price = 20000,
        .description = sImpishMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_IMPISH,
    },
    [ITEM_JOLLY_MINT] = 
    {
        .name = _("Froh-Minze"),
        .itemId = ITEM_JOLLY_MINT,
        .price = 20000,
        .description = sJollyMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_JOLLY,
    },
    [ITEM_LAX_MINT] = 
    {
        .name = _("Lasch-Minze"),
        .itemId = ITEM_LAX_MINT,
        .price = 20000,
        .description = sLaxMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_LAX,
    },
    [ITEM_LONELY_MINT] = 
    {
        .name = _("Solo-Minze"),
        .itemId = ITEM_LONELY_MINT,
        .price = 20000,
        .description = sLonelyMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_LONELY,
    },
    [ITEM_MILD_MINT] = 
    {
        .name = _("Mild-Minze"),
        .itemId = ITEM_MILD_MINT,
        .price = 20000,
        .description = sMildMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_MILD,
    },
    [ITEM_MODEST_MINT] = 
    {
        .name = _("Mäßig-Minze"),
        .itemId = ITEM_MODEST_MINT,
        .price = 20000,
        .description = sModestMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_MODEST,
    },
    [ITEM_NAIVE_MINT] = 
    {
        .name = _("Naiv-Minze"),
        .itemId = ITEM_NAIVE_MINT,
        .price = 20000,
        .description = sNaiveMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_NAIVE,
    },
    [ITEM_NAUGHTY_MINT] = 
    {
        .name = _("Frech-Minze"),
        .itemId = ITEM_NAUGHTY_MINT,
        .price = 20000,
        .description = sNaughtyMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_NAUGHTY,
    },
    [ITEM_QUIET_MINT] = 
    {
        .name = _("Ruhig-Minze"),
        .itemId = ITEM_QUIET_MINT,
        .price = 20000,
        .description = sQuietMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_QUIET,
    },
    [ITEM_RASH_MINT] = 
    {
        .name = _("Hitzig-Minze"),
        .itemId = ITEM_RASH_MINT,
        .price = 20000,
        .description = sRashMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_RASH,
    },
    [ITEM_RELAXED_MINT] = 
    {
        .name = _("Locker-Minze"),
        .itemId = ITEM_RELAXED_MINT,
        .price = 20000,
        .description = sRelaxedMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_RELAXED,
    },
    [ITEM_SASSY_MINT] = 
    {
        .name = _("Forsch-Minze"),
        .itemId = ITEM_SASSY_MINT,
        .price = 20000,
        .description = sSassyMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_SASSY,
    },
    [ITEM_SERIOUS_MINT] = 
    {
        .name = _("Ernst-Minze"),
        .itemId = ITEM_SERIOUS_MINT,
        .price = 20000,
        .description = sSeriousMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_SERIOUS,
    },
    [ITEM_TIMID_MINT] = 
    {
        .name = _("Scheu-Minze"),
        .itemId = ITEM_TIMID_MINT,
        .price = 20000,
        .description = sTimidMintDesc,
        .pocket = POCKET_MEDICINE,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Mints,
        .secondaryId = NATURE_TIMID,
    },
    [ITEM_FLYGONITE] =
    {
        .name = _("Libelldranit"),
        .itemId = ITEM_FLYGONITE,
        .price = 50000,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sFlygoniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_MILOTICITE] =
    {
        .name = _("Miloticnit"),
        .itemId = ITEM_MILOTICITE,
        .price = 55000,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sMiloticiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_STARMIETITE] =
    {
        .name = _("Starmienit"),
        .itemId = ITEM_STARMIETITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sStarmietiteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_BUTTERFRITA] =
    {
        .name = _("Smettbonit"),
        .itemId = ITEM_BUTTERFRITA,
        .price = 30000,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sButterfriteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_DUSKNOIRITA] =
    {
        .name = _("Zwirrfinstnit"),
        .itemId = ITEM_DUSKNOIRITA,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sDusknoiriteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_NOIVERNITA] =
    {
        .name = _("UHaFnirnit"),
        .itemId = ITEM_NOIVERNITA,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sNoiverniteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_TOXTRICITIT] =
    {
        .name = _("Riffexnit"),
        .itemId = ITEM_TOXTRICITIT,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sToxtriciteDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_PIEDRA_SAGRADA] =
    {
        .name = _("Bug"),
        .itemId = ITEM_PIEDRA_SAGRADA,
        .price = 9800,
        .description = sThunderStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },
    [ITEM_PIEDRA_LINK] =
    {
        .name = _("Bug"),
        .itemId = ITEM_PIEDRA_LINK,
        .price = 9800,
        .description = sThunderStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },
    [ITEM_PIEDRA_ROCKET] =
    {
        .name = _("Bug"),
        .itemId = ITEM_PIEDRA_ROCKET,
        .price = 9800,
        .description = sThunderStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },
    [ITEM_BLACK_AUGURITE] =
    {
        .name = _("Schwarzaugit"),
        .itemId = ITEM_BLACK_AUGURITE,
        .price = 12000,
        .holdEffect = HOLD_EFFECT_BLACK_AUGURITE,
        .description = sMinnegroDesc,
        .pocket = POCKET_BATTLE_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_RED_SCALE] =
    {
        .name = _("Rote Schuppe"),
        .itemId = ITEM_RED_SCALE,
        .price = 12000,
        .holdEffect = HOLD_EFFECT_RED_SCALE,
        .description = sEscrojaDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_CONDENSADOR_GAS] =
    {
        .name = _("Gas-Kondenstr"),
        .itemId = ITEM_CONDENSADOR_GAS,
        .price = 12000,
        .holdEffect = HOLD_EFFECT_CONDENSADOR_GAS,
        .description = sCondgasDesc,
        .pocket = POCKET_TREASURES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
    [ITEM_PORYGONITA] =
    {
        .name = _("Porygon-Znit"),
        .itemId = ITEM_PORYGONITA,
        .price = 0,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .description = sPorygonitDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },
};
