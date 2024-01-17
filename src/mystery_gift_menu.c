#include "global.h"
#include "main.h"
#include "text.h"
#include "task.h"
#include "malloc.h"
#include "gpu_regs.h"
#include "scanline_effect.h"
#include "text_window.h"
#include "bg.h"
#include "window.h"
#include "strings.h"
#include "text_window.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "constants/songs.h"
#include "sound.h"
#include "script.h"
#include "mystery_gift_menu.h"
#include "union_room.h"
#include "title_screen.h"
#include "ereader_screen.h"
#include "international_string_util.h"
#include "list_menu.h"
#include "string_util.h"
#include "mystery_gift.h"
#include "mystery_gift_view.h"
#include "save.h"
#include "link.h"
#include "mystery_gift_client.h"
#include "mystery_gift_server.h"
#include "event_data.h"
#include "link_rfu.h"
#include "wonder_news.h"
#include "constants/cable_club.h"
#include "debug.h"
#include "pokemon.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/vars.h"
#include "script_pokemon_util.h"
#include "event_data.h"
#include "field_screen_effect.h"
#include "start_menu.h"
#include "pokemon_storage_system.h"
#include "random.h"

#define DEBUG_MAIN_MENU_HEIGHT 7
#define DEBUG_MAIN_MENU_WIDTH 11

extern const u8 EventScript_SetHealLocation[];
extern const u8 EventScript_SetKanto[];
extern const u8 EventScript_SetSevii[];
extern const u8 EventScript_SetJohto[];

static void Debug_DestroyMainMenu(u8);
static void DebugAction_Cancel(u8);
static void DebugTask_HandleMainMenuInput(u8);
static void DarPokemonBasicosKanto(u8);
static void DarPokemonClassicKanto(u8);
static void DarPokemonRocketGrunt(u8);
static void DarPokemonRocketScientist(u8);
static void DarPokemonRocketAdmin(u8);
static void DarPokemonRainTeam(u8);
static void DarPokemonSunTeam(u8);
static void DarPokemonRareTeam(u8);
static void DarPokemonPopularTeam(u8);
static void DarPokemonWeakTeam(u8);
static void DarPokemonRandomTeam(u8);


enum {
	DEBUG_MENU_POKE1,
	DEBUG_MENU_POKE2,
	DEBUG_MENU_POKE3,
	DEBUG_MENU_POKE4,
	DEBUG_MENU_POKE5,
	DEBUG_MENU_POKE6,
	DEBUG_MENU_POKE7,
	DEBUG_MENU_POKE8,
	DEBUG_MENU_POKE9,
	DEBUG_MENU_POKE10,
	DEBUG_MENU_POKE11,
    DEBUG_MENU_ITEM_CANCEL,
};

static const u8 gDebugText_Golduck[] = _("Pack “Classic Kanto”");
static const u8 gDebugText_Furret[] = _("Pack “Rocket Grunt”");
static const u8 gDebugText_Electabuzz[] = _("Pack “Rocket Scientist”");
static const u8 gDebugText_Nidoking[] = _("Pack “Rocket Admin”");
static const u8 gDebugText_Nidoqueen[] = _("Pack “Rain Team”");
static const u8 gDebugText_Alakazam[] = _("Pack “Sun Team”");
static const u8 gDebugText_Ninetales[] = _("Pack “Rare Pokémon”");
static const u8 gDebugText_Pidgeot[] = _("Pack “Popular Pokémon”");
static const u8 gDebugText_Weak[] = _("Pack “Weak Pokémon”");
static const u8 gDebugText_Random[] = _("Pack “Random Pokémon”");
static const u8 gDebugText_MyTeam[] = _("Pack “MY team”");
static const u8 gDebugText_Cancel[] = _("¿Cuál escoger?");
/// nombres
	 static const u8 sDebugText_BULBASAUR[] = _("BULBASAUR");
	 static const u8 sDebugText_IVYSAUR[] = _("IVYSAUR");
	 static const u8 sDebugText_VENUSAUR[] = _("VENUSAUR");
	 static const u8 sDebugText_CHARMANDER[] = _("CHARMANDER");
	 static const u8 sDebugText_CHARMELEON[] = _("CHARMELEON");
	 static const u8 sDebugText_CHARIZARD[] = _("CHARIZARD");
	 static const u8 sDebugText_SQUIRTLE[] = _("SQUIRTLE");
	 static const u8 sDebugText_WARTORTLE[] = _("WARTORTLE");
	 static const u8 sDebugText_BLASTOISE[] = _("BLASTOISE");
	 static const u8 sDebugText_CATERPIE[] = _("CATERPIE");
	 static const u8 sDebugText_METAPOD[] = _("METAPOD");
	 static const u8 sDebugText_BUTTERFREE[] = _("BUTTERFREE");
	 static const u8 sDebugText_WEEDLE[] = _("WEEDLE");
	 static const u8 sDebugText_KAKUNA[] = _("KAKUNA");
	 static const u8 sDebugText_BEEDRILL[] = _("BEEDRILL");
	 static const u8 sDebugText_PIDGEY[] = _("PIDGEY");
	 static const u8 sDebugText_PIDGEOTTO[] = _("PIDGEOTTO");
	 static const u8 sDebugText_PIDGEOT[] = _("PIDGEOT");
	 static const u8 sDebugText_RATTATA[] = _("RATTATA");
	 static const u8 sDebugText_RATICATE[] = _("RATICATE");
	 static const u8 sDebugText_SPEAROW[] = _("SPEAROW");
	 static const u8 sDebugText_FEAROW[] = _("FEAROW");
	 static const u8 sDebugText_EKANS[] = _("EKANS");
	 static const u8 sDebugText_ARBOK[] = _("ARBOK");
	 static const u8 sDebugText_PIKACHU[] = _("PIKACHU");
	 static const u8 sDebugText_RAICHU[] = _("RAICHU");
	 static const u8 sDebugText_SANDSHREW[] = _("SANDSHREW");
	 static const u8 sDebugText_SANDSLASH[] = _("SANDSLASH");
	 static const u8 sDebugText_NIDORAN_F[] = _("NIDORAN");
	 static const u8 sDebugText_NIDORINA[] = _("NIDORINA");
	 static const u8 sDebugText_NIDOQUEEN[] = _("NIDOQUEEN");
	 static const u8 sDebugText_NIDORAN_M[] = _("NIDORAN");
	 static const u8 sDebugText_NIDORINO[] = _("NIDORINO");
	 static const u8 sDebugText_NIDOKING[] = _("NIDOKING");
	 static const u8 sDebugText_CLEFAIRY[] = _("CLEFAIRY");
	 static const u8 sDebugText_CLEFABLE[] = _("CLEFABLE");
	 static const u8 sDebugText_VULPIX[] = _("VULPIX");
	 static const u8 sDebugText_NINETALES[] = _("NINETALES");
	 static const u8 sDebugText_JIGGLYPUFF[] = _("JIGGLYPUFF");
	 static const u8 sDebugText_WIGGLYTUFF[] = _("WIGGLYTUFF");
	 static const u8 sDebugText_ZUBAT[] = _("ZUBAT");
	 static const u8 sDebugText_GOLBAT[] = _("GOLBAT");
	 static const u8 sDebugText_ODDISH[] = _("ODDISH");
	 static const u8 sDebugText_GLOOM[] = _("GLOOM");
	 static const u8 sDebugText_VILEPLUME[] = _("VILEPLUME");
	 static const u8 sDebugText_PARAS[] = _("PARAS");
	 static const u8 sDebugText_PARASECT[] = _("PARASECT");
	 static const u8 sDebugText_VENONAT[] = _("VENONAT");
	 static const u8 sDebugText_VENOMOTH[] = _("VENOMOTH");
	 static const u8 sDebugText_DIGLETT[] = _("DIGLETT");
	 static const u8 sDebugText_DUGTRIO[] = _("DUGTRIO");
	 static const u8 sDebugText_MEOWTH[] = _("MEOWTH");
	 static const u8 sDebugText_PERSIAN[] = _("PERSIAN");
	 static const u8 sDebugText_PSYDUCK[] = _("PSYDUCK");
	 static const u8 sDebugText_GOLDUCK[] = _("GOLDUCK");
	 static const u8 sDebugText_MANKEY[] = _("MANKEY");
	 static const u8 sDebugText_PRIMEAPE[] = _("PRIMEAPE");
	 static const u8 sDebugText_GROWLITHE[] = _("GROWLITHE");
	 static const u8 sDebugText_ARCANINE[] = _("ARCANINE");
	 static const u8 sDebugText_POLIWAG[] = _("POLIWAG");
	 static const u8 sDebugText_POLIWHIRL[] = _("POLIWHIRL");
	 static const u8 sDebugText_POLIWRATH[] = _("POLIWRATH");
	 static const u8 sDebugText_ABRA[] = _("ABRA");
	 static const u8 sDebugText_KADABRA[] = _("KADABRA");
	 static const u8 sDebugText_ALAKAZAM[] = _("ALAKAZAM");
	 static const u8 sDebugText_MACHOP[] = _("MACHOP");
	 static const u8 sDebugText_MACHOKE[] = _("MACHOKE");
	 static const u8 sDebugText_MACHAMP[] = _("MACHAMP");
	 static const u8 sDebugText_BELLSPROUT[] = _("BELLSPROUT");
	 static const u8 sDebugText_WEEPINBELL[] = _("WEEPINBELL");
	 static const u8 sDebugText_VICTREEBEL[] = _("VICTREEBEL");
	 static const u8 sDebugText_TENTACOOL[] = _("TENTACOOL");
	 static const u8 sDebugText_TENTACRUEL[] = _("TENTACRUEL");
	 static const u8 sDebugText_GEODUDE[] = _("GEODUDE");
	 static const u8 sDebugText_GRAVELER[] = _("GRAVELER");
	 static const u8 sDebugText_GOLEM[] = _("GOLEM");
	 static const u8 sDebugText_PONYTA[] = _("PONYTA");
	 static const u8 sDebugText_RAPIDASH[] = _("RAPIDASH");
	 static const u8 sDebugText_SLOWPOKE[] = _("SLOWPOKE");
	 static const u8 sDebugText_SLOWBRO[] = _("SLOWBRO");
	 static const u8 sDebugText_MAGNEMITE[] = _("MAGNEMITE");
	 static const u8 sDebugText_MAGNETON[] = _("MAGNETON");
	 static const u8 sDebugText_FARFETCHD[] = _("FARFETCHD");
	 static const u8 sDebugText_DODUO[] = _("DODUO");
	 static const u8 sDebugText_DODRIO[] = _("DODRIO");
	 static const u8 sDebugText_SEEL[] = _("SEEL");
	 static const u8 sDebugText_DEWGONG[] = _("DEWGONG");
	 static const u8 sDebugText_GRIMER[] = _("GRIMER");
	 static const u8 sDebugText_MUK[] = _("MUK");
	 static const u8 sDebugText_SHELLDER[] = _("SHELLDER");
	 static const u8 sDebugText_CLOYSTER[] = _("CLOYSTER");
	 static const u8 sDebugText_GASTLY[] = _("GASTLY");
	 static const u8 sDebugText_HAUNTER[] = _("HAUNTER");
	 static const u8 sDebugText_GENGAR[] = _("GENGAR");
	 static const u8 sDebugText_ONIX[] = _("ONIX");
	 static const u8 sDebugText_DROWZEE[] = _("DROWZEE");
	 static const u8 sDebugText_HYPNO[] = _("HYPNO");
	 static const u8 sDebugText_KRABBY[] = _("KRABBY");
	 static const u8 sDebugText_KINGLER[] = _("KINGLER");
	 static const u8 sDebugText_VOLTORB[] = _("VOLTORB");
	 static const u8 sDebugText_ELECTRODE[] = _("ELECTRODE");
	 static const u8 sDebugText_EXEGGCUTE[] = _("EXEGGCUTE");
	 static const u8 sDebugText_EXEGGUTOR[] = _("EXEGGUTOR");
	 static const u8 sDebugText_CUBONE[] = _("CUBONE");
	 static const u8 sDebugText_MAROWAK[] = _("MAROWAK");
	 static const u8 sDebugText_HITMONLEE[] = _("HITMONLEE");
	 static const u8 sDebugText_HITMONCHAN[] = _("HITMONCHAN");
	 static const u8 sDebugText_LICKITUNG[] = _("LICKITUNG");
	 static const u8 sDebugText_KOFFING[] = _("KOFFING");
	 static const u8 sDebugText_WEEZING[] = _("WEEZING");
	 static const u8 sDebugText_RHYHORN[] = _("RHYHORN");
	 static const u8 sDebugText_RHYDON[] = _("RHYDON");
	 static const u8 sDebugText_CHANSEY[] = _("CHANSEY");
	 static const u8 sDebugText_TANGELA[] = _("TANGELA");
	 static const u8 sDebugText_KANGASKHAN[] = _("KANGASKHAN");
	 static const u8 sDebugText_HORSEA[] = _("HORSEA");
	 static const u8 sDebugText_SEADRA[] = _("SEADRA");
	 static const u8 sDebugText_GOLDEEN[] = _("GOLDEEN");
	 static const u8 sDebugText_SEAKING[] = _("SEAKING");
	 static const u8 sDebugText_STARYU[] = _("STARYU");
	 static const u8 sDebugText_STARMIE[] = _("STARMIE");
	 static const u8 sDebugText_MR_MIME[] = _("MR.MIME");
	 static const u8 sDebugText_SCYTHER[] = _("SCYTHER");
	 static const u8 sDebugText_JYNX[] = _("JYNX");
	 static const u8 sDebugText_ELECTABUZZ[] = _("ELECTABUZZ");
	 static const u8 sDebugText_MAGMAR[] = _("MAGMAR");
	 static const u8 sDebugText_PINSIR[] = _("PINSIR");
	 static const u8 sDebugText_TAUROS[] = _("TAUROS");
	 static const u8 sDebugText_MAGIKARP[] = _("MAGIKARP");
	 static const u8 sDebugText_GYARADOS[] = _("GYARADOS");
	 static const u8 sDebugText_LAPRAS[] = _("LAPRAS");
	 static const u8 sDebugText_DITTO[] = _("DITTO");
	 static const u8 sDebugText_EEVEE[] = _("EEVEE");
	 static const u8 sDebugText_VAPOREON[] = _("VAPOREON");
	 static const u8 sDebugText_JOLTEON[] = _("JOLTEON");
	 static const u8 sDebugText_FLAREON[] = _("FLAREON");
	 static const u8 sDebugText_PORYGON[] = _("PORYGON");
	 static const u8 sDebugText_OMANYTE[] = _("OMANYTE");
	 static const u8 sDebugText_OMASTAR[] = _("OMASTAR");
	 static const u8 sDebugText_KABUTO[] = _("KABUTO");
	 static const u8 sDebugText_KABUTOPS[] = _("KABUTOPS");
	 static const u8 sDebugText_AERODACTYL[] = _("AERODACTYL");
	 static const u8 sDebugText_SNORLAX[] = _("SNORLAX");
	 static const u8 sDebugText_DRATINI[] = _("DRATINI");
	 static const u8 sDebugText_DRAGONAIR[] = _("DRAGONAIR");
	 static const u8 sDebugText_DRAGONITE[] = _("DRAGONITE");
	 static const u8 sDebugText_CHIKORITA[] = _("CHIKORITA");
	 static const u8 sDebugText_BAYLEEF[] = _("BAYLEEF");
	 static const u8 sDebugText_MEGANIUM[] = _("MEGANIUM");
	 static const u8 sDebugText_CYNDAQUIL[] = _("CYNDAQUIL");
	 static const u8 sDebugText_QUILAVA[] = _("QUILAVA");
	 static const u8 sDebugText_TYPHLOSION[] = _("TYPHLOSION");
	 static const u8 sDebugText_TOTODILE[] = _("TOTODILE");
	 static const u8 sDebugText_CROCONAW[] = _("CROCONAW");
	 static const u8 sDebugText_FERALIGATR[] = _("FERALIGATR");
	 static const u8 sDebugText_SENTRET[] = _("SENTRET");
	 static const u8 sDebugText_FURRET[] = _("FURRET");
	 static const u8 sDebugText_HOOTHOOT[] = _("HOOTHOOT");
	 static const u8 sDebugText_NOCTOWL[] = _("NOCTOWL");
	 static const u8 sDebugText_LEDYBA[] = _("LEDYBA");
	 static const u8 sDebugText_LEDIAN[] = _("LEDIAN");
	 static const u8 sDebugText_SPINARAK[] = _("SPINARAK");
	 static const u8 sDebugText_ARIADOS[] = _("ARIADOS");
	 static const u8 sDebugText_CROBAT[] = _("CROBAT");
	 static const u8 sDebugText_CHINCHOU[] = _("CHINCHOU");
	 static const u8 sDebugText_LANTURN[] = _("LANTURN");
	 static const u8 sDebugText_PICHU[] = _("PICHU");
	 static const u8 sDebugText_CLEFFA[] = _("CLEFFA");
	 static const u8 sDebugText_IGGLYBUFF[] = _("IGGLYBUFF");
	 static const u8 sDebugText_TOGEPI[] = _("TOGEPI");
	 static const u8 sDebugText_TOGETIC[] = _("TOGETIC");
	 static const u8 sDebugText_NATU[] = _("NATU");
	 static const u8 sDebugText_XATU[] = _("XATU");
	 static const u8 sDebugText_MAREEP[] = _("MAREEP");
	 static const u8 sDebugText_FLAAFFY[] = _("FLAAFFY");
	 static const u8 sDebugText_AMPHAROS[] = _("AMPHAROS");
	 static const u8 sDebugText_BELLOSSOM[] = _("BELLOSSOM");
	 static const u8 sDebugText_MARILL[] = _("MARILL");
	 static const u8 sDebugText_AZUMARILL[] = _("AZUMARILL");
	 static const u8 sDebugText_SUDOWOODO[] = _("SUDOWOODO");
	 static const u8 sDebugText_POLITOED[] = _("POLITOED");
	 static const u8 sDebugText_HOPPIP[] = _("HOPPIP");
	 static const u8 sDebugText_SKIPLOOM[] = _("SKIPLOOM");
	 static const u8 sDebugText_JUMPLUFF[] = _("JUMPLUFF");
	 static const u8 sDebugText_AIPOM[] = _("AIPOM");
	 static const u8 sDebugText_SUNKERN[] = _("SUNKERN");
	 static const u8 sDebugText_SUNFLORA[] = _("SUNFLORA");
	 static const u8 sDebugText_YANMA[] = _("YANMA");
	 static const u8 sDebugText_WOOPER[] = _("WOOPER");
	 static const u8 sDebugText_QUAGSIRE[] = _("QUAGSIRE");
	 static const u8 sDebugText_ESPEON[] = _("ESPEON");
	 static const u8 sDebugText_UMBREON[] = _("UMBREON");
	 static const u8 sDebugText_MURKROW[] = _("MURKROW");
	 static const u8 sDebugText_SLOWKING[] = _("SLOWKING");
	 static const u8 sDebugText_MISDREAVUS[] = _("MISDREAVUS");
	 static const u8 sDebugText_UNOWN[] = _("UNOWN");
	 static const u8 sDebugText_WOBBUFFET[] = _("WOBBUFFET");
	 static const u8 sDebugText_GIRAFARIG[] = _("GIRAFARIG");
	 static const u8 sDebugText_PINECO[] = _("PINECO");
	 static const u8 sDebugText_FORRETRESS[] = _("FORRETRESS");
	 static const u8 sDebugText_DUNSPARCE[] = _("DUNSPARCE");
	 static const u8 sDebugText_GLIGAR[] = _("GLIGAR");
	 static const u8 sDebugText_STEELIX[] = _("STEELIX");
	 static const u8 sDebugText_SNUBBULL[] = _("SNUBBULL");
	 static const u8 sDebugText_GRANBULL[] = _("GRANBULL");
	 static const u8 sDebugText_QWILFISH[] = _("QWILFISH");
	 static const u8 sDebugText_SCIZOR[] = _("SCIZOR");
	 static const u8 sDebugText_SHUCKLE[] = _("SHUCKLE");
	 static const u8 sDebugText_HERACROSS[] = _("HERACROSS");
	 static const u8 sDebugText_SNEASEL[] = _("SNEASEL");
	 static const u8 sDebugText_TEDDIURSA[] = _("TEDDIURSA");
	 static const u8 sDebugText_URSARING[] = _("URSARING");
	 static const u8 sDebugText_SLUGMA[] = _("SLUGMA");
	 static const u8 sDebugText_MAGCARGO[] = _("MAGCARGO");
	 static const u8 sDebugText_SWINUB[] = _("SWINUB");
	 static const u8 sDebugText_PILOSWINE[] = _("PILOSWINE");
	 static const u8 sDebugText_CORSOLA[] = _("CORSOLA");
	 static const u8 sDebugText_REMORAID[] = _("REMORAID");
	 static const u8 sDebugText_OCTILLERY[] = _("OCTILLERY");
	 static const u8 sDebugText_DELIBIRD[] = _("DELIBIRD");
	 static const u8 sDebugText_MANTINE[] = _("MANTINE");
	 static const u8 sDebugText_SKARMORY[] = _("SKARMORY");
	 static const u8 sDebugText_HOUNDOUR[] = _("HOUNDOUR");
	 static const u8 sDebugText_HOUNDOOM[] = _("HOUNDOOM");
	 static const u8 sDebugText_KINGDRA[] = _("KINGDRA");
	 static const u8 sDebugText_PHANPY[] = _("PHANPY");
	 static const u8 sDebugText_DONPHAN[] = _("DONPHAN");
	 static const u8 sDebugText_PORYGON2[] = _("PORYGON2");
	 static const u8 sDebugText_STANTLER[] = _("STANTLER");
	 static const u8 sDebugText_SMEARGLE[] = _("SMEARGLE");
	 static const u8 sDebugText_TYROGUE[] = _("TYROGUE");
	 static const u8 sDebugText_HITMONTOP[] = _("HITMONTOP");
	 static const u8 sDebugText_SMOOCHUM[] = _("SMOOCHUM");
	 static const u8 sDebugText_ELEKID[] = _("ELEKID");
	 static const u8 sDebugText_MAGBY[] = _("MAGBY");
	 static const u8 sDebugText_MILTANK[] = _("MILTANK");
	 static const u8 sDebugText_BLISSEY[] = _("BLISSEY");
	 static const u8 sDebugText_RAIKOU[] = _("RAIKOU");
	 static const u8 sDebugText_ENTEI[] = _("ENTEI");
	 static const u8 sDebugText_SUICUNE[] = _("SUICUNE");
	 static const u8 sDebugText_LARVITAR[] = _("LARVITAR");
	 static const u8 sDebugText_PUPITAR[] = _("PUPITAR");
	 static const u8 sDebugText_TYRANITAR[] = _("TYRANITAR");
	 static const u8 sDebugText_TREECKO[] = _("TREECKO");
	 static const u8 sDebugText_GROVYLE[] = _("GROVYLE");
	 static const u8 sDebugText_SCEPTILE[] = _("SCEPTILE");
	 static const u8 sDebugText_TORCHIC[] = _("TORCHIC");
	 static const u8 sDebugText_COMBUSKEN[] = _("COMBUSKEN");
	 static const u8 sDebugText_BLAZIKEN[] = _("BLAZIKEN");
	 static const u8 sDebugText_MUDKIP[] = _("MUDKIP");
	 static const u8 sDebugText_MARSHTOMP[] = _("MARSHTOMP");
	 static const u8 sDebugText_SWAMPERT[] = _("SWAMPERT");
	 static const u8 sDebugText_POOCHYENA[] = _("POOCHYENA");
	 static const u8 sDebugText_MIGHTYENA[] = _("MIGHTYENA");
	 static const u8 sDebugText_ZIGZAGOON[] = _("ZIGZAGOON");
	 static const u8 sDebugText_LINOONE[] = _("LINOONE");
	 static const u8 sDebugText_WURMPLE[] = _("WURMPLE");
	 static const u8 sDebugText_SILCOON[] = _("SILCOON");
	 static const u8 sDebugText_BEAUTIFLY[] = _("BEAUTIFLY");
	 static const u8 sDebugText_CASCOON[] = _("CASCOON");
	 static const u8 sDebugText_DUSTOX[] = _("DUSTOX");
	 static const u8 sDebugText_LOTAD[] = _("LOTAD");
	 static const u8 sDebugText_LOMBRE[] = _("LOMBRE");
	 static const u8 sDebugText_LUDICOLO[] = _("LUDICOLO");
	 static const u8 sDebugText_SEEDOT[] = _("SEEDOT");
	 static const u8 sDebugText_NUZLEAF[] = _("NUZLEAF");
	 static const u8 sDebugText_SHIFTRY[] = _("SHIFTRY");
	 static const u8 sDebugText_TAILLOW[] = _("TAILLOW");
	 static const u8 sDebugText_SWELLOW[] = _("SWELLOW");
	 static const u8 sDebugText_WINGULL[] = _("WINGULL");
	 static const u8 sDebugText_PELIPPER[] = _("PELIPPER");
	 static const u8 sDebugText_RALTS[] = _("RALTS");
	 static const u8 sDebugText_KIRLIA[] = _("KIRLIA");
	 static const u8 sDebugText_GARDEVOIR[] = _("GARDEVOIR");
	 static const u8 sDebugText_SURSKIT[] = _("SURSKIT");
	 static const u8 sDebugText_MASQUERAIN[] = _("MASQUERAIN");
	 static const u8 sDebugText_SHROOMISH[] = _("SHROOMISH");
	 static const u8 sDebugText_BRELOOM[] = _("BRELOOM");
	 static const u8 sDebugText_SLAKOTH[] = _("SLAKOTH");
	 static const u8 sDebugText_VIGOROTH[] = _("VIGOROTH");
	 static const u8 sDebugText_SLAKING[] = _("SLAKING");
	 static const u8 sDebugText_NINCADA[] = _("NINCADA");
	 static const u8 sDebugText_NINJASK[] = _("NINJASK");
	 static const u8 sDebugText_SHEDINJA[] = _("SHEDINJA");
	 static const u8 sDebugText_WHISMUR[] = _("WHISMUR");
	 static const u8 sDebugText_LOUDRED[] = _("LOUDRED");
	 static const u8 sDebugText_EXPLOUD[] = _("EXPLOUD");
	 static const u8 sDebugText_MAKUHITA[] = _("MAKUHITA");
	 static const u8 sDebugText_HARIYAMA[] = _("HARIYAMA");
	 static const u8 sDebugText_AZURILL[] = _("AZURILL");
	 static const u8 sDebugText_NOSEPASS[] = _("NOSEPASS");
	 static const u8 sDebugText_SKITTY[] = _("SKITTY");
	 static const u8 sDebugText_DELCATTY[] = _("DELCATTY");
	 static const u8 sDebugText_SABLEYE[] = _("SABLEYE");
	 static const u8 sDebugText_MAWILE[] = _("MAWILE");
	 static const u8 sDebugText_ARON[] = _("ARON");
	 static const u8 sDebugText_LAIRON[] = _("LAIRON");
	 static const u8 sDebugText_AGGRON[] = _("AGGRON");
	 static const u8 sDebugText_MEDITITE[] = _("MEDITITE");
	 static const u8 sDebugText_MEDICHAM[] = _("MEDICHAM");
	 static const u8 sDebugText_ELECTRIKE[] = _("ELECTRIKE");
	 static const u8 sDebugText_MANECTRIC[] = _("MANECTRIC");
	 static const u8 sDebugText_PLUSLE[] = _("PLUSLE");
	 static const u8 sDebugText_MINUN[] = _("MINUN");
	 static const u8 sDebugText_VOLBEAT[] = _("VOLBEAT");
	 static const u8 sDebugText_ILLUMISE[] = _("ILLUMISE");
	 static const u8 sDebugText_ROSELIA[] = _("ROSELIA");
	 static const u8 sDebugText_GULPIN[] = _("GULPIN");
	 static const u8 sDebugText_SWALOT[] = _("SWALOT");
	 static const u8 sDebugText_CARVANHA[] = _("CARVANHA");
	 static const u8 sDebugText_SHARPEDO[] = _("SHARPEDO");
	 static const u8 sDebugText_WAILMER[] = _("WAILMER");
	 static const u8 sDebugText_WAILORD[] = _("WAILORD");
	 static const u8 sDebugText_NUMEL[] = _("NUMEL");
	 static const u8 sDebugText_CAMERUPT[] = _("CAMERUPT");
	 static const u8 sDebugText_TORKOAL[] = _("TORKOAL");
	 static const u8 sDebugText_SPOINK[] = _("SPOINK");
	 static const u8 sDebugText_GRUMPIG[] = _("GRUMPIG");
	 static const u8 sDebugText_SPINDA[] = _("SPINDA");
	 static const u8 sDebugText_TRAPINCH[] = _("TRAPINCH");
	 static const u8 sDebugText_VIBRAVA[] = _("VIBRAVA");
	 static const u8 sDebugText_FLYGON[] = _("FLYGON");
	 static const u8 sDebugText_CACNEA[] = _("CACNEA");
	 static const u8 sDebugText_CACTURNE[] = _("CACTURNE");
	 static const u8 sDebugText_SWABLU[] = _("SWABLU");
	 static const u8 sDebugText_ALTARIA[] = _("ALTARIA");
	 static const u8 sDebugText_ZANGOOSE[] = _("ZANGOOSE");
	 static const u8 sDebugText_SEVIPER[] = _("SEVIPER");
	 static const u8 sDebugText_LUNATONE[] = _("LUNATONE");
	 static const u8 sDebugText_SOLROCK[] = _("SOLROCK");
	 static const u8 sDebugText_BARBOACH[] = _("BARBOACH");
	 static const u8 sDebugText_WHISCASH[] = _("WHISCASH");
	 static const u8 sDebugText_CORPHISH[] = _("CORPHISH");
	 static const u8 sDebugText_CRAWDAUNT[] = _("CRAWDAUNT");
	 static const u8 sDebugText_BALTOY[] = _("BALTOY");
	 static const u8 sDebugText_CLAYDOL[] = _("CLAYDOL");
	 static const u8 sDebugText_LILEEP[] = _("LILEEP");
	 static const u8 sDebugText_CRADILY[] = _("CRADILY");
	 static const u8 sDebugText_ANORITH[] = _("ANORITH");
	 static const u8 sDebugText_ARMALDO[] = _("ARMALDO");
	 static const u8 sDebugText_FEEBAS[] = _("FEEBAS");
	 static const u8 sDebugText_MILOTIC[] = _("MILOTIC");
	 static const u8 sDebugText_CASTFORM[] = _("CASTFORM");
	 static const u8 sDebugText_KECLEON[] = _("KECLEON");
	 static const u8 sDebugText_SHUPPET[] = _("SHUPPET");
	 static const u8 sDebugText_BANETTE[] = _("BANETTE");
	 static const u8 sDebugText_DUSKULL[] = _("DUSKULL");
	 static const u8 sDebugText_DUSCLOPS[] = _("DUSCLOPS");
	 static const u8 sDebugText_TROPIUS[] = _("TROPIUS");
	 static const u8 sDebugText_CHIMECHO[] = _("CHIMECHO");
	 static const u8 sDebugText_ABSOL[] = _("ABSOL");
	 static const u8 sDebugText_WYNAUT[] = _("WYNAUT");
	 static const u8 sDebugText_SNORUNT[] = _("SNORUNT");
	 static const u8 sDebugText_GLALIE[] = _("GLALIE");
	 static const u8 sDebugText_SPHEAL[] = _("SPHEAL");
	 static const u8 sDebugText_SEALEO[] = _("SEALEO");
	 static const u8 sDebugText_WALREIN[] = _("WALREIN");
	 static const u8 sDebugText_CLAMPERL[] = _("CLAMPERL");
	 static const u8 sDebugText_HUNTAIL[] = _("HUNTAIL");
	 static const u8 sDebugText_GOREBYSS[] = _("GOREBYSS");
	 static const u8 sDebugText_RELICANTH[] = _("RELICANTH");
	 static const u8 sDebugText_LUVDISC[] = _("LUVDISC");
	 static const u8 sDebugText_BAGON[] = _("BAGON");
	 static const u8 sDebugText_SHELGON[] = _("SHELGON");
	 static const u8 sDebugText_SALAMENCE[] = _("SALAMENCE");
	 static const u8 sDebugText_BELDUM[] = _("BELDUM");
	 static const u8 sDebugText_METANG[] = _("METANG");
	 static const u8 sDebugText_METAGROSS[] = _("METAGROSS");
	 static const u8 sDebugText_TURTWIG[] = _("TURTWIG");
	 static const u8 sDebugText_GROTLE[] = _("GROTLE");
	 static const u8 sDebugText_TORTERRA[] = _("TORTERRA");
	 static const u8 sDebugText_CHIMCHAR[] = _("CHIMCHAR");
	 static const u8 sDebugText_MONFERNO[] = _("MONFERNO");
	 static const u8 sDebugText_INFERNAPE[] = _("INFERNAPE");
	 static const u8 sDebugText_PIPLUP[] = _("PIPLUP");
	 static const u8 sDebugText_PRINPLUP[] = _("PRINPLUP");
	 static const u8 sDebugText_EMPOLEON[] = _("EMPOLEON");
	 static const u8 sDebugText_STARLY[] = _("STARLY");
	 static const u8 sDebugText_STARAVIA[] = _("STARAVIA");
	 static const u8 sDebugText_STARAPTOR[] = _("STARAPTOR");
	 static const u8 sDebugText_BIDOOF[] = _("BIDOOF");
	 static const u8 sDebugText_BIBAREL[] = _("BIBAREL");
	 static const u8 sDebugText_KRICKETOT[] = _("KRICKETOT");
	 static const u8 sDebugText_KRICKETUNE[] = _("KRICKETUNE");
	 static const u8 sDebugText_SHINX[] = _("SHINX");
	 static const u8 sDebugText_LUXIO[] = _("LUXIO");
	 static const u8 sDebugText_LUXRAY[] = _("LUXRAY");
	 static const u8 sDebugText_BUDEW[] = _("BUDEW");
	 static const u8 sDebugText_ROSERADE[] = _("ROSERADE");
	 static const u8 sDebugText_CRANIDOS[] = _("CRANIDOS");
	 static const u8 sDebugText_RAMPARDOS[] = _("RAMPARDOS");
	 static const u8 sDebugText_SHIELDON[] = _("SHIELDON");
	 static const u8 sDebugText_BASTIODON[] = _("BASTIODON");
	 static const u8 sDebugText_BURMY[] = _("BURMY");
	 static const u8 sDebugText_WORMADAM[] = _("WORMADAM");
	 static const u8 sDebugText_MOTHIM[] = _("MOTHIM");
	 static const u8 sDebugText_COMBEE[] = _("COMBEE");
	 static const u8 sDebugText_VESPIQUEN[] = _("VESPIQUEN");
	 static const u8 sDebugText_PACHIRISU[] = _("PACHIRISU");
	 static const u8 sDebugText_BUIZEL[] = _("BUIZEL");
	 static const u8 sDebugText_FLOATZEL[] = _("FLOATZEL");
	 static const u8 sDebugText_CHERUBI[] = _("CHERUBI");
	 static const u8 sDebugText_CHERRIM[] = _("CHERRIM");
	 static const u8 sDebugText_SHELLOS[] = _("SHELLOS");
	 static const u8 sDebugText_GASTRODON[] = _("GASTRODON");
	 static const u8 sDebugText_AMBIPOM[] = _("AMBIPOM");
	 static const u8 sDebugText_DRIFLOON[] = _("DRIFLOON");
	 static const u8 sDebugText_DRIFBLIM[] = _("DRIFBLIM");
	 static const u8 sDebugText_BUNEARY[] = _("BUNEARY");
	 static const u8 sDebugText_LOPUNNY[] = _("LOPUNNY");
	 static const u8 sDebugText_MISMAGIUS[] = _("MISMAGIUS");
	 static const u8 sDebugText_HONCHKROW[] = _("HONCHKROW");
	 static const u8 sDebugText_GLAMEOW[] = _("GLAMEOW");
	 static const u8 sDebugText_PURUGLY[] = _("PURUGLY");
	 static const u8 sDebugText_CHINGLING[] = _("CHINGLING");
	 static const u8 sDebugText_STUNKY[] = _("STUNKY");
	 static const u8 sDebugText_SKUNTANK[] = _("SKUNTANK");
	 static const u8 sDebugText_BRONZOR[] = _("BRONZOR");
	 static const u8 sDebugText_BRONZONG[] = _("BRONZONG");
	 static const u8 sDebugText_BONSLY[] = _("BONSLY");
	 static const u8 sDebugText_MIME_JR[] = _("MIME.JR");
	 static const u8 sDebugText_HAPPINY[] = _("HAPPINY");
	 static const u8 sDebugText_CHATOT[] = _("CHATOT");
	 static const u8 sDebugText_SPIRITOMB[] = _("SPIRITOMB");
	 static const u8 sDebugText_GIBLE[] = _("GIBLE");
	 static const u8 sDebugText_GABITE[] = _("GABITE");
	 static const u8 sDebugText_GARCHOMP[] = _("GARCHOMP");
	 static const u8 sDebugText_MUNCHLAX[] = _("MUNCHLAX");
	 static const u8 sDebugText_RIOLU[] = _("RIOLU");
	 static const u8 sDebugText_LUCARIO[] = _("LUCARIO");
	 static const u8 sDebugText_HIPPOPOTAS[] = _("HIPPOPOTAS");
	 static const u8 sDebugText_HIPPOWDON[] = _("HIPPOWDON");
	 static const u8 sDebugText_SKORUPI[] = _("SKORUPI");
	 static const u8 sDebugText_DRAPION[] = _("DRAPION");
	 static const u8 sDebugText_CROAGUNK[] = _("CROAGUNK");
	 static const u8 sDebugText_TOXICROAK[] = _("TOXICROAK");
	 static const u8 sDebugText_CARNIVINE[] = _("CARNIVINE");
	 static const u8 sDebugText_FINNEON[] = _("FINNEON");
	 static const u8 sDebugText_LUMINEON[] = _("LUMINEON");
	 static const u8 sDebugText_MANTYKE[] = _("MANTYKE");
	 static const u8 sDebugText_SNOVER[] = _("SNOVER");
	 static const u8 sDebugText_ABOMASNOW[] = _("ABOMASNOW");
	 static const u8 sDebugText_WEAVILE[] = _("WEAVILE");
	 static const u8 sDebugText_MAGNEZONE[] = _("MAGNEZONE");
	 static const u8 sDebugText_LICKILICKY[] = _("LICKILICKY");
	 static const u8 sDebugText_RHYPERIOR[] = _("RHYPERIOR");
	 static const u8 sDebugText_TANGROWTH[] = _("TANGROWTH");
	 static const u8 sDebugText_ELECTIVIRE[] = _("ELECTIVIRE");
	 static const u8 sDebugText_MAGMORTAR[] = _("MAGMORTAR");
	 static const u8 sDebugText_TOGEKISS[] = _("TOGEKISS");
	 static const u8 sDebugText_YANMEGA[] = _("YANMEGA");
	 static const u8 sDebugText_LEAFEON[] = _("LEAFEON");
	 static const u8 sDebugText_GLACEON[] = _("GLACEON");
	 static const u8 sDebugText_GLISCOR[] = _("GLISCOR");
	 static const u8 sDebugText_MAMOSWINE[] = _("MAMOSWINE");
	 static const u8 sDebugText_PORYGON_Z[] = _("PORYGONZ");
	 static const u8 sDebugText_GALLADE[] = _("GALLADE");
	 static const u8 sDebugText_PROBOPASS[] = _("PROBOPASS");
	 static const u8 sDebugText_DUSKNOIR[] = _("DUSKNOIR");
	 static const u8 sDebugText_FROSLASS[] = _("FROSLASS");
	 static const u8 sDebugText_ROTOM[] = _("ROTOM");
	 static const u8 sDebugText_SNIVY[] = _("SNIVY");
	 static const u8 sDebugText_SERVINE[] = _("SERVINE");
	 static const u8 sDebugText_SERPERIOR[] = _("SERPERIOR");
	 static const u8 sDebugText_TEPIG[] = _("TEPIG");
	 static const u8 sDebugText_PIGNITE[] = _("PIGNITE");
	 static const u8 sDebugText_EMBOAR[] = _("EMBOAR");
	 static const u8 sDebugText_OSHAWOTT[] = _("OSHAWOTT");
	 static const u8 sDebugText_DEWOTT[] = _("DEWOTT");
	 static const u8 sDebugText_SAMUROTT[] = _("SAMUROTT");
	 static const u8 sDebugText_PATRAT[] = _("PATRAT");
	 static const u8 sDebugText_WATCHOG[] = _("WATCHOG");
	 static const u8 sDebugText_LILLIPUP[] = _("LILLIPUP");
	 static const u8 sDebugText_HERDIER[] = _("HERDIER");
	 static const u8 sDebugText_STOUTLAND[] = _("STOUTLAND");
	 static const u8 sDebugText_PURRLOIN[] = _("PURRLOIN");
	 static const u8 sDebugText_LIEPARD[] = _("LIEPARD");
	 static const u8 sDebugText_PANSAGE[] = _("PANSAGE");
	 static const u8 sDebugText_SIMISAGE[] = _("SIMISAGE");
	 static const u8 sDebugText_PANSEAR[] = _("PANSEAR");
	 static const u8 sDebugText_SIMISEAR[] = _("SIMISEAR");
	 static const u8 sDebugText_PANPOUR[] = _("PANPOUR");
	 static const u8 sDebugText_SIMIPOUR[] = _("SIMIPOUR");
	 static const u8 sDebugText_MUNNA[] = _("MUNNA");
	 static const u8 sDebugText_MUSHARNA[] = _("MUSHARNA");
	 static const u8 sDebugText_PIDOVE[] = _("PIDOVE");
	 static const u8 sDebugText_TRANQUILL[] = _("TRANQUILL");
	 static const u8 sDebugText_UNFEZANT[] = _("UNFEZANT");
	 static const u8 sDebugText_BLITZLE[] = _("BLITZLE");
	 static const u8 sDebugText_ZEBSTRIKA[] = _("ZEBSTRIKA");
	 static const u8 sDebugText_ROGGENROLA[] = _("ROGGENROLA");
	 static const u8 sDebugText_BOLDORE[] = _("BOLDORE");
	 static const u8 sDebugText_GIGALITH[] = _("GIGALITH");
	 static const u8 sDebugText_WOOBAT[] = _("WOOBAT");
	 static const u8 sDebugText_SWOOBAT[] = _("SWOOBAT");
	 static const u8 sDebugText_DRILBUR[] = _("DRILBUR");
	 static const u8 sDebugText_EXCADRILL[] = _("EXCADRILL");
	 static const u8 sDebugText_AUDINO[] = _("AUDINO");
	 static const u8 sDebugText_TIMBURR[] = _("TIMBURR");
	 static const u8 sDebugText_GURDURR[] = _("GURDURR");
	 static const u8 sDebugText_CONKELDURR[] = _("CONKELDURR");
	 static const u8 sDebugText_TYMPOLE[] = _("TYMPOLE");
	 static const u8 sDebugText_PALPITOAD[] = _("PALPITOAD");
	 static const u8 sDebugText_SEISMITOAD[] = _("SEISMITOAD");
	 static const u8 sDebugText_THROH[] = _("THROH");
	 static const u8 sDebugText_SAWK[] = _("SAWK");
	 static const u8 sDebugText_SEWADDLE[] = _("SEWADDLE");
	 static const u8 sDebugText_SWADLOON[] = _("SWADLOON");
	 static const u8 sDebugText_LEAVANNY[] = _("LEAVANNY");
	 static const u8 sDebugText_VENIPEDE[] = _("VENIPEDE");
	 static const u8 sDebugText_WHIRLIPEDE[] = _("WHIRLIPEDE");
	 static const u8 sDebugText_SCOLIPEDE[] = _("SCOLIPEDE");
	 static const u8 sDebugText_COTTONEE[] = _("COTTONEE");
	 static const u8 sDebugText_WHIMSICOTT[] = _("WHIMSICOTT");
	 static const u8 sDebugText_PETILIL[] = _("PETILIL");
	 static const u8 sDebugText_LILLIGANT[] = _("LILLIGANT");
	 static const u8 sDebugText_BASCULIN[] = _("BASCULIN");
	 static const u8 sDebugText_SANDILE[] = _("SANDILE");
	 static const u8 sDebugText_KROKOROK[] = _("KROKOROK");
	 static const u8 sDebugText_KROOKODILE[] = _("KROOKODILE");
	 static const u8 sDebugText_DARUMAKA[] = _("DARUMAKA");
	 static const u8 sDebugText_DARMANITAN[] = _("DARMANITAN");
	 static const u8 sDebugText_MARACTUS[] = _("MARACTUS");
	 static const u8 sDebugText_DWEBBLE[] = _("DWEBBLE");
	 static const u8 sDebugText_CRUSTLE[] = _("CRUSTLE");
	 static const u8 sDebugText_SCRAGGY[] = _("SCRAGGY");
	 static const u8 sDebugText_SCRAFTY[] = _("SCRAFTY");
	 static const u8 sDebugText_SIGILYPH[] = _("SIGILYPH");
	 static const u8 sDebugText_YAMASK[] = _("YAMASK");
	 static const u8 sDebugText_COFAGRIGUS[] = _("COFAGRIGUS");
	 static const u8 sDebugText_TIRTOUGA[] = _("TIRTOUGA");
	 static const u8 sDebugText_CARRACOSTA[] = _("CARRACOSTA");
	 static const u8 sDebugText_ARCHEN[] = _("ARCHEN");
	 static const u8 sDebugText_ARCHEOPS[] = _("ARCHEOPS");
	 static const u8 sDebugText_TRUBBISH[] = _("TRUBBISH");
	 static const u8 sDebugText_GARBODOR[] = _("GARBODOR");
	 static const u8 sDebugText_ZORUA[] = _("ZORUA");
	 static const u8 sDebugText_ZOROARK[] = _("ZOROARK");
	 static const u8 sDebugText_MINCCINO[] = _("MINCCINO");
	 static const u8 sDebugText_CINCCINO[] = _("CINCCINO");
	 static const u8 sDebugText_GOTHITA[] = _("GOTHITA");
	 static const u8 sDebugText_GOTHORITA[] = _("GOTHORITA");
	 static const u8 sDebugText_GOTHITELLE[] = _("GOTHITELLE");
	 static const u8 sDebugText_SOLOSIS[] = _("SOLOSIS");
	 static const u8 sDebugText_DUOSION[] = _("DUOSION");
	 static const u8 sDebugText_REUNICLUS[] = _("REUNICLUS");
	 static const u8 sDebugText_DUCKLETT[] = _("DUCKLETT");
	 static const u8 sDebugText_SWANNA[] = _("SWANNA");
	 static const u8 sDebugText_VANILLITE[] = _("VANILLITE");
	 static const u8 sDebugText_VANILLISH[] = _("VANILLISH");
	 static const u8 sDebugText_VANILLUXE[] = _("VANILLUXE");
	 static const u8 sDebugText_DEERLING[] = _("DEERLING");
	 static const u8 sDebugText_SAWSBUCK[] = _("SAWSBUCK");
	 static const u8 sDebugText_EMOLGA[] = _("EMOLGA");
	 static const u8 sDebugText_KARRABLAST[] = _("KARRABLAST");
	 static const u8 sDebugText_ESCAVALIER[] = _("ESCAVALIER");
	 static const u8 sDebugText_FOONGUS[] = _("FOONGUS");
	 static const u8 sDebugText_AMOONGUSS[] = _("AMOONGUSS");
	 static const u8 sDebugText_FRILLISH[] = _("FRILLISH");
	 static const u8 sDebugText_JELLICENT[] = _("JELLICENT");
	 static const u8 sDebugText_ALOMOMOLA[] = _("ALOMOMOLA");
	 static const u8 sDebugText_JOLTIK[] = _("JOLTIK");
	 static const u8 sDebugText_GALVANTULA[] = _("GALVANTULA");
	 static const u8 sDebugText_FERROSEED[] = _("FERROSEED");
	 static const u8 sDebugText_FERROTHORN[] = _("FERROTHORN");
	 static const u8 sDebugText_KLINK[] = _("KLINK");
	 static const u8 sDebugText_KLANG[] = _("KLANG");
	 static const u8 sDebugText_KLINKLANG[] = _("KLINKLANG");
	 static const u8 sDebugText_TYNAMO[] = _("TYNAMO");
	 static const u8 sDebugText_EELEKTRIK[] = _("EELEKTRIK");
	 static const u8 sDebugText_EELEKTROSS[] = _("EELEKTROSS");
	 static const u8 sDebugText_ELGYEM[] = _("ELGYEM");
	 static const u8 sDebugText_BEHEEYEM[] = _("BEHEEYEM");
	 static const u8 sDebugText_LITWICK[] = _("LITWICK");
	 static const u8 sDebugText_LAMPENT[] = _("LAMPENT");
	 static const u8 sDebugText_CHANDELURE[] = _("CHANDELURE");
	 static const u8 sDebugText_AXEW[] = _("AXEW");
	 static const u8 sDebugText_FRAXURE[] = _("FRAXURE");
	 static const u8 sDebugText_HAXORUS[] = _("HAXORUS");
	 static const u8 sDebugText_CUBCHOO[] = _("CUBCHOO");
	 static const u8 sDebugText_BEARTIC[] = _("BEARTIC");
	 static const u8 sDebugText_CRYOGONAL[] = _("CRYOGONAL");
	 static const u8 sDebugText_SHELMET[] = _("SHELMET");
	 static const u8 sDebugText_ACCELGOR[] = _("ACCELGOR");
	 static const u8 sDebugText_STUNFISK[] = _("STUNFISK");
	 static const u8 sDebugText_MIENFOO[] = _("MIENFOO");
	 static const u8 sDebugText_MIENSHAO[] = _("MIENSHAO");
	 static const u8 sDebugText_DRUDDIGON[] = _("DRUDDIGON");
	 static const u8 sDebugText_GOLETT[] = _("GOLETT");
	 static const u8 sDebugText_GOLURK[] = _("GOLURK");
	 static const u8 sDebugText_PAWNIARD[] = _("PAWNIARD");
	 static const u8 sDebugText_BISHARP[] = _("BISHARP");
	 static const u8 sDebugText_BOUFFALANT[] = _("BOUFFALANT");
	 static const u8 sDebugText_RUFFLET[] = _("RUFFLET");
	 static const u8 sDebugText_BRAVIARY[] = _("BRAVIARY");
	 static const u8 sDebugText_VULLABY[] = _("VULLABY");
	 static const u8 sDebugText_MANDIBUZZ[] = _("MANDIBUZZ");
	 static const u8 sDebugText_HEATMOR[] = _("HEATMOR");
	 static const u8 sDebugText_DURANT[] = _("DURANT");
	 static const u8 sDebugText_DEINO[] = _("DEINO");
	 static const u8 sDebugText_ZWEILOUS[] = _("ZWEILOUS");
	 static const u8 sDebugText_HYDREIGON[] = _("HYDREIGON");
	 static const u8 sDebugText_LARVESTA[] = _("LARVESTA");
	 static const u8 sDebugText_VOLCARONA[] = _("VOLCARONA");
	 static const u8 sDebugText_CHESPIN[] = _("CHESPIN");
	 static const u8 sDebugText_QUILLADIN[] = _("QUILLADIN");
	 static const u8 sDebugText_CHESNAUGHT[] = _("CHESNAUGHT");
	 static const u8 sDebugText_FENNEKIN[] = _("FENNEKIN");
	 static const u8 sDebugText_BRAIXEN[] = _("BRAIXEN");
	 static const u8 sDebugText_DELPHOX[] = _("DELPHOX");
	 static const u8 sDebugText_FROAKIE[] = _("FROAKIE");
	 static const u8 sDebugText_FROGADIER[] = _("FROGADIER");
	 static const u8 sDebugText_GRENINJA[] = _("GRENINJA");
	 static const u8 sDebugText_BUNNELBY[] = _("BUNNELBY");
	 static const u8 sDebugText_DIGGERSBY[] = _("DIGGERSBY");
	 static const u8 sDebugText_FLETCHLING[] = _("FLETCHLING");
	 static const u8 sDebugText_FLETCHINDER[] = _("FLETCHINDER");
	 static const u8 sDebugText_TALONFLAME[] = _("TALONFLAME");
	 static const u8 sDebugText_SCATTERBUG[] = _("SCATTERBUG");
	 static const u8 sDebugText_SPEWPA[] = _("SPEWPA");
	 static const u8 sDebugText_VIVILLON[] = _("VIVILLON");
	 static const u8 sDebugText_LITLEO[] = _("LITLEO");
	 static const u8 sDebugText_PYROAR[] = _("PYROAR");
	 static const u8 sDebugText_FLABEBE[] = _("FLABEBE");
	 static const u8 sDebugText_FLOETTE[] = _("FLOETTE");
	 static const u8 sDebugText_FLORGES[] = _("FLORGES");
	 static const u8 sDebugText_SKIDDO[] = _("SKIDDO");
	 static const u8 sDebugText_GOGOAT[] = _("GOGOAT");
	 static const u8 sDebugText_PANCHAM[] = _("PANCHAM");
	 static const u8 sDebugText_PANGORO[] = _("PANGORO");
	 static const u8 sDebugText_FURFROU[] = _("FURFROU");
	 static const u8 sDebugText_ESPURR[] = _("ESPURR");
	 static const u8 sDebugText_MEOWSTIC[] = _("MEOWSTIC");
	 static const u8 sDebugText_HONEDGE[] = _("HONEDGE");
	 static const u8 sDebugText_DOUBLADE[] = _("DOUBLADE");
	 static const u8 sDebugText_AEGISLASH[] = _("AEGISLASH");
	 static const u8 sDebugText_SPRITZEE[] = _("SPRITZEE");
	 static const u8 sDebugText_AROMATISSE[] = _("AROMATISSE");
	 static const u8 sDebugText_SWIRLIX[] = _("SWIRLIX");
	 static const u8 sDebugText_SLURPUFF[] = _("SLURPUFF");
	 static const u8 sDebugText_INKAY[] = _("INKAY");
	 static const u8 sDebugText_MALAMAR[] = _("MALAMAR");
	 static const u8 sDebugText_BINACLE[] = _("BINACLE");
	 static const u8 sDebugText_BARBARACLE[] = _("BARBARACLE");
	 static const u8 sDebugText_SKRELP[] = _("SKRELP");
	 static const u8 sDebugText_DRAGALGE[] = _("DRAGALGE");
	 static const u8 sDebugText_CLAUNCHER[] = _("CLAUNCHER");
	 static const u8 sDebugText_CLAWITZER[] = _("CLAWITZER");
	 static const u8 sDebugText_HELIOPTILE[] = _("HELIOPTILE");
	 static const u8 sDebugText_HELIOLISK[] = _("HELIOLISK");
	 static const u8 sDebugText_TYRUNT[] = _("TYRUNT");
	 static const u8 sDebugText_TYRANTRUM[] = _("TYRANTRUM");
	 static const u8 sDebugText_AMAURA[] = _("AMAURA");
	 static const u8 sDebugText_AURORUS[] = _("AURORUS");
	 static const u8 sDebugText_SYLVEON[] = _("SYLVEON");
	 static const u8 sDebugText_HAWLUCHA[] = _("HAWLUCHA");
	 static const u8 sDebugText_DEDENNE[] = _("DEDENNE");
	 static const u8 sDebugText_CARBINK[] = _("CARBINK");
	 static const u8 sDebugText_GOOMY[] = _("GOOMY");
	 static const u8 sDebugText_SLIGGOO[] = _("SLIGGOO");
	 static const u8 sDebugText_GOODRA[] = _("GOODRA");
	 static const u8 sDebugText_KLEFKI[] = _("KLEFKI");
	 static const u8 sDebugText_PHANTUMP[] = _("PHANTUMP");
	 static const u8 sDebugText_TREVENANT[] = _("TREVENANT");
	 static const u8 sDebugText_PUMPKABOO[] = _("PUMPKABOO");
	 static const u8 sDebugText_GOURGEIST[] = _("GOURGEIST");
	 static const u8 sDebugText_BERGMITE[] = _("BERGMITE");
	 static const u8 sDebugText_AVALUGG[] = _("AVALUGG");
	 static const u8 sDebugText_NOIBAT[] = _("NOIBAT");
	 static const u8 sDebugText_NOIVERN[] = _("NOIVERN");
	 static const u8 sDebugText_ROWLET[] = _("ROWLET");
	 static const u8 sDebugText_DARTRIX[] = _("DARTRIX");
	 static const u8 sDebugText_DECIDUEYE[] = _("DECIDUEYE");
	 static const u8 sDebugText_LITTEN[] = _("LITTEN");
	 static const u8 sDebugText_TORRACAT[] = _("TORRACAT");
	 static const u8 sDebugText_INCINEROAR[] = _("INCINEROAR");
	 static const u8 sDebugText_POPPLIO[] = _("POPPLIO");
	 static const u8 sDebugText_BRIONNE[] = _("BRIONNE");
	 static const u8 sDebugText_PRIMARINA[] = _("PRIMARINA");
	 static const u8 sDebugText_PIKIPEK[] = _("PIKIPEK");
	 static const u8 sDebugText_TRUMBEAK[] = _("TRUMBEAK");
	 static const u8 sDebugText_TOUCANNON[] = _("TOUCANNON");
	 static const u8 sDebugText_YUNGOOS[] = _("YUNGOOS");
	 static const u8 sDebugText_GUMSHOOS[] = _("GUMSHOOS");
	 static const u8 sDebugText_GRUBBIN[] = _("GRUBBIN");
	 static const u8 sDebugText_CHARJABUG[] = _("CHARJABUG");
	 static const u8 sDebugText_VIKAVOLT[] = _("VIKAVOLT");
	 static const u8 sDebugText_CRABRAWLER[] = _("CRABRAWLER");
	 static const u8 sDebugText_CRABOMINABLE[] = _("CRABOMINABLE");
	 static const u8 sDebugText_ORICORIO[] = _("ORICORIO");
	 static const u8 sDebugText_CUTIEFLY[] = _("CUTIEFLY");
	 static const u8 sDebugText_RIBOMBEE[] = _("RIBOMBEE");
	 static const u8 sDebugText_ROCKRUFF[] = _("ROCKRUFF");
	 static const u8 sDebugText_LYCANROC[] = _("LYCANROC");
	 static const u8 sDebugText_WISHIWASHI[] = _("WISHIWASHI");
	 static const u8 sDebugText_MAREANIE[] = _("MAREANIE");
	 static const u8 sDebugText_TOXAPEX[] = _("TOXAPEX");
	 static const u8 sDebugText_MUDBRAY[] = _("MUDBRAY");
	 static const u8 sDebugText_MUDSDALE[] = _("MUDSDALE");
	 static const u8 sDebugText_DEWPIDER[] = _("DEWPIDER");
	 static const u8 sDebugText_ARAQUANID[] = _("ARAQUANID");
	 static const u8 sDebugText_FOMANTIS[] = _("FOMANTIS");
	 static const u8 sDebugText_LURANTIS[] = _("LURANTIS");
	 static const u8 sDebugText_MORELULL[] = _("MORELULL");
	 static const u8 sDebugText_SHIINOTIC[] = _("SHIINOTIC");
	 static const u8 sDebugText_SALANDIT[] = _("SALANDIT");
	 static const u8 sDebugText_SALAZZLE[] = _("SALAZZLE");
	 static const u8 sDebugText_STUFFUL[] = _("STUFFUL");
	 static const u8 sDebugText_BEWEAR[] = _("BEWEAR");
	 static const u8 sDebugText_BOUNSWEET[] = _("BOUNSWEET");
	 static const u8 sDebugText_STEENEE[] = _("STEENEE");
	 static const u8 sDebugText_TSAREENA[] = _("TSAREENA");
	 static const u8 sDebugText_COMFEY[] = _("COMFEY");
	 static const u8 sDebugText_ORANGURU[] = _("ORANGURU");
	 static const u8 sDebugText_PASSIMIAN[] = _("PASSIMIAN");
	 static const u8 sDebugText_WIMPOD[] = _("WIMPOD");
	 static const u8 sDebugText_GOLISOPOD[] = _("GOLISOPOD");
	 static const u8 sDebugText_SANDYGAST[] = _("SANDYGAST");
	 static const u8 sDebugText_PALOSSAND[] = _("PALOSSAND");
	 static const u8 sDebugText_PYUKUMUKU[] = _("PYUKUMUKU");
	 static const u8 sDebugText_TYPE_NULL[] = _("CÓDIGO CERO");
	 static const u8 sDebugText_SILVALLY[] = _("SILVALLY");
	 static const u8 sDebugText_MINIOR[] = _("MINIOR");
	 static const u8 sDebugText_KOMALA[] = _("KOMALA");
	 static const u8 sDebugText_TURTONATOR[] = _("TURTONATOR");
	 static const u8 sDebugText_TOGEDEMARU[] = _("TOGEDEMARU");
	 static const u8 sDebugText_MIMIKYU[] = _("MIMIKYU");
	 static const u8 sDebugText_BRUXISH[] = _("BRUXISH");
	 static const u8 sDebugText_DRAMPA[] = _("DRAMPA");
	 static const u8 sDebugText_DHELMISE[] = _("DHELMISE");
	 static const u8 sDebugText_JANGMO_O[] = _("JANGMO O");
	 static const u8 sDebugText_HAKAMO_O[] = _("HAKAMO O");
	 static const u8 sDebugText_KOMMO_O[] = _("KOMMO O");
	 static const u8 sDebugText_TAPU_KOKO[] = _("TAPU KOKO");
	 static const u8 sDebugText_TAPU_LELE[] = _("TAPU LELE");
	 static const u8 sDebugText_TAPU_BULU[] = _("TAPU BULU");
	 static const u8 sDebugText_TAPU_FINI[] = _("TAPU FINI");
	 static const u8 sDebugText_COSMOG[] = _("COSMOG");
	 static const u8 sDebugText_COSMOEM[] = _("COSMOEM");
	 static const u8 sDebugText_GROOKEY[] = _("GROOKEY");
	 static const u8 sDebugText_THWACKEY[] = _("THWACKEY");
	 static const u8 sDebugText_RILLABOOM[] = _("RILLABOOM");
	 static const u8 sDebugText_SCORBUNNY[] = _("SCORBUNNY");
	 static const u8 sDebugText_RABOOT[] = _("RABOOT");
	 static const u8 sDebugText_CINDERACE[] = _("CINDERACE");
	 static const u8 sDebugText_SOBBLE[] = _("SOBBLE");
	 static const u8 sDebugText_DRIZZILE[] = _("DRIZZILE");
	 static const u8 sDebugText_INTELEON[] = _("INTELEON");
	 static const u8 sDebugText_SKWOVET[] = _("SKWOVET");
	 static const u8 sDebugText_GREEDENT[] = _("GREEDENT");
	 static const u8 sDebugText_ROOKIDEE[] = _("ROOKIDEE");
	 static const u8 sDebugText_CORVISQUIRE[] = _("CORVISQUIRE");
	 static const u8 sDebugText_CORVIKNIGHT[] = _("CORVIKNIGHT");
	 static const u8 sDebugText_BLIPBUG[] = _("BLIPBUG");
	 static const u8 sDebugText_DOTTLER[] = _("DOTTLER");
	 static const u8 sDebugText_ORBEETLE[] = _("ORBEETLE");
	 static const u8 sDebugText_NICKIT[] = _("NICKIT");
	 static const u8 sDebugText_THIEVUL[] = _("THIEVUL");
	 static const u8 sDebugText_GOSSIFLEUR[] = _("GOSSIFLEUR");
	 static const u8 sDebugText_ELDEGOSS[] = _("ELDEGOSS");
	 static const u8 sDebugText_WOOLOO[] = _("WOOLOO");
	 static const u8 sDebugText_DUBWOOL[] = _("DUBWOOL");
	 static const u8 sDebugText_CHEWTLE[] = _("CHEWTLE");
	 static const u8 sDebugText_DREDNAW[] = _("DREDNAW");
	 static const u8 sDebugText_YAMPER[] = _("YAMPER");
	 static const u8 sDebugText_BOLTUND[] = _("BOLTUND");
	 static const u8 sDebugText_ROLYCOLY[] = _("ROLYCOLY");
	 static const u8 sDebugText_CARKOL[] = _("CARKOL");
	 static const u8 sDebugText_COALOSSAL[] = _("COALOSSAL");
	 static const u8 sDebugText_APPLIN[] = _("APPLIN");
	 static const u8 sDebugText_FLAPPLE[] = _("FLAPPLE");
	 static const u8 sDebugText_APPLETUN[] = _("APPLETUN");
	 static const u8 sDebugText_SILICOBRA[] = _("SILICOBRA");
	 static const u8 sDebugText_SANDACONDA[] = _("SANDACONDA");
	 static const u8 sDebugText_CRAMORANT[] = _("CRAMORANT");
	 static const u8 sDebugText_ARROKUDA[] = _("ARROKUDA");
	 static const u8 sDebugText_BARRASKEWDA[] = _("BARRASKEWDA");
	 static const u8 sDebugText_TOXEL[] = _("TOXEL");
	 static const u8 sDebugText_TOXTRICITY[] = _("TOXTRICITY");
	 static const u8 sDebugText_SIZZLIPEDE[] = _("SIZZLIPEDE");
	 static const u8 sDebugText_CENTISKORCH[] = _("CENTISKORCH");
	 static const u8 sDebugText_CLOBBOPUS[] = _("CLOBBOPUS");
	 static const u8 sDebugText_GRAPPLOCT[] = _("GRAPPLOCT");
	 static const u8 sDebugText_SINISTEA[] = _("SINISTEA");
	 static const u8 sDebugText_POLTEAGEIST[] = _("POLTEAGEIST");
	 static const u8 sDebugText_HATENNA[] = _("HATENNA");
	 static const u8 sDebugText_HATTREM[] = _("HATTREM");
	 static const u8 sDebugText_HATTERENE[] = _("HATTERENE");
	 static const u8 sDebugText_IMPIDIMP[] = _("IMPIDIMP");
	 static const u8 sDebugText_MORGREM[] = _("MORGREM");
	 static const u8 sDebugText_GRIMMSNARL[] = _("GRIMMSNARL");
	 static const u8 sDebugText_OBSTAGOON[] = _("OBSTAGOON");
	 static const u8 sDebugText_PERRSERKER[] = _("PERRSERKER");
	 static const u8 sDebugText_CURSOLA[] = _("CURSOLA");
	 static const u8 sDebugText_SIRFETCHD[] = _("SIRFETCHD");
	 static const u8 sDebugText_MR_RIME[] = _("MR RIME");
	 static const u8 sDebugText_RUNERIGUS[] = _("RUNERIGUS");
	 static const u8 sDebugText_MILCERY[] = _("MILCERY");
	 static const u8 sDebugText_ALCREMIE[] = _("ALCREMIE");
	 static const u8 sDebugText_FALINKS[] = _("FALINKS");
	 static const u8 sDebugText_PINCURCHIN[] = _(" PINCURCHIN");
	 static const u8 sDebugText_SNOM[] = _("SNOM");
	 static const u8 sDebugText_FROSMOTH[] = _("FROSMOTH");
	 static const u8 sDebugText_STONJOURNER[] = _("STONJOURNER");
	 static const u8 sDebugText_EISCUE[] = _("EISCUE");
	 static const u8 sDebugText_INDEEDEE[] = _("INDEEDEE");
	 static const u8 sDebugText_MORPEKO[] = _("MORPEKO");
	 static const u8 sDebugText_CUFANT[] = _("CUFANT");
	 static const u8 sDebugText_COPPERAJAH[] = _("COPPERAJAH");
	 static const u8 sDebugText_DRACOZOLT[] = _("DRACOZOLT");
	 static const u8 sDebugText_ARCTOZOLT[] = _("ARCTOZOLT");
	 static const u8 sDebugText_DRACOVISH[] = _("DRACOVISH");
	 static const u8 sDebugText_ARCTOVISH[] = _("ARCTOVISH");
	 static const u8 sDebugText_DURALUDON[] = _("DURALUDON");
	 static const u8 sDebugText_DREEPY[] = _("DREEPY");
	 static const u8 sDebugText_DRAKLOAK[] = _("DRAKLOAK");
	 static const u8 sDebugText_DRAGAPULT[] = _("DRAGAPULT");
	 static const u8 sDebugText_TRXATU[] = _("TRXATU");

/// fin nombres

enum //pokes
{
BULBASAUR,
IVYSAUR,
VENUSAUR,
CHARMANDER,
CHARMELEON,
CHARIZARD,
SQUIRTLE,
WARTORTLE,
BLASTOISE,
CATERPIE,
METAPOD,
BUTTERFREE,
WEEDLE,
KAKUNA,
BEEDRILL,
PIDGEY,
PIDGEOTTO,
PIDGEOT,
RATTATA,
RATICATE,
SPEAROW,
FEAROW,
EKANS,
ARBOK,
PIKACHU,
RAICHU,
SANDSHREW,
SANDSLASH,
NIDORAN_F,
NIDORINA,
NIDOQUEEN,
NIDORAN_M,
NIDORINO,
NIDOKING,
CLEFAIRY,
CLEFABLE,
VULPIX,
NINETALES,
JIGGLYPUFF,
WIGGLYTUFF,
ZUBAT,
GOLBAT,
ODDISH,
GLOOM,
VILEPLUME,
PARAS,
PARASECT,
VENONAT,
VENOMOTH,
DIGLETT,
DUGTRIO,
MEOWTH,
PERSIAN,
PSYDUCK,
GOLDUCK,
MANKEY,
PRIMEAPE,
GROWLITHE,
ARCANINE,
POLIWAG,
POLIWHIRL,
POLIWRATH,
ABRA,
KADABRA,
ALAKAZAM,
MACHOP,
MACHOKE,
MACHAMP,
BELLSPROUT,
WEEPINBELL,
VICTREEBEL,
TENTACOOL,
TENTACRUEL,
GEODUDE,
GRAVELER,
GOLEM,
PONYTA,
RAPIDASH,
SLOWPOKE,
SLOWBRO,
MAGNEMITE,
MAGNETON,
FARFETCHD,
DODUO,
DODRIO,
SEEL,
DEWGONG,
GRIMER,
MUK,
SHELLDER,
CLOYSTER,
GASTLY,
HAUNTER,
GENGAR,
ONIX,
DROWZEE,
HYPNO,
KRABBY,
KINGLER,
VOLTORB,
ELECTRODE,
EXEGGCUTE,
EXEGGUTOR,
CUBONE,
MAROWAK,
HITMONLEE,
HITMONCHAN,
LICKITUNG,
KOFFING,
WEEZING,
RHYHORN,
RHYDON,
CHANSEY,
TANGELA,
KANGASKHAN,
HORSEA,
SEADRA,
GOLDEEN,
SEAKING,
STARYU,
STARMIE,
MR_MIME,
SCYTHER,
JYNX,
ELECTABUZZ,
MAGMAR,
PINSIR,
TAUROS,
MAGIKARP,
GYARADOS,
LAPRAS,
DITTO,
EEVEE,
VAPOREON,
JOLTEON,
FLAREON,
PORYGON,
OMANYTE,
OMASTAR,
KABUTO,
KABUTOPS,
AERODACTYL,
SNORLAX,
DRATINI,
DRAGONAIR,
DRAGONITE,
CHIKORITA,
BAYLEEF,
MEGANIUM,
CYNDAQUIL,
QUILAVA,
TYPHLOSION,
TOTODILE,
CROCONAW,
FERALIGATR,
SENTRET,
FURRET,
HOOTHOOT,
NOCTOWL,
LEDYBA,
LEDIAN,
SPINARAK,
ARIADOS,
CROBAT,
CHINCHOU,
LANTURN,
PICHU,
CLEFFA,
IGGLYBUFF,
TOGEPI,
TOGETIC,
NATU,
XATU,
MAREEP,
FLAAFFY,
AMPHAROS,
BELLOSSOM,
MARILL,
AZUMARILL,
SUDOWOODO,
POLITOED,
HOPPIP,
SKIPLOOM,
JUMPLUFF,
AIPOM,
SUNKERN,
SUNFLORA,
YANMA,
WOOPER,
QUAGSIRE,
ESPEON,
UMBREON,
MURKROW,
SLOWKING,
MISDREAVUS,
UNOWN,
WOBBUFFET,
GIRAFARIG,
PINECO,
FORRETRESS,
DUNSPARCE,
GLIGAR,
STEELIX,
SNUBBULL,
GRANBULL,
QWILFISH,
SCIZOR,
SHUCKLE,
HERACROSS,
SNEASEL,
TEDDIURSA,
URSARING,
SLUGMA,
MAGCARGO,
SWINUB,
PILOSWINE,
CORSOLA,
REMORAID,
OCTILLERY,
DELIBIRD,
MANTINE,
SKARMORY,
HOUNDOUR,
HOUNDOOM,
KINGDRA,
PHANPY,
DONPHAN,
PORYGON2,
STANTLER,
SMEARGLE,
TYROGUE,
HITMONTOP,
SMOOCHUM,
ELEKID,
MAGBY,
MILTANK,
BLISSEY,
RAIKOU,
ENTEI,
SUICUNE,
LARVITAR,
PUPITAR,
TYRANITAR,
TREECKO,
GROVYLE,
SCEPTILE,
TORCHIC,
COMBUSKEN,
BLAZIKEN,
MUDKIP,
MARSHTOMP,
SWAMPERT,
POOCHYENA,
MIGHTYENA,
ZIGZAGOON,
LINOONE,
WURMPLE,
SILCOON,
BEAUTIFLY,
CASCOON,
DUSTOX,
LOTAD,
LOMBRE,
LUDICOLO,
SEEDOT,
NUZLEAF,
SHIFTRY,
TAILLOW,
SWELLOW,
WINGULL,
PELIPPER,
RALTS,
KIRLIA,
GARDEVOIR,
SURSKIT,
MASQUERAIN,
SHROOMISH,
BRELOOM,
SLAKOTH,
VIGOROTH,
SLAKING,
NINCADA,
NINJASK,
SHEDINJA,
WHISMUR,
LOUDRED,
EXPLOUD,
MAKUHITA,
HARIYAMA,
AZURILL,
NOSEPASS,
SKITTY,
DELCATTY,
SABLEYE,
MAWILE,
ARON,
LAIRON,
AGGRON,
MEDITITE,
MEDICHAM,
ELECTRIKE,
MANECTRIC,
PLUSLE,
MINUN,
VOLBEAT,
ILLUMISE,
ROSELIA,
GULPIN,
SWALOT,
CARVANHA,
SHARPEDO,
WAILMER,
WAILORD,
NUMEL,
CAMERUPT,
TORKOAL,
SPOINK,
GRUMPIG,
SPINDA,
TRAPINCH,
VIBRAVA,
FLYGON,
CACNEA,
CACTURNE,
SWABLU,
ALTARIA,
ZANGOOSE,
SEVIPER,
LUNATONE,
SOLROCK,
BARBOACH,
WHISCASH,
CORPHISH,
CRAWDAUNT,
BALTOY,
CLAYDOL,
LILEEP,
CRADILY,
ANORITH,
ARMALDO,
FEEBAS,
MILOTIC,
CASTFORM,
KECLEON,
SHUPPET,
BANETTE,
DUSKULL,
DUSCLOPS,
TROPIUS,
CHIMECHO,
ABSOL,
WYNAUT,
SNORUNT,
GLALIE,
SPHEAL,
SEALEO,
WALREIN,
CLAMPERL,
HUNTAIL,
GOREBYSS,
RELICANTH,
LUVDISC,
BAGON,
SHELGON,
SALAMENCE,
BELDUM,
METANG,
METAGROSS,
TURTWIG,
GROTLE,
TORTERRA,
CHIMCHAR,
MONFERNO,
INFERNAPE,
PIPLUP,
PRINPLUP,
EMPOLEON,
STARLY,
STARAVIA,
STARAPTOR,
BIDOOF,
BIBAREL,
KRICKETOT,
KRICKETUNE,
SHINX,
LUXIO,
LUXRAY,
BUDEW,
ROSERADE,
CRANIDOS,
RAMPARDOS,
SHIELDON,
BASTIODON,
BURMY,
WORMADAM,
MOTHIM,
COMBEE,
VESPIQUEN,
PACHIRISU,
BUIZEL,
FLOATZEL,
CHERUBI,
CHERRIM,
SHELLOS,
GASTRODON,
AMBIPOM,
DRIFLOON,
DRIFBLIM,
BUNEARY,
LOPUNNY,
MISMAGIUS,
HONCHKROW,
GLAMEOW,
PURUGLY,
CHINGLING,
STUNKY,
SKUNTANK,
BRONZOR,
BRONZONG,
BONSLY,
MIME_JR,
HAPPINY,
CHATOT,
SPIRITOMB,
GIBLE,
GABITE,
GARCHOMP,
MUNCHLAX,
RIOLU,
LUCARIO,
HIPPOPOTAS,
HIPPOWDON,
SKORUPI,
DRAPION,
CROAGUNK,
TOXICROAK,
CARNIVINE,
FINNEON,
LUMINEON,
MANTYKE,
SNOVER,
ABOMASNOW,
WEAVILE,
MAGNEZONE,
LICKILICKY,
RHYPERIOR,
TANGROWTH,
ELECTIVIRE,
MAGMORTAR,
TOGEKISS,
YANMEGA,
LEAFEON,
GLACEON,
GLISCOR,
MAMOSWINE,
PORYGON_Z,
GALLADE,
PROBOPASS,
DUSKNOIR,
FROSLASS,
ROTOM,
SNIVY,
SERVINE,
SERPERIOR,
TEPIG,
PIGNITE,
EMBOAR,
OSHAWOTT,
DEWOTT,
SAMUROTT,
PATRAT,
WATCHOG,
LILLIPUP,
HERDIER,
STOUTLAND,
PURRLOIN,
LIEPARD,
PANSAGE,
SIMISAGE,
PANSEAR,
SIMISEAR,
PANPOUR,
SIMIPOUR,
MUNNA,
MUSHARNA,
PIDOVE,
TRANQUILL,
UNFEZANT,
BLITZLE,
ZEBSTRIKA,
ROGGENROLA,
BOLDORE,
GIGALITH,
WOOBAT,
SWOOBAT,
DRILBUR,
EXCADRILL,
AUDINO,
TIMBURR,
GURDURR,
CONKELDURR,
TYMPOLE,
PALPITOAD,
SEISMITOAD,
THROH,
SAWK,
SEWADDLE,
SWADLOON,
LEAVANNY,
VENIPEDE,
WHIRLIPEDE,
SCOLIPEDE,
COTTONEE,
WHIMSICOTT,
PETILIL,
LILLIGANT,
BASCULIN,
SANDILE,
KROKOROK,
KROOKODILE,
DARUMAKA,
DARMANITAN,
MARACTUS,
DWEBBLE,
CRUSTLE,
SCRAGGY,
SCRAFTY,
SIGILYPH,
YAMASK,
COFAGRIGUS,
TIRTOUGA,
CARRACOSTA,
ARCHEN,
ARCHEOPS,
TRUBBISH,
GARBODOR,
ZORUA,
ZOROARK,
MINCCINO,
CINCCINO,
GOTHITA,
GOTHORITA,
GOTHITELLE,
SOLOSIS,
DUOSION,
REUNICLUS,
DUCKLETT,
SWANNA,
VANILLITE,
VANILLISH,
VANILLUXE,
DEERLING,
SAWSBUCK,
EMOLGA,
KARRABLAST,
ESCAVALIER,
FOONGUS,
AMOONGUSS,
FRILLISH,
JELLICENT,
ALOMOMOLA,
JOLTIK,
GALVANTULA,
FERROSEED,
FERROTHORN,
KLINK,
KLANG,
KLINKLANG,
TYNAMO,
EELEKTRIK,
EELEKTROSS,
ELGYEM,
BEHEEYEM,
LITWICK,
LAMPENT,
CHANDELURE,
AXEW,
FRAXURE,
HAXORUS,
CUBCHOO,
BEARTIC,
CRYOGONAL,
SHELMET,
ACCELGOR,
STUNFISK,
MIENFOO,
MIENSHAO,
DRUDDIGON,
GOLETT,
GOLURK,
PAWNIARD,
BISHARP,
BOUFFALANT,
RUFFLET,
BRAVIARY,
VULLABY,
MANDIBUZZ,
HEATMOR,
DURANT,
DEINO,
ZWEILOUS,
HYDREIGON,
LARVESTA,
VOLCARONA,
CHESPIN,
QUILLADIN,
CHESNAUGHT,
FENNEKIN,
BRAIXEN,
DELPHOX,
FROAKIE,
FROGADIER,
GRENINJA,
BUNNELBY,
DIGGERSBY,
FLETCHLING,
FLETCHINDER,
TALONFLAME,
SCATTERBUG,
SPEWPA,
VIVILLON,
LITLEO,
PYROAR,
FLABEBE,
FLOETTE,
FLORGES,
SKIDDO,
GOGOAT,
PANCHAM,
PANGORO,
FURFROU,
ESPURR,
MEOWSTIC,
HONEDGE,
DOUBLADE,
AEGISLASH,
SPRITZEE,
AROMATISSE,
SWIRLIX,
SLURPUFF,
INKAY,
MALAMAR,
BINACLE,
BARBARACLE,
SKRELP,
DRAGALGE,
CLAUNCHER,
CLAWITZER,
HELIOPTILE,
HELIOLISK,
TYRUNT,
TYRANTRUM,
AMAURA,
AURORUS,
SYLVEON,
HAWLUCHA,
DEDENNE,
CARBINK,
GOOMY,
SLIGGOO,
GOODRA,
KLEFKI,
PHANTUMP,
TREVENANT,
PUMPKABOO,
GOURGEIST,
BERGMITE,
AVALUGG,
NOIBAT,
NOIVERN,
ROWLET,
DARTRIX,
DECIDUEYE,
LITTEN,
TORRACAT,
INCINEROAR,
POPPLIO,
BRIONNE,
PRIMARINA,
PIKIPEK,
TRUMBEAK,
TOUCANNON,
YUNGOOS,
GUMSHOOS,
GRUBBIN,
CHARJABUG,
VIKAVOLT,
CRABRAWLER,
CRABOMINABLE,
ORICORIO,
CUTIEFLY,
RIBOMBEE,
ROCKRUFF,
LYCANROC,
WISHIWASHI,
MAREANIE,
TOXAPEX,
MUDBRAY,
MUDSDALE,
DEWPIDER,
ARAQUANID,
FOMANTIS,
LURANTIS,
MORELULL,
SHIINOTIC,
SALANDIT,
SALAZZLE,
STUFFUL,
BEWEAR,
BOUNSWEET,
STEENEE,
TSAREENA,
COMFEY,
ORANGURU,
PASSIMIAN,
WIMPOD,
GOLISOPOD,
SANDYGAST,
PALOSSAND,
PYUKUMUKU,
TYPE_NULL,
SILVALLY,
MINIOR,
KOMALA,
TURTONATOR,
TOGEDEMARU,
MIMIKYU,
BRUXISH,
DRAMPA,
DHELMISE,
JANGMO_O,
HAKAMO_O,
KOMMO_O,
TAPU_KOKO,
TAPU_LELE,
TAPU_BULU,
TAPU_FINI,
COSMOG,
COSMOEM,
GROOKEY,
THWACKEY,
RILLABOOM,
SCORBUNNY,
RABOOT,
CINDERACE,
SOBBLE,
DRIZZILE,
INTELEON,
SKWOVET,
GREEDENT,
ROOKIDEE,
CORVISQUIRE,
CORVIKNIGHT,
BLIPBUG,
DOTTLER,
ORBEETLE,
NICKIT,
THIEVUL,
GOSSIFLEUR,
ELDEGOSS,
WOOLOO,
DUBWOOL,
CHEWTLE,
DREDNAW,
YAMPER,
BOLTUND,
ROLYCOLY,
CARKOL,
COALOSSAL,
APPLIN,
FLAPPLE,
APPLETUN,
SILICOBRA,
SANDACONDA,
CRAMORANT,
ARROKUDA,
BARRASKEWDA,
TOXEL,
TOXTRICITY,
SIZZLIPEDE,
CENTISKORCH,
CLOBBOPUS,
GRAPPLOCT,
SINISTEA,
POLTEAGEIST,
HATENNA,
HATTREM,
HATTERENE,
IMPIDIMP,
MORGREM,
GRIMMSNARL,
OBSTAGOON,
PERRSERKER,
CURSOLA,
SIRFETCHD,
MR_RIME,
RUNERIGUS,
MILCERY,
ALCREMIE,
FALINKS,
PINCURCHIN,
SNOM,
FROSMOTH,
STONJOURNER,
EISCUE,
INDEEDEE,
MORPEKO,
CUFANT,
COPPERAJAH,
DRACOZOLT,
ARCTOZOLT,
DRACOVISH,
ARCTOVISH,
DURALUDON,
DREEPY,
DRAKLOAK,
DRAGAPULT,
TRXATU,
};

static const struct ListMenuItem sDebugMenuItems[] =
{
	[DEBUG_MENU_POKE1] = {gDebugText_Golduck, DEBUG_MENU_POKE1},
	[DEBUG_MENU_POKE2] = {gDebugText_Furret, DEBUG_MENU_POKE2},
	[DEBUG_MENU_POKE3] = {gDebugText_Electabuzz, DEBUG_MENU_POKE3},
	[DEBUG_MENU_POKE4] = {gDebugText_Nidoking, DEBUG_MENU_POKE4},
	[DEBUG_MENU_POKE5] = {gDebugText_Nidoqueen, DEBUG_MENU_POKE5},
	[DEBUG_MENU_POKE6] = {gDebugText_Alakazam, DEBUG_MENU_POKE6},
	[DEBUG_MENU_POKE7] = {gDebugText_Ninetales, DEBUG_MENU_POKE7},
	[DEBUG_MENU_POKE8] = {gDebugText_Pidgeot, DEBUG_MENU_POKE8},
	[DEBUG_MENU_POKE9] = {gDebugText_Weak, DEBUG_MENU_POKE9},
	[DEBUG_MENU_POKE10] = {gDebugText_Random, DEBUG_MENU_POKE10},
	[DEBUG_MENU_POKE11] = {gDebugText_MyTeam, DEBUG_MENU_POKE11},
    [DEBUG_MENU_ITEM_CANCEL] = {gDebugText_Cancel, DEBUG_MENU_ITEM_CANCEL},
};


static const struct ListMenuItem sPackPokemonMyTeam[] =
{
     {sDebugText_BULBASAUR, BULBASAUR},

	 {sDebugText_IVYSAUR, IVYSAUR},

	 {sDebugText_VENUSAUR, VENUSAUR},

	 {sDebugText_CHARMANDER, CHARMANDER},

	 {sDebugText_CHARMELEON, CHARMELEON},

	 {sDebugText_CHARIZARD, CHARIZARD},

	 {sDebugText_SQUIRTLE, SQUIRTLE},

	 {sDebugText_WARTORTLE, WARTORTLE},

	 {sDebugText_BLASTOISE, BLASTOISE},

	 {sDebugText_CATERPIE, CATERPIE},

	 {sDebugText_METAPOD, METAPOD},

	 {sDebugText_BUTTERFREE, BUTTERFREE},

	 {sDebugText_WEEDLE, WEEDLE},

	 {sDebugText_KAKUNA, KAKUNA},

	 {sDebugText_BEEDRILL, BEEDRILL},

	 {sDebugText_PIDGEY, PIDGEY},

	 {sDebugText_PIDGEOTTO, PIDGEOTTO},

	 {sDebugText_PIDGEOT, PIDGEOT},

	 {sDebugText_RATTATA, RATTATA},

	 {sDebugText_RATICATE, RATICATE},

	 {sDebugText_SPEAROW, SPEAROW},

	 {sDebugText_FEAROW, FEAROW},

	 {sDebugText_EKANS, EKANS},

	 {sDebugText_ARBOK, ARBOK},

	 {sDebugText_PIKACHU, PIKACHU},

	 {sDebugText_RAICHU, RAICHU},

	 {sDebugText_SANDSHREW, SANDSHREW},

	 {sDebugText_SANDSLASH, SANDSLASH},

	 {sDebugText_NIDORAN_F, NIDORAN_F},

	 {sDebugText_NIDORINA, NIDORINA},

	 {sDebugText_NIDOQUEEN, NIDOQUEEN},

	 {sDebugText_NIDORAN_M, NIDORAN_M},

	 {sDebugText_NIDORINO, NIDORINO},

	 {sDebugText_NIDOKING, NIDOKING},

	 {sDebugText_CLEFAIRY, CLEFAIRY},

	 {sDebugText_CLEFABLE, CLEFABLE},

	 {sDebugText_VULPIX, VULPIX},

	 {sDebugText_NINETALES, NINETALES},

	 {sDebugText_JIGGLYPUFF, JIGGLYPUFF},

	 {sDebugText_WIGGLYTUFF, WIGGLYTUFF},

	 {sDebugText_ZUBAT, ZUBAT},

	 {sDebugText_GOLBAT, GOLBAT},

	 {sDebugText_ODDISH, ODDISH},

	 {sDebugText_GLOOM, GLOOM},

	 {sDebugText_VILEPLUME, VILEPLUME},

	 {sDebugText_PARAS, PARAS},

	 {sDebugText_PARASECT, PARASECT},

	 {sDebugText_VENONAT, VENONAT},

	 {sDebugText_VENOMOTH, VENOMOTH},

	 {sDebugText_DIGLETT, DIGLETT},

	 {sDebugText_DUGTRIO, DUGTRIO},

	 {sDebugText_MEOWTH, MEOWTH},

	 {sDebugText_PERSIAN, PERSIAN},

	 {sDebugText_PSYDUCK, PSYDUCK},

	 {sDebugText_GOLDUCK, GOLDUCK},

	 {sDebugText_MANKEY, MANKEY},

	 {sDebugText_PRIMEAPE, PRIMEAPE},

	 {sDebugText_GROWLITHE, GROWLITHE},

	 {sDebugText_ARCANINE, ARCANINE},

	 {sDebugText_POLIWAG, POLIWAG},

	 {sDebugText_POLIWHIRL, POLIWHIRL},

	 {sDebugText_POLIWRATH, POLIWRATH},

	 {sDebugText_ABRA, ABRA},

	 {sDebugText_KADABRA, KADABRA},

	 {sDebugText_ALAKAZAM, ALAKAZAM},

	 {sDebugText_MACHOP, MACHOP},

	 {sDebugText_MACHOKE, MACHOKE},

	 {sDebugText_MACHAMP, MACHAMP},

	 {sDebugText_BELLSPROUT, BELLSPROUT},

	 {sDebugText_WEEPINBELL, WEEPINBELL},

	 {sDebugText_VICTREEBEL, VICTREEBEL},

	 {sDebugText_TENTACOOL, TENTACOOL},

	 {sDebugText_TENTACRUEL, TENTACRUEL},

	 {sDebugText_GEODUDE, GEODUDE},

	 {sDebugText_GRAVELER, GRAVELER},

	 {sDebugText_GOLEM, GOLEM},

	 {sDebugText_PONYTA, PONYTA},

	 {sDebugText_RAPIDASH, RAPIDASH},

	 {sDebugText_SLOWPOKE, SLOWPOKE},

	 {sDebugText_SLOWBRO, SLOWBRO},

	 {sDebugText_MAGNEMITE, MAGNEMITE},

	 {sDebugText_MAGNETON, MAGNETON},

	 {sDebugText_FARFETCHD, FARFETCHD},

	 {sDebugText_DODUO, DODUO},

	 {sDebugText_DODRIO, DODRIO},

	 {sDebugText_SEEL, SEEL},

	 {sDebugText_DEWGONG, DEWGONG},

	 {sDebugText_GRIMER, GRIMER},

	 {sDebugText_MUK, MUK},

	 {sDebugText_SHELLDER, SHELLDER},

	 {sDebugText_CLOYSTER, CLOYSTER},

	 {sDebugText_GASTLY, GASTLY},

	 {sDebugText_HAUNTER, HAUNTER},

	 {sDebugText_GENGAR, GENGAR},

	 {sDebugText_ONIX, ONIX},

	 {sDebugText_DROWZEE, DROWZEE},

	 {sDebugText_HYPNO, HYPNO},

	 {sDebugText_KRABBY, KRABBY},

	 {sDebugText_KINGLER, KINGLER},

	 {sDebugText_VOLTORB, VOLTORB},

	 {sDebugText_ELECTRODE, ELECTRODE},

	 {sDebugText_EXEGGCUTE, EXEGGCUTE},

	 {sDebugText_EXEGGUTOR, EXEGGUTOR},

	 {sDebugText_CUBONE, CUBONE},

	 {sDebugText_MAROWAK, MAROWAK},

	 {sDebugText_HITMONLEE, HITMONLEE},

	 {sDebugText_HITMONCHAN, HITMONCHAN},

	 {sDebugText_LICKITUNG, LICKITUNG},

	 {sDebugText_KOFFING, KOFFING},

	 {sDebugText_WEEZING, WEEZING},

	 {sDebugText_RHYHORN, RHYHORN},

	 {sDebugText_RHYDON, RHYDON},

	 {sDebugText_CHANSEY, CHANSEY},

	 {sDebugText_TANGELA, TANGELA},

	 {sDebugText_KANGASKHAN, KANGASKHAN},

	 {sDebugText_HORSEA, HORSEA},

	 {sDebugText_SEADRA, SEADRA},

	 {sDebugText_GOLDEEN, GOLDEEN},

	 {sDebugText_SEAKING, SEAKING},

	 {sDebugText_STARYU, STARYU},

	 {sDebugText_STARMIE, STARMIE},

	 {sDebugText_MR_MIME, MR_MIME},

	 {sDebugText_SCYTHER, SCYTHER},

	 {sDebugText_JYNX, JYNX},

	 {sDebugText_ELECTABUZZ, ELECTABUZZ},

	 {sDebugText_MAGMAR, MAGMAR},

	 {sDebugText_PINSIR, PINSIR},

	 {sDebugText_TAUROS, TAUROS},

	 {sDebugText_MAGIKARP, MAGIKARP},

	 {sDebugText_GYARADOS, GYARADOS},

	 {sDebugText_LAPRAS, LAPRAS},

	 {sDebugText_DITTO, DITTO},

	 {sDebugText_EEVEE, EEVEE},

	 {sDebugText_VAPOREON, VAPOREON},

	 {sDebugText_JOLTEON, JOLTEON},

	 {sDebugText_FLAREON, FLAREON},

	 {sDebugText_PORYGON, PORYGON},

	 {sDebugText_OMANYTE, OMANYTE},

	 {sDebugText_OMASTAR, OMASTAR},

	 {sDebugText_KABUTO, KABUTO},

	 {sDebugText_KABUTOPS, KABUTOPS},

	 {sDebugText_AERODACTYL, AERODACTYL},

	 {sDebugText_SNORLAX, SNORLAX},

	 {sDebugText_DRATINI, DRATINI},

	 {sDebugText_DRAGONAIR, DRAGONAIR},

	 {sDebugText_DRAGONITE, DRAGONITE},

	 {sDebugText_CHIKORITA, CHIKORITA},

	 {sDebugText_BAYLEEF, BAYLEEF},

	 {sDebugText_MEGANIUM, MEGANIUM},

	 {sDebugText_CYNDAQUIL, CYNDAQUIL},

	 {sDebugText_QUILAVA, QUILAVA},

	 {sDebugText_TYPHLOSION, TYPHLOSION},

	 {sDebugText_TOTODILE, TOTODILE},

	 {sDebugText_CROCONAW, CROCONAW},

	 {sDebugText_FERALIGATR, FERALIGATR},

	 {sDebugText_SENTRET, SENTRET},

	 {sDebugText_FURRET, FURRET},

	 {sDebugText_HOOTHOOT, HOOTHOOT},

	 {sDebugText_NOCTOWL, NOCTOWL},

	 {sDebugText_LEDYBA, LEDYBA},

	 {sDebugText_LEDIAN, LEDIAN},

	 {sDebugText_SPINARAK, SPINARAK},

	 {sDebugText_ARIADOS, ARIADOS},

	 {sDebugText_CROBAT, CROBAT},

	 {sDebugText_CHINCHOU, CHINCHOU},

	 {sDebugText_LANTURN, LANTURN},

	 {sDebugText_PICHU, PICHU},

	 {sDebugText_CLEFFA, CLEFFA},

	 {sDebugText_IGGLYBUFF, IGGLYBUFF},

	 {sDebugText_TOGEPI, TOGEPI},

	 {sDebugText_TOGETIC, TOGETIC},

	 {sDebugText_NATU, NATU},

	 {sDebugText_XATU, XATU},

	 {sDebugText_MAREEP, MAREEP},

	 {sDebugText_FLAAFFY, FLAAFFY},

	 {sDebugText_AMPHAROS, AMPHAROS},

	 {sDebugText_BELLOSSOM, BELLOSSOM},

	 {sDebugText_MARILL, MARILL},

	 {sDebugText_AZUMARILL, AZUMARILL},

	 {sDebugText_SUDOWOODO, SUDOWOODO},

	 {sDebugText_POLITOED, POLITOED},

	 {sDebugText_HOPPIP, HOPPIP},

	 {sDebugText_SKIPLOOM, SKIPLOOM},

	 {sDebugText_JUMPLUFF, JUMPLUFF},

	 {sDebugText_AIPOM, AIPOM},

	 {sDebugText_SUNKERN, SUNKERN},

	 {sDebugText_SUNFLORA, SUNFLORA},

	 {sDebugText_YANMA, YANMA},

	 {sDebugText_WOOPER, WOOPER},

	 {sDebugText_QUAGSIRE, QUAGSIRE},

	 {sDebugText_ESPEON, ESPEON},

	 {sDebugText_UMBREON, UMBREON},

	 {sDebugText_MURKROW, MURKROW},

	 {sDebugText_SLOWKING, SLOWKING},

	 {sDebugText_MISDREAVUS, MISDREAVUS},

	 {sDebugText_UNOWN, UNOWN},

	 {sDebugText_WOBBUFFET, WOBBUFFET},

	 {sDebugText_GIRAFARIG, GIRAFARIG},

	 {sDebugText_PINECO, PINECO},

	 {sDebugText_FORRETRESS, FORRETRESS},

	 {sDebugText_DUNSPARCE, DUNSPARCE},

	 {sDebugText_GLIGAR, GLIGAR},

	 {sDebugText_STEELIX, STEELIX},

	 {sDebugText_SNUBBULL, SNUBBULL},

	 {sDebugText_GRANBULL, GRANBULL},

	 {sDebugText_QWILFISH, QWILFISH},

	 {sDebugText_SCIZOR, SCIZOR},

	 {sDebugText_SHUCKLE, SHUCKLE},

	 {sDebugText_HERACROSS, HERACROSS},

	 {sDebugText_SNEASEL, SNEASEL},

	 {sDebugText_TEDDIURSA, TEDDIURSA},

	 {sDebugText_URSARING, URSARING},

	 {sDebugText_SLUGMA, SLUGMA},

	 {sDebugText_MAGCARGO, MAGCARGO},

	 {sDebugText_SWINUB, SWINUB},

	 {sDebugText_PILOSWINE, PILOSWINE},

	 {sDebugText_CORSOLA, CORSOLA},

	 {sDebugText_REMORAID, REMORAID},

	 {sDebugText_OCTILLERY, OCTILLERY},

	 {sDebugText_DELIBIRD, DELIBIRD},

	 {sDebugText_MANTINE, MANTINE},

	 {sDebugText_SKARMORY, SKARMORY},

	 {sDebugText_HOUNDOUR, HOUNDOUR},

	 {sDebugText_HOUNDOOM, HOUNDOOM},

	 {sDebugText_KINGDRA, KINGDRA},

	 {sDebugText_PHANPY, PHANPY},

	 {sDebugText_DONPHAN, DONPHAN},

	 {sDebugText_PORYGON2, PORYGON2},

	 {sDebugText_STANTLER, STANTLER},

	 {sDebugText_SMEARGLE, SMEARGLE},

	 {sDebugText_TYROGUE, TYROGUE},

	 {sDebugText_HITMONTOP, HITMONTOP},

	 {sDebugText_SMOOCHUM, SMOOCHUM},

	 {sDebugText_ELEKID, ELEKID},

	 {sDebugText_MAGBY, MAGBY},

	 {sDebugText_MILTANK, MILTANK},

	 {sDebugText_BLISSEY, BLISSEY},

	 {sDebugText_RAIKOU, RAIKOU},

	 {sDebugText_ENTEI, ENTEI},

	 {sDebugText_SUICUNE, SUICUNE},

	 {sDebugText_LARVITAR, LARVITAR},

	 {sDebugText_PUPITAR, PUPITAR},

	 {sDebugText_TYRANITAR, TYRANITAR},

	 {sDebugText_TREECKO, TREECKO},

	 {sDebugText_GROVYLE, GROVYLE},

	 {sDebugText_SCEPTILE, SCEPTILE},

	 {sDebugText_TORCHIC, TORCHIC},

	 {sDebugText_COMBUSKEN, COMBUSKEN},

	 {sDebugText_BLAZIKEN, BLAZIKEN},

	 {sDebugText_MUDKIP, MUDKIP},

	 {sDebugText_MARSHTOMP, MARSHTOMP},

	 {sDebugText_SWAMPERT, SWAMPERT},

	 {sDebugText_POOCHYENA, POOCHYENA},

	 {sDebugText_MIGHTYENA, MIGHTYENA},

	 {sDebugText_ZIGZAGOON, ZIGZAGOON},

	 {sDebugText_LINOONE, LINOONE},

	 {sDebugText_WURMPLE, WURMPLE},

	 {sDebugText_SILCOON, SILCOON},

	 {sDebugText_BEAUTIFLY, BEAUTIFLY},

	 {sDebugText_CASCOON, CASCOON},

	 {sDebugText_DUSTOX, DUSTOX},

	 {sDebugText_LOTAD, LOTAD},

	 {sDebugText_LOMBRE, LOMBRE},

	 {sDebugText_LUDICOLO, LUDICOLO},

	 {sDebugText_SEEDOT, SEEDOT},

	 {sDebugText_NUZLEAF, NUZLEAF},

	 {sDebugText_SHIFTRY, SHIFTRY},

	 {sDebugText_TAILLOW, TAILLOW},

	 {sDebugText_SWELLOW, SWELLOW},

	 {sDebugText_WINGULL, WINGULL},

	 {sDebugText_PELIPPER, PELIPPER},

	 {sDebugText_RALTS, RALTS},

	 {sDebugText_KIRLIA, KIRLIA},

	 {sDebugText_GARDEVOIR, GARDEVOIR},

	 {sDebugText_SURSKIT, SURSKIT},

	 {sDebugText_MASQUERAIN, MASQUERAIN},

	 {sDebugText_SHROOMISH, SHROOMISH},

	 {sDebugText_BRELOOM, BRELOOM},

	 {sDebugText_SLAKOTH, SLAKOTH},

	 {sDebugText_VIGOROTH, VIGOROTH},

	 {sDebugText_SLAKING, SLAKING},

	 {sDebugText_NINCADA, NINCADA},

	 {sDebugText_NINJASK, NINJASK},

	 {sDebugText_SHEDINJA, SHEDINJA},

	 {sDebugText_WHISMUR, WHISMUR},

	 {sDebugText_LOUDRED, LOUDRED},

	 {sDebugText_EXPLOUD, EXPLOUD},

	 {sDebugText_MAKUHITA, MAKUHITA},

	 {sDebugText_HARIYAMA, HARIYAMA},

	 {sDebugText_AZURILL, AZURILL},

	 {sDebugText_NOSEPASS, NOSEPASS},

	 {sDebugText_SKITTY, SKITTY},

	 {sDebugText_DELCATTY, DELCATTY},

	 {sDebugText_SABLEYE, SABLEYE},

	 {sDebugText_MAWILE, MAWILE},

	 {sDebugText_ARON, ARON},

	 {sDebugText_LAIRON, LAIRON},

	 {sDebugText_AGGRON, AGGRON},

	 {sDebugText_MEDITITE, MEDITITE},

	 {sDebugText_MEDICHAM, MEDICHAM},

	 {sDebugText_ELECTRIKE, ELECTRIKE},

	 {sDebugText_MANECTRIC, MANECTRIC},

	 {sDebugText_PLUSLE, PLUSLE},

	 {sDebugText_MINUN, MINUN},

	 {sDebugText_VOLBEAT, VOLBEAT},

	 {sDebugText_ILLUMISE, ILLUMISE},

	 {sDebugText_ROSELIA, ROSELIA},

	 {sDebugText_GULPIN, GULPIN},

	 {sDebugText_SWALOT, SWALOT},

	 {sDebugText_CARVANHA, CARVANHA},

	 {sDebugText_SHARPEDO, SHARPEDO},

	 {sDebugText_WAILMER, WAILMER},

	 {sDebugText_WAILORD, WAILORD},

	 {sDebugText_NUMEL, NUMEL},

	 {sDebugText_CAMERUPT, CAMERUPT},

	 {sDebugText_TORKOAL, TORKOAL},

	 {sDebugText_SPOINK, SPOINK},

	 {sDebugText_GRUMPIG, GRUMPIG},

	 {sDebugText_SPINDA, SPINDA},

	 {sDebugText_TRAPINCH, TRAPINCH},

	 {sDebugText_VIBRAVA, VIBRAVA},

	 {sDebugText_FLYGON, FLYGON},

	 {sDebugText_CACNEA, CACNEA},

	 {sDebugText_CACTURNE, CACTURNE},

	 {sDebugText_SWABLU, SWABLU},

	 {sDebugText_ALTARIA, ALTARIA},

	 {sDebugText_ZANGOOSE, ZANGOOSE},

	 {sDebugText_SEVIPER, SEVIPER},

	 {sDebugText_LUNATONE, LUNATONE},

	 {sDebugText_SOLROCK, SOLROCK},

	 {sDebugText_BARBOACH, BARBOACH},

	 {sDebugText_WHISCASH, WHISCASH},

	 {sDebugText_CORPHISH, CORPHISH},

	 {sDebugText_CRAWDAUNT, CRAWDAUNT},

	 {sDebugText_BALTOY, BALTOY},

	 {sDebugText_CLAYDOL, CLAYDOL},

	 {sDebugText_LILEEP, LILEEP},

	 {sDebugText_CRADILY, CRADILY},

	 {sDebugText_ANORITH, ANORITH},

	 {sDebugText_ARMALDO, ARMALDO},

	 {sDebugText_FEEBAS, FEEBAS},

	 {sDebugText_MILOTIC, MILOTIC},

	 {sDebugText_CASTFORM, CASTFORM},

	 {sDebugText_KECLEON, KECLEON},

	 {sDebugText_SHUPPET, SHUPPET},

	 {sDebugText_BANETTE, BANETTE},

	 {sDebugText_DUSKULL, DUSKULL},

	 {sDebugText_DUSCLOPS, DUSCLOPS},

	 {sDebugText_TROPIUS, TROPIUS},

	 {sDebugText_CHIMECHO, CHIMECHO},

	 {sDebugText_ABSOL, ABSOL},

	 {sDebugText_WYNAUT, WYNAUT},

	 {sDebugText_SNORUNT, SNORUNT},

	 {sDebugText_GLALIE, GLALIE},

	 {sDebugText_SPHEAL, SPHEAL},

	 {sDebugText_SEALEO, SEALEO},

	 {sDebugText_WALREIN, WALREIN},

	 {sDebugText_CLAMPERL, CLAMPERL},

	 {sDebugText_HUNTAIL, HUNTAIL},

	 {sDebugText_GOREBYSS, GOREBYSS},

	 {sDebugText_RELICANTH, RELICANTH},

	 {sDebugText_LUVDISC, LUVDISC},

	 {sDebugText_BAGON, BAGON},

	 {sDebugText_SHELGON, SHELGON},

	 {sDebugText_SALAMENCE, SALAMENCE},

	 {sDebugText_BELDUM, BELDUM},

	 {sDebugText_METANG, METANG},

	 {sDebugText_METAGROSS, METAGROSS},

	 {sDebugText_TURTWIG, TURTWIG},

	 {sDebugText_GROTLE, GROTLE},

	 {sDebugText_TORTERRA, TORTERRA},

	 {sDebugText_CHIMCHAR, CHIMCHAR},

	 {sDebugText_MONFERNO, MONFERNO},

	 {sDebugText_INFERNAPE, INFERNAPE},

	 {sDebugText_PIPLUP, PIPLUP},

	 {sDebugText_PRINPLUP, PRINPLUP},

	 {sDebugText_EMPOLEON, EMPOLEON},

	 {sDebugText_STARLY, STARLY},

	 {sDebugText_STARAVIA, STARAVIA},

	 {sDebugText_STARAPTOR, STARAPTOR},

	 {sDebugText_BIDOOF, BIDOOF},

	 {sDebugText_BIBAREL, BIBAREL},

	 {sDebugText_KRICKETOT, KRICKETOT},

	 {sDebugText_KRICKETUNE, KRICKETUNE},

	 {sDebugText_SHINX, SHINX},

	 {sDebugText_LUXIO, LUXIO},

	 {sDebugText_LUXRAY, LUXRAY},

	 {sDebugText_BUDEW, BUDEW},

	 {sDebugText_ROSERADE, ROSERADE},

	 {sDebugText_CRANIDOS, CRANIDOS},

	 {sDebugText_RAMPARDOS, RAMPARDOS},

	 {sDebugText_SHIELDON, SHIELDON},

	 {sDebugText_BASTIODON, BASTIODON},

	 {sDebugText_BURMY, BURMY},

	 {sDebugText_WORMADAM, WORMADAM},

	 {sDebugText_MOTHIM, MOTHIM},

	 {sDebugText_COMBEE, COMBEE},

	 {sDebugText_VESPIQUEN, VESPIQUEN},

	 {sDebugText_PACHIRISU, PACHIRISU},

	 {sDebugText_BUIZEL, BUIZEL},

	 {sDebugText_FLOATZEL, FLOATZEL},

	 {sDebugText_CHERUBI, CHERUBI},

	 {sDebugText_CHERRIM, CHERRIM},

	 {sDebugText_SHELLOS, SHELLOS},

	 {sDebugText_GASTRODON, GASTRODON},

	 {sDebugText_AMBIPOM, AMBIPOM},

	 {sDebugText_DRIFLOON, DRIFLOON},

	 {sDebugText_DRIFBLIM, DRIFBLIM},

	 {sDebugText_BUNEARY, BUNEARY},

	 {sDebugText_LOPUNNY, LOPUNNY},

	 {sDebugText_MISMAGIUS, MISMAGIUS},

	 {sDebugText_HONCHKROW, HONCHKROW},

	 {sDebugText_GLAMEOW, GLAMEOW},

	 {sDebugText_PURUGLY, PURUGLY},

	 {sDebugText_CHINGLING, CHINGLING},

	 {sDebugText_STUNKY, STUNKY},

	 {sDebugText_SKUNTANK, SKUNTANK},

	 {sDebugText_BRONZOR, BRONZOR},

	 {sDebugText_BRONZONG, BRONZONG},

	 {sDebugText_BONSLY, BONSLY},

	 {sDebugText_MIME_JR, MIME_JR},

	 {sDebugText_HAPPINY, HAPPINY},

	 {sDebugText_CHATOT, CHATOT},

	 {sDebugText_SPIRITOMB, SPIRITOMB},

	 {sDebugText_GIBLE, GIBLE},

	 {sDebugText_GABITE, GABITE},

	 {sDebugText_GARCHOMP, GARCHOMP},

	 {sDebugText_MUNCHLAX, MUNCHLAX},

	 {sDebugText_RIOLU, RIOLU},

	 {sDebugText_LUCARIO, LUCARIO},

	 {sDebugText_HIPPOPOTAS, HIPPOPOTAS},

	 {sDebugText_HIPPOWDON, HIPPOWDON},

	 {sDebugText_SKORUPI, SKORUPI},

	 {sDebugText_DRAPION, DRAPION},

	 {sDebugText_CROAGUNK, CROAGUNK},

	 {sDebugText_TOXICROAK, TOXICROAK},

	 {sDebugText_CARNIVINE, CARNIVINE},

	 {sDebugText_FINNEON, FINNEON},

	 {sDebugText_LUMINEON, LUMINEON},

	 {sDebugText_MANTYKE, MANTYKE},

	 {sDebugText_SNOVER, SNOVER},

	 {sDebugText_ABOMASNOW, ABOMASNOW},

	 {sDebugText_WEAVILE, WEAVILE},

	 {sDebugText_MAGNEZONE, MAGNEZONE},

	 {sDebugText_LICKILICKY, LICKILICKY},

	 {sDebugText_RHYPERIOR, RHYPERIOR},

	 {sDebugText_TANGROWTH, TANGROWTH},

	 {sDebugText_ELECTIVIRE, ELECTIVIRE},

	 {sDebugText_MAGMORTAR, MAGMORTAR},

	 {sDebugText_TOGEKISS, TOGEKISS},

	 {sDebugText_YANMEGA, YANMEGA},

	 {sDebugText_LEAFEON, LEAFEON},

	 {sDebugText_GLACEON, GLACEON},

	 {sDebugText_GLISCOR, GLISCOR},

	 {sDebugText_MAMOSWINE, MAMOSWINE},

	 {sDebugText_PORYGON_Z, PORYGON_Z},

	 {sDebugText_GALLADE, GALLADE},

	 {sDebugText_PROBOPASS, PROBOPASS},

	 {sDebugText_DUSKNOIR, DUSKNOIR},

	 {sDebugText_FROSLASS, FROSLASS},

	 {sDebugText_ROTOM, ROTOM},

	 {sDebugText_SNIVY, SNIVY},

	 {sDebugText_SERVINE, SERVINE},

	 {sDebugText_SERPERIOR, SERPERIOR},

	 {sDebugText_TEPIG, TEPIG},

	 {sDebugText_PIGNITE, PIGNITE},

	 {sDebugText_EMBOAR, EMBOAR},

	 {sDebugText_OSHAWOTT, OSHAWOTT},

	 {sDebugText_DEWOTT, DEWOTT},

	 {sDebugText_SAMUROTT, SAMUROTT},

	 {sDebugText_PATRAT, PATRAT},

	 {sDebugText_WATCHOG, WATCHOG},

	 {sDebugText_LILLIPUP, LILLIPUP},

	 {sDebugText_HERDIER, HERDIER},

	 {sDebugText_STOUTLAND, STOUTLAND},

	 {sDebugText_PURRLOIN, PURRLOIN},

	 {sDebugText_LIEPARD, LIEPARD},

	 {sDebugText_PANSAGE, PANSAGE},

	 {sDebugText_SIMISAGE, SIMISAGE},

	 {sDebugText_PANSEAR, PANSEAR},

	 {sDebugText_SIMISEAR, SIMISEAR},

	 {sDebugText_PANPOUR, PANPOUR},

	 {sDebugText_SIMIPOUR, SIMIPOUR},

	 {sDebugText_MUNNA, MUNNA},

	 {sDebugText_MUSHARNA, MUSHARNA},

	 {sDebugText_PIDOVE, PIDOVE},

	 {sDebugText_TRANQUILL, TRANQUILL},

	 {sDebugText_UNFEZANT, UNFEZANT},

	 {sDebugText_BLITZLE, BLITZLE},

	 {sDebugText_ZEBSTRIKA, ZEBSTRIKA},

	 {sDebugText_ROGGENROLA, ROGGENROLA},

	 {sDebugText_BOLDORE, BOLDORE},

	 {sDebugText_GIGALITH, GIGALITH},

	 {sDebugText_WOOBAT, WOOBAT},

	 {sDebugText_SWOOBAT, SWOOBAT},

	 {sDebugText_DRILBUR, DRILBUR},

	 {sDebugText_EXCADRILL, EXCADRILL},

	 {sDebugText_AUDINO, AUDINO},

	 {sDebugText_TIMBURR, TIMBURR},

	 {sDebugText_GURDURR, GURDURR},

	 {sDebugText_CONKELDURR, CONKELDURR},

	 {sDebugText_TYMPOLE, TYMPOLE},

	 {sDebugText_PALPITOAD, PALPITOAD},

	 {sDebugText_SEISMITOAD, SEISMITOAD},

	 {sDebugText_THROH, THROH},

	 {sDebugText_SAWK, SAWK},

	 {sDebugText_SEWADDLE, SEWADDLE},

	 {sDebugText_SWADLOON, SWADLOON},

	 {sDebugText_LEAVANNY, LEAVANNY},

	 {sDebugText_VENIPEDE, VENIPEDE},

	 {sDebugText_WHIRLIPEDE, WHIRLIPEDE},

	 {sDebugText_SCOLIPEDE, SCOLIPEDE},

	 {sDebugText_COTTONEE, COTTONEE},

	 {sDebugText_WHIMSICOTT, WHIMSICOTT},

	 {sDebugText_PETILIL, PETILIL},

	 {sDebugText_LILLIGANT, LILLIGANT},

	 {sDebugText_BASCULIN, BASCULIN},

	 {sDebugText_SANDILE, SANDILE},

	 {sDebugText_KROKOROK, KROKOROK},

	 {sDebugText_KROOKODILE, KROOKODILE},

	 {sDebugText_DARUMAKA, DARUMAKA},

	 {sDebugText_DARMANITAN, DARMANITAN},

	 {sDebugText_MARACTUS, MARACTUS},

	 {sDebugText_DWEBBLE, DWEBBLE},

	 {sDebugText_CRUSTLE, CRUSTLE},

	 {sDebugText_SCRAGGY, SCRAGGY},

	 {sDebugText_SCRAFTY, SCRAFTY},

	 {sDebugText_SIGILYPH, SIGILYPH},

	 {sDebugText_YAMASK, YAMASK},

	 {sDebugText_COFAGRIGUS, COFAGRIGUS},

	 {sDebugText_TIRTOUGA, TIRTOUGA},

	 {sDebugText_CARRACOSTA, CARRACOSTA},

	 {sDebugText_ARCHEN, ARCHEN},

	 {sDebugText_ARCHEOPS, ARCHEOPS},

	 {sDebugText_TRUBBISH, TRUBBISH},

	 {sDebugText_GARBODOR, GARBODOR},

	 {sDebugText_ZORUA, ZORUA},

	 {sDebugText_ZOROARK, ZOROARK},

	 {sDebugText_MINCCINO, MINCCINO},

	 {sDebugText_CINCCINO, CINCCINO},

	 {sDebugText_GOTHITA, GOTHITA},

	 {sDebugText_GOTHORITA, GOTHORITA},

	 {sDebugText_GOTHITELLE, GOTHITELLE},

	 {sDebugText_SOLOSIS, SOLOSIS},

	 {sDebugText_DUOSION, DUOSION},

	 {sDebugText_REUNICLUS, REUNICLUS},

	 {sDebugText_DUCKLETT, DUCKLETT},

	 {sDebugText_SWANNA, SWANNA},

	 {sDebugText_VANILLITE, VANILLITE},

	 {sDebugText_VANILLISH, VANILLISH},

	 {sDebugText_VANILLUXE, VANILLUXE},

	 {sDebugText_DEERLING, DEERLING},

	 {sDebugText_SAWSBUCK, SAWSBUCK},

	 {sDebugText_EMOLGA, EMOLGA},

	 {sDebugText_KARRABLAST, KARRABLAST},

	 {sDebugText_ESCAVALIER, ESCAVALIER},

	 {sDebugText_FOONGUS, FOONGUS},

	 {sDebugText_AMOONGUSS, AMOONGUSS},

	 {sDebugText_FRILLISH, FRILLISH},

	 {sDebugText_JELLICENT, JELLICENT},

	 {sDebugText_ALOMOMOLA, ALOMOMOLA},

	 {sDebugText_JOLTIK, JOLTIK},

	 {sDebugText_GALVANTULA, GALVANTULA},

	 {sDebugText_FERROSEED, FERROSEED},

	 {sDebugText_FERROTHORN, FERROTHORN},

	 {sDebugText_KLINK, KLINK},

	 {sDebugText_KLANG, KLANG},

	 {sDebugText_KLINKLANG, KLINKLANG},

	 {sDebugText_TYNAMO, TYNAMO},

	 {sDebugText_EELEKTRIK, EELEKTRIK},

	 {sDebugText_EELEKTROSS, EELEKTROSS},

	 {sDebugText_ELGYEM, ELGYEM},

	 {sDebugText_BEHEEYEM, BEHEEYEM},

	 {sDebugText_LITWICK, LITWICK},

	 {sDebugText_LAMPENT, LAMPENT},

	 {sDebugText_CHANDELURE, CHANDELURE},

	 {sDebugText_AXEW, AXEW},

	 {sDebugText_FRAXURE, FRAXURE},

	 {sDebugText_HAXORUS, HAXORUS},

	 {sDebugText_CUBCHOO, CUBCHOO},

	 {sDebugText_BEARTIC, BEARTIC},

	 {sDebugText_CRYOGONAL, CRYOGONAL},

	 {sDebugText_SHELMET, SHELMET},

	 {sDebugText_ACCELGOR, ACCELGOR},

	 {sDebugText_STUNFISK, STUNFISK},

	 {sDebugText_MIENFOO, MIENFOO},

	 {sDebugText_MIENSHAO, MIENSHAO},

	 {sDebugText_DRUDDIGON, DRUDDIGON},

	 {sDebugText_GOLETT, GOLETT},

	 {sDebugText_GOLURK, GOLURK},

	 {sDebugText_PAWNIARD, PAWNIARD},

	 {sDebugText_BISHARP, BISHARP},

	 {sDebugText_BOUFFALANT, BOUFFALANT},

	 {sDebugText_RUFFLET, RUFFLET},

	 {sDebugText_BRAVIARY, BRAVIARY},

	 {sDebugText_VULLABY, VULLABY},

	 {sDebugText_MANDIBUZZ, MANDIBUZZ},

	 {sDebugText_HEATMOR, HEATMOR},

	 {sDebugText_DURANT, DURANT},

	 {sDebugText_DEINO, DEINO},

	 {sDebugText_ZWEILOUS, ZWEILOUS},

	 {sDebugText_HYDREIGON, HYDREIGON},

	 {sDebugText_LARVESTA, LARVESTA},

	 {sDebugText_VOLCARONA, VOLCARONA},

	 {sDebugText_CHESPIN, CHESPIN},

	 {sDebugText_QUILLADIN, QUILLADIN},

	 {sDebugText_CHESNAUGHT, CHESNAUGHT},

	 {sDebugText_FENNEKIN, FENNEKIN},

	 {sDebugText_BRAIXEN, BRAIXEN},

	 {sDebugText_DELPHOX, DELPHOX},

	 {sDebugText_FROAKIE, FROAKIE},

	 {sDebugText_FROGADIER, FROGADIER},

	 {sDebugText_GRENINJA, GRENINJA},

	 {sDebugText_BUNNELBY, BUNNELBY},

	 {sDebugText_DIGGERSBY, DIGGERSBY},

	 {sDebugText_FLETCHLING, FLETCHLING},

	 {sDebugText_FLETCHINDER, FLETCHINDER},

	 {sDebugText_TALONFLAME, TALONFLAME},

	 {sDebugText_SCATTERBUG, SCATTERBUG},

	 {sDebugText_SPEWPA, SPEWPA},

	 {sDebugText_VIVILLON, VIVILLON},

	 {sDebugText_LITLEO, LITLEO},

	 {sDebugText_PYROAR, PYROAR},

	 {sDebugText_FLABEBE, FLABEBE},

	 {sDebugText_FLOETTE, FLOETTE},

	 {sDebugText_FLORGES, FLORGES},

	 {sDebugText_SKIDDO, SKIDDO},

	 {sDebugText_GOGOAT, GOGOAT},

	 {sDebugText_PANCHAM, PANCHAM},

	 {sDebugText_PANGORO, PANGORO},

	 {sDebugText_FURFROU, FURFROU},

	 {sDebugText_ESPURR, ESPURR},

	 {sDebugText_MEOWSTIC, MEOWSTIC},

	 {sDebugText_HONEDGE, HONEDGE},

	 {sDebugText_DOUBLADE, DOUBLADE},

	 {sDebugText_AEGISLASH, AEGISLASH},

	 {sDebugText_SPRITZEE, SPRITZEE},

	 {sDebugText_AROMATISSE, AROMATISSE},

	 {sDebugText_SWIRLIX, SWIRLIX},

	 {sDebugText_SLURPUFF, SLURPUFF},

	 {sDebugText_INKAY, INKAY},

	 {sDebugText_MALAMAR, MALAMAR},

	 {sDebugText_BINACLE, BINACLE},

	 {sDebugText_BARBARACLE, BARBARACLE},

	 {sDebugText_SKRELP, SKRELP},

	 {sDebugText_DRAGALGE, DRAGALGE},

	 {sDebugText_CLAUNCHER, CLAUNCHER},

	 {sDebugText_CLAWITZER, CLAWITZER},

	 {sDebugText_HELIOPTILE, HELIOPTILE},

	 {sDebugText_HELIOLISK, HELIOLISK},

	 {sDebugText_TYRUNT, TYRUNT},

	 {sDebugText_TYRANTRUM, TYRANTRUM},

	 {sDebugText_AMAURA, AMAURA},

	 {sDebugText_AURORUS, AURORUS},

	 {sDebugText_SYLVEON, SYLVEON},

	 {sDebugText_HAWLUCHA, HAWLUCHA},

	 {sDebugText_DEDENNE, DEDENNE},

	 {sDebugText_CARBINK, CARBINK},

	 {sDebugText_GOOMY, GOOMY},

	 {sDebugText_SLIGGOO, SLIGGOO},

	 {sDebugText_GOODRA, GOODRA},

	 {sDebugText_KLEFKI, KLEFKI},

	 {sDebugText_PHANTUMP, PHANTUMP},

	 {sDebugText_TREVENANT, TREVENANT},

	 {sDebugText_PUMPKABOO, PUMPKABOO},

	 {sDebugText_GOURGEIST, GOURGEIST},

	 {sDebugText_BERGMITE, BERGMITE},

	 {sDebugText_AVALUGG, AVALUGG},

	 {sDebugText_NOIBAT, NOIBAT},

	 {sDebugText_NOIVERN, NOIVERN},

	 {sDebugText_ROWLET, ROWLET},

	 {sDebugText_DARTRIX, DARTRIX},

	 {sDebugText_DECIDUEYE, DECIDUEYE},

	 {sDebugText_LITTEN, LITTEN},

	 {sDebugText_TORRACAT, TORRACAT},

	 {sDebugText_INCINEROAR, INCINEROAR},

	 {sDebugText_POPPLIO, POPPLIO},

	 {sDebugText_BRIONNE, BRIONNE},

	 {sDebugText_PRIMARINA, PRIMARINA},

	 {sDebugText_PIKIPEK, PIKIPEK},

	 {sDebugText_TRUMBEAK, TRUMBEAK},

	 {sDebugText_TOUCANNON, TOUCANNON},

	 {sDebugText_YUNGOOS, YUNGOOS},

	 {sDebugText_GUMSHOOS, GUMSHOOS},

	 {sDebugText_GRUBBIN, GRUBBIN},

	 {sDebugText_CHARJABUG, CHARJABUG},

	 {sDebugText_VIKAVOLT, VIKAVOLT},

	 {sDebugText_CRABRAWLER, CRABRAWLER},

	 {sDebugText_CRABOMINABLE, CRABOMINABLE},

	 {sDebugText_ORICORIO, ORICORIO},

	 {sDebugText_CUTIEFLY, CUTIEFLY},

	 {sDebugText_RIBOMBEE, RIBOMBEE},

	 {sDebugText_ROCKRUFF, ROCKRUFF},

	 {sDebugText_LYCANROC, LYCANROC},

	 {sDebugText_WISHIWASHI, WISHIWASHI},

	 {sDebugText_MAREANIE, MAREANIE},

	 {sDebugText_TOXAPEX, TOXAPEX},

	 {sDebugText_MUDBRAY, MUDBRAY},

	 {sDebugText_MUDSDALE, MUDSDALE},

	 {sDebugText_DEWPIDER, DEWPIDER},

	 {sDebugText_ARAQUANID, ARAQUANID},

	 {sDebugText_FOMANTIS, FOMANTIS},

	 {sDebugText_LURANTIS, LURANTIS},

	 {sDebugText_MORELULL, MORELULL},

	 {sDebugText_SHIINOTIC, SHIINOTIC},

	 {sDebugText_SALANDIT, SALANDIT},

	 {sDebugText_SALAZZLE, SALAZZLE},

	 {sDebugText_STUFFUL, STUFFUL},

	 {sDebugText_BEWEAR, BEWEAR},

	 {sDebugText_BOUNSWEET, BOUNSWEET},

	 {sDebugText_STEENEE, STEENEE},

	 {sDebugText_TSAREENA, TSAREENA},

	 {sDebugText_COMFEY, COMFEY},

	 {sDebugText_ORANGURU, ORANGURU},

	 {sDebugText_PASSIMIAN, PASSIMIAN},

	 {sDebugText_WIMPOD, WIMPOD},

	 {sDebugText_GOLISOPOD, GOLISOPOD},

	 {sDebugText_SANDYGAST, SANDYGAST},

	 {sDebugText_PALOSSAND, PALOSSAND},

	 {sDebugText_PYUKUMUKU, PYUKUMUKU},

	 {sDebugText_TYPE_NULL, TYPE_NULL},

	 {sDebugText_SILVALLY, SILVALLY},

	 {sDebugText_MINIOR, MINIOR},

	 {sDebugText_KOMALA, KOMALA},

	 {sDebugText_TURTONATOR, TURTONATOR},

	 {sDebugText_TOGEDEMARU, TOGEDEMARU},

	 {sDebugText_MIMIKYU, MIMIKYU},

	 {sDebugText_BRUXISH, BRUXISH},

	 {sDebugText_DRAMPA, DRAMPA},

	 {sDebugText_DHELMISE, DHELMISE},

	 {sDebugText_JANGMO_O, JANGMO_O},

	 {sDebugText_HAKAMO_O, HAKAMO_O},

	 {sDebugText_KOMMO_O, KOMMO_O},

	 {sDebugText_TAPU_KOKO, TAPU_KOKO},

	 {sDebugText_TAPU_LELE, TAPU_LELE},

	 {sDebugText_TAPU_BULU, TAPU_BULU},

	 {sDebugText_TAPU_FINI, TAPU_FINI},

	 {sDebugText_COSMOG, COSMOG},

	 {sDebugText_COSMOEM, COSMOEM},

	 {sDebugText_GROOKEY, GROOKEY},

	 {sDebugText_THWACKEY, THWACKEY},

	 {sDebugText_RILLABOOM, RILLABOOM},

	 {sDebugText_SCORBUNNY, SCORBUNNY},

	 {sDebugText_RABOOT, RABOOT},

	 {sDebugText_CINDERACE, CINDERACE},

	 {sDebugText_SOBBLE, SOBBLE},

	 {sDebugText_DRIZZILE, DRIZZILE},

	 {sDebugText_INTELEON, INTELEON},

	 {sDebugText_SKWOVET, SKWOVET},

	 {sDebugText_GREEDENT, GREEDENT},

	 {sDebugText_ROOKIDEE, ROOKIDEE},

	 {sDebugText_CORVISQUIRE, CORVISQUIRE},

	 {sDebugText_CORVIKNIGHT, CORVIKNIGHT},

	 {sDebugText_BLIPBUG, BLIPBUG},

	 {sDebugText_DOTTLER, DOTTLER},

	 {sDebugText_ORBEETLE, ORBEETLE},

	 {sDebugText_NICKIT, NICKIT},

	 {sDebugText_THIEVUL, THIEVUL},

	 {sDebugText_GOSSIFLEUR, GOSSIFLEUR},

	 {sDebugText_ELDEGOSS, ELDEGOSS},

	 {sDebugText_WOOLOO, WOOLOO},

	 {sDebugText_DUBWOOL, DUBWOOL},

	 {sDebugText_CHEWTLE, CHEWTLE},

	 {sDebugText_DREDNAW, DREDNAW},

	 {sDebugText_YAMPER, YAMPER},

	 {sDebugText_BOLTUND, BOLTUND},

	 {sDebugText_ROLYCOLY, ROLYCOLY},

	 {sDebugText_CARKOL, CARKOL},

	 {sDebugText_COALOSSAL, COALOSSAL},

	 {sDebugText_APPLIN, APPLIN},

	 {sDebugText_FLAPPLE, FLAPPLE},

	 {sDebugText_APPLETUN, APPLETUN},

	 {sDebugText_SILICOBRA, SILICOBRA},

	 {sDebugText_SANDACONDA, SANDACONDA},

	 {sDebugText_CRAMORANT, CRAMORANT},

	 {sDebugText_ARROKUDA, ARROKUDA},

	 {sDebugText_BARRASKEWDA, BARRASKEWDA},

	 {sDebugText_TOXEL, TOXEL},

	 {sDebugText_TOXTRICITY, TOXTRICITY},

	 {sDebugText_SIZZLIPEDE, SIZZLIPEDE},

	 {sDebugText_CENTISKORCH, CENTISKORCH},

	 {sDebugText_CLOBBOPUS, CLOBBOPUS},

	 {sDebugText_GRAPPLOCT, GRAPPLOCT},

	 {sDebugText_SINISTEA, SINISTEA},

	 {sDebugText_POLTEAGEIST, POLTEAGEIST},

	 {sDebugText_HATENNA, HATENNA},

	 {sDebugText_HATTREM, HATTREM},

	 {sDebugText_HATTERENE, HATTERENE},

	 {sDebugText_IMPIDIMP, IMPIDIMP},

	 {sDebugText_MORGREM, MORGREM},

	 {sDebugText_GRIMMSNARL, GRIMMSNARL},

	 {sDebugText_OBSTAGOON, OBSTAGOON},

	 {sDebugText_PERRSERKER, PERRSERKER},

	 {sDebugText_CURSOLA, CURSOLA},

	 {sDebugText_SIRFETCHD, SIRFETCHD},

	 {sDebugText_MR_RIME, MR_RIME},

	 {sDebugText_RUNERIGUS, RUNERIGUS},

	 {sDebugText_MILCERY, MILCERY},

	 {sDebugText_ALCREMIE, ALCREMIE},

	 {sDebugText_FALINKS, FALINKS},

	 {sDebugText_PINCURCHIN,  PINCURCHIN},

	 {sDebugText_SNOM, SNOM},

	 {sDebugText_FROSMOTH, FROSMOTH},

	 {sDebugText_STONJOURNER, STONJOURNER},

	 {sDebugText_EISCUE, EISCUE},

	 {sDebugText_INDEEDEE, INDEEDEE},

	 {sDebugText_MORPEKO, MORPEKO},

	 {sDebugText_CUFANT, CUFANT},

	 {sDebugText_COPPERAJAH, COPPERAJAH},

	 {sDebugText_DRACOZOLT, DRACOZOLT},

	 {sDebugText_ARCTOZOLT, ARCTOZOLT},

	 {sDebugText_DRACOVISH, DRACOVISH},

	 {sDebugText_ARCTOVISH, ARCTOVISH},

	 {sDebugText_DURALUDON, DURALUDON},

	 {sDebugText_DREEPY, DREEPY},

	 {sDebugText_DRAKLOAK, DRAKLOAK},

	 {sDebugText_DRAGAPULT, DRAGAPULT},

	 {sDebugText_TRXATU, TRXATU}
};

static void (*const sDebugMenuActions[])(u8) =
{
	[DEBUG_MENU_POKE1] = DebugAction_Cancel,
	[DEBUG_MENU_POKE2] = DebugAction_Cancel,
	[DEBUG_MENU_POKE3] = DebugAction_Cancel,
	[DEBUG_MENU_POKE4] = DebugAction_Cancel,
	[DEBUG_MENU_POKE5] = DebugAction_Cancel,
	[DEBUG_MENU_POKE6] = DebugAction_Cancel,
	[DEBUG_MENU_POKE7] = DebugAction_Cancel,
	[DEBUG_MENU_POKE8] = DebugAction_Cancel,
	[DEBUG_MENU_POKE9] = DebugAction_Cancel,
	[DEBUG_MENU_POKE10] = DebugAction_Cancel,
	[DEBUG_MENU_POKE11] = DebugAction_Cancel,
    [DEBUG_MENU_ITEM_CANCEL] = DebugAction_Cancel
};

static const struct WindowTemplate sDebugMenuWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 8,
    .tilemapTop = 4,
    .width = 20,
    .height = 8,
    .paletteNum = 12,
    .baseBlock = 0x0155
};

static const struct ListMenuTemplate sDebugMenuListTemplate =
{
    .items = sDebugMenuItems,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sDebugMenuItems),
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 3,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 1,
    .itemVerticalPadding = 0,
    .scrollMultiple = 1,
	.fontId = FONT_NORMAL,
    .cursorKind = 0
};

static const struct ListMenuTemplate sDebugMenuListTemplate2 =
{
    .items = sPackPokemonMyTeam,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sPackPokemonMyTeam),
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 3,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 1,
    .itemVerticalPadding = 0,
    .scrollMultiple = 2,
	.fontId = FONT_NORMAL,
    .cursorKind = 0
};

#define LIST_MENU_TILE_NUM 10
#define LIST_MENU_PAL_NUM 224

static void LoadMysteryGiftTextboxBorder(u8 bgId);
static void CreateMysteryGiftTask(void);
static void Task_MysteryGift(u8 taskId);

EWRAM_DATA static u8 sDownArrowCounterAndYCoordIdx[8] = {};
EWRAM_DATA bool8 gGiftIsFromEReader = FALSE;

static const u16 sTextboxBorder_Pal[] = INCBIN_U16("graphics/interface/mystery_gift_textbox_border.gbapal");
static const u32 sTextboxBorder_Gfx[] = INCBIN_U32("graphics/interface/mystery_gift_textbox_border.4bpp.lz");

static const u32 sTextboxBorder_Gfx2[] = INCBIN_U32("graphics/interface/giovanni.4bpp.lz");
static const u32 sTextboxBorder_Tilemap2[] = INCBIN_U32("graphics/interface/giovanni.bin.lz");
static const u32 sTextboxBorder_Palette[] = INCBIN_U32("graphics/interface/giovanni.gbapal");

void Debug_ShowMainMenu2(void) {
    struct ListMenuTemplate menuTemplate;
    u8 windowId;
    u8 menuTaskId;
    u8 inputTaskId;

    // create window
    LoadMessageBoxAndBorderGfx();
    windowId = AddWindow(&sDebugMenuWindowTemplate);
    DrawStdWindowFrame(windowId, FALSE);

    // create list menu
    menuTemplate = sDebugMenuListTemplate;
    menuTemplate.windowId = windowId;
    menuTaskId = ListMenuInit(&menuTemplate, 0, 0);

    // draw everything
    CopyWindowToVram(windowId, 3);

    // create input handler task
    inputTaskId = CreateTask(DebugTask_HandleMainMenuInput, 3);
    gTasks[inputTaskId].data[0] = menuTaskId;
    gTasks[inputTaskId].data[1] = windowId;
}

static void Debug_DestroyMainMenu(u8 taskId)
{
    DestroyListMenuTask(gTasks[taskId].data[0], NULL, NULL);
    ClearStdWindowAndFrame(gTasks[taskId].data[1], TRUE);
    RemoveWindow(gTasks[taskId].data[1]);
    DestroyTask(taskId);
}

static void DebugTask_HandleMainMenuInput(u8 taskId)
{
    void (*func)(u8);
    u32 input = ListMenu_ProcessInput(gTasks[taskId].data[0]);

    if (gMain.newKeys & A_BUTTON)
    {
        PlaySE(SE_SELECT);
        if ((func = sDebugMenuActions[input]) != NULL)
            func(taskId);
    }
    else if (gMain.newKeys & B_BUTTON)
    {
        PlaySE(SE_SELECT);
        Debug_DestroyMainMenu(taskId);
    }
}

static void DebugAction_Cancel(u8 taskId)
{
    Debug_DestroyMainMenu(taskId);
}
struct MysteryGiftTaskData
{
    u16 var; // Multipurpose
    u16 unused1;
    u16 unused2;
    u16 unused3;
    u8 state;
    u8 textState;
    u8 unused4;
    u8 unused5;
    bool8 isWonderNews;
    bool8 sourceIsFriend;
    u8 msgId;
    u8 * clientMsg;
};

static const struct BgTemplate sBGTemplates[] = {
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 15,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0x000
    }, {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 14,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0x000
    }, {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 13,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0x000
    }, {
        .bg = 3,
        .charBaseIndex = 1,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0x000
    }
};

static const struct WindowTemplate sMainWindows[] = {
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 12,
        .baseBlock = 0x0013
    }, {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 15,
        .width = 28,
        .height = 4,
        .paletteNum = 12,
        .baseBlock = 0x004f
    }, {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 15,
        .width = 30,
        .height = 5,
        .paletteNum = 13,
        .baseBlock = 0x004f
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sWindowTemplate_YesNoMsg_Wide = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 15,
    .width = 28,
    .height = 4,
    .paletteNum = 12,
    .baseBlock = 0x00e5
};

static const struct WindowTemplate sWindowTemplate_YesNoMsg = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 15,
    .width = 20,
    .height = 4,
    .paletteNum = 12,
    .baseBlock = 0x00e5
};

static const struct WindowTemplate sWindowTemplate_GiftSelect = {
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 15,
    .width = 19,
    .height = 4,
    .paletteNum = 12,
    .baseBlock = 0x00e5
};

static const struct WindowTemplate sWindowTemplate_ThreeOptions = {
    .bg = 0,
    .tilemapLeft = 8,
    .tilemapTop = 6,
    .width = 14,
    .height = 8,
    .paletteNum = 12,
    .baseBlock = 0x0155
};

static const struct WindowTemplate sDebugMenuWindowTemplate2 =
{
    .bg = 0,
    .tilemapLeft = 8,
    .tilemapTop = 6,
    .width = 14,
    .height = 2 * 8,
    .paletteNum = 12,
    .baseBlock = 0x0155
};

static const struct WindowTemplate sWindowTemplate_YesNoBox = {
    .bg = 0,
    .tilemapLeft = 23,
    .tilemapTop = 15,
    .width = 6,
    .height = 4,
    .paletteNum = 12,
    .baseBlock = 0x0155
};

static const struct WindowTemplate sWindowTemplate_GiftSelect_3Options = {
    .bg = 0,
    .tilemapLeft = 22,
    .tilemapTop = 11,
    .width = 7,
    .height = 8,
    .paletteNum = 12,
    .baseBlock = 0x0155
};

static const struct WindowTemplate sWindowTemplate_GiftSelect_2Options = {
    .bg = 0,
    .tilemapLeft = 22,
    .tilemapTop = 13,
    .width = 7,
    .height = 6,
    .paletteNum = 12,
    .baseBlock = 0x0155
};

static const struct WindowTemplate sWindowTemplate_GiftSelect_1Option = {
    .bg = 0,
    .tilemapLeft = 22,
    .tilemapTop = 15,
    .width = 7,
    .height = 4,
    .paletteNum = 12,
    .baseBlock = 0x0155
};

static const struct ListMenuItem sListMenuItems_CardsOrNews[] = {
    { gText_WonderCards,  0 },
    { gText_WonderNews,   1 },
	{ gText_Dlc,          2 },
    { gText_Exit3,        LIST_CANCEL }
};

static const struct ListMenuItem sListMenuItems_WirelessOrFriend[] = {
    { gText_WirelessCommunication,  0 },
    { gText_Friend2,                1 },
    { gText_Cancel2,                LIST_CANCEL }
};

static const struct ListMenuTemplate sListMenuTemplate_ThreeOptions = {
    .items = NULL,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = 4,
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = 0,
    .fontId = FONT_NORMAL,
    .cursorKind = 0
};



static const struct ListMenuItem sListMenuItems_ReceiveSendToss[] = {
    { gText_Receive,  0 },
    { gText_Send,     1 },
    { gText_Toss,     2 },
    { gText_Cancel2,  LIST_CANCEL }
};

static const struct ListMenuItem sListMenuItems_ReceiveToss[] = {
    { gText_Receive,  0 },
    { gText_Toss,     2 },
    { gText_Cancel2,  LIST_CANCEL }
};

static const struct ListMenuItem sListMenuItems_ReceiveSend[] = {
    { gText_Receive,  0 },
    { gText_Send,     1 },
    { gText_Cancel2,  LIST_CANCEL }
};

static const struct ListMenuItem sListMenuItems_Receive[] = {
    { gText_Receive,  0 },
    { gText_Cancel2,  LIST_CANCEL }
};

static const struct ListMenuTemplate sListMenu_ReceiveSendToss = {
    .items = sListMenuItems_ReceiveSendToss,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = 4,
    .maxShowed = 4,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = 0,
    .fontId = FONT_NORMAL,
    .cursorKind = 0
};

static const struct ListMenuTemplate sListMenu_ReceiveToss = {
    .items = sListMenuItems_ReceiveToss,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = 3,
    .maxShowed = 3,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = 0,
    .fontId = FONT_NORMAL,
    .cursorKind = 0
};

static const struct ListMenuTemplate sListMenu_ReceiveSend = {
    .items = sListMenuItems_ReceiveSend,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = 3,
    .maxShowed = 3,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = 0,
    .fontId = FONT_NORMAL,
    .cursorKind = 0
};

static const struct ListMenuTemplate sListMenu_Receive = {
    .items = sListMenuItems_Receive,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .itemPrintFunc = NULL,
    .totalItems = 2,
    .maxShowed = 2,
    .windowId = 0,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 2,
    .fillValue = 1,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = 0,
    .fontId = FONT_NORMAL,
    .cursorKind = 0
};

static const u8 *const sUnusedMenuTexts[] = {
    gText_VarietyOfEventsImportedWireless,
    gText_WonderCardsInPossession,
    gText_ReadNewsThatArrived,
    gText_ReturnToTitle
};

ALIGNED(2) static const u8 sTextColors_TopMenu[]      = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,     TEXT_COLOR_DARK_GRAY };
ALIGNED(2) static const u8 sTextColors_TopMenu_Copy[] = { TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,     TEXT_COLOR_DARK_GRAY };
ALIGNED(2) static const u8 sMG_Ereader_TextColor_2[]  = { TEXT_COLOR_WHITE,       TEXT_COLOR_DARK_GRAY, TEXT_COLOR_LIGHT_GRAY };

static void VBlankCB_MysteryGiftEReader(void)
{
    ProcessSpriteCopyRequests();
    LoadOam();
    TransferPlttBuffer();
}

void CB2_MysteryGiftEReader(void)
{
    RunTasks();
    RunTextPrinters();
    AnimateSprites();
    BuildOamBuffer();
}

static bool32 HandleMysteryGiftOrEReaderSetup(s32 isEReader)
{
    switch (gMain.state)
    {
    case 0:
        SetVBlankCallback(NULL);
        ResetPaletteFade();
        ResetSpriteData();
        FreeAllSpritePalettes();
        ResetTasks();
        ScanlineEffect_Stop();
        ResetBgsAndClearDma3BusyFlags(0);

        InitBgsFromTemplates(0, sBGTemplates, ARRAY_COUNT(sBGTemplates));

        LZ77UnCompVram(sTextboxBorder_Gfx2, (void*) VRAM + 0x4000 * 1);
		LZ77UnCompVram(sTextboxBorder_Tilemap2, (u16*) BG_SCREEN_ADDR(30));
		LoadPalette(sTextboxBorder_Palette, 0x0, 0x20);

        LoadMysteryGiftTextboxBorder(0);
        InitWindows(sMainWindows);
        DeactivateAllTextPrinters();
        ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_WIN1_ON);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        gMain.state++;
        break;
    case 1:
        
        LoadPalette(GetTextWindowPalette(2), 0xd0, 0x20);
        Menu_LoadStdPalAt(0xC0);
        LoadUserWindowBorderGfx(0, 0xA, 0xE0);
        LoadUserWindowBorderGfx_(0, 0x1, 0xF0);
        PrintMysteryGiftOrEReaderTopMenu(isEReader, FALSE);
        gMain.state++;
        break;
    case 2:
        CopyBgTilemapBufferToVram(3);
        CopyBgTilemapBufferToVram(2);
        CopyBgTilemapBufferToVram(1);
        CopyBgTilemapBufferToVram(0);
        gMain.state++;
        break;
    case 3:
        ShowBg(0);
        ShowBg(3);
        PlayBGM(567);
        SetVBlankCallback(VBlankCB_MysteryGiftEReader);
        EnableInterrupts(INTR_FLAG_VBLANK | INTR_FLAG_VCOUNT | INTR_FLAG_TIMER3 | INTR_FLAG_SERIAL);
        return TRUE;
    }

    return FALSE;
}

void CB2_InitMysteryGift(void)
{
    if (HandleMysteryGiftOrEReaderSetup(FALSE))
    {
        SetMainCallback2(CB2_MysteryGiftEReader);
        gGiftIsFromEReader = FALSE;
        CreateMysteryGiftTask();
    }
    RunTasks();
}

void CB2_InitEReader(void)
{
    if (HandleMysteryGiftOrEReaderSetup(TRUE))
    {
        SetMainCallback2(CB2_MysteryGiftEReader);
        gGiftIsFromEReader = TRUE;
        CreateEReaderTask();
    }
}

void MainCB_FreeAllBuffersAndReturnToInitTitleScreen(void)
{
    gGiftIsFromEReader = FALSE;
    FreeAllWindowBuffers();
    Free(GetBgTilemapBuffer(0));
    Free(GetBgTilemapBuffer(1));
    Free(GetBgTilemapBuffer(2));
    Free(GetBgTilemapBuffer(3));
    SetMainCallback2(CB2_InitTitleScreen);
}

void PrintMysteryGiftOrEReaderTopMenu(bool8 isEReader, bool32 useCancel)
{
    const u8 * header;
    const u8 * options;
    FillWindowPixelBuffer(0, 0);
    if (!isEReader)
    {
        header = gText_MysteryGift;
        options = !useCancel ? gText_PickOKExit : gText_PickOKCancel;
    }
    else
    {
        header = gJPText_MysteryGift;
        options = gJPText_DecideStop;
    }

    AddTextPrinterParameterized4(0, FONT_NORMAL, 4, 1, 0, 0, sTextColors_TopMenu, TEXT_SKIP_DRAW, header);
    AddTextPrinterParameterized4(0, FONT_SMALL, GetStringRightAlignXOffset(FONT_SMALL, options, 0xDE), 1, 0, 0, sTextColors_TopMenu, TEXT_SKIP_DRAW, options);
    CopyWindowToVram(0, COPYWIN_GFX);
    PutWindowTilemap(0);
}

void MG_DrawTextBorder(u8 windowId)
{
    DrawTextBorderOuter(windowId, 0x01, 0xF);
}

void MG_DrawCheckerboardPattern(u32 bg)
{
    s32 i = 0, j;

    FillBgTilemapBufferRect(bg, 0x003, 0, 0, 32, 2, 0x11);

    for (i = 0; i < 18; i++)
    {
        for (j = 0; j < 32; j++)
        {
            if ((i & 1) != (j & 1))
                FillBgTilemapBufferRect(bg, 1, j, i + 2, 1, 1, 0x11);
            else
                FillBgTilemapBufferRect(bg, 2, j, i + 2, 1, 1, 0x11);
        }
    }
}

static void ClearScreenInBg0(bool32 ignoreTopTwoRows)
{
    switch (ignoreTopTwoRows)
    {
    case 0:
        FillBgTilemapBufferRect(0, 0, 0, 0, 32, 32, 0x11);
        break;
    case 1:
        FillBgTilemapBufferRect(0, 0, 0, 2, 32, 30, 0x11);
        break;
    }
    CopyBgTilemapBufferToVram(0);
}

void AddTextPrinterToWindow1(const u8 *str)
{
    StringExpandPlaceholders(gStringVar4, str);
    FillWindowPixelBuffer(1, 0x11);
    AddTextPrinterParameterized4(1, FONT_NORMAL, 0, 1, 0, 0, sMG_Ereader_TextColor_2, 0, gStringVar4);
    DrawTextBorderOuter(1, 0x001, 0xF);
    PutWindowTilemap(1);
    CopyWindowToVram(1, COPYWIN_FULL);
}

void AddTextPrinterToWindow2(const u8 *str)
{
    StringExpandPlaceholders(gStringVar4, str);
    FillWindowPixelBuffer(1, 0x11);
    AddTextPrinterParameterized4(1, FONT_SMALL, 0, 1, 0, 0, sMG_Ereader_TextColor_2, 0, gStringVar4);
    DrawTextBorderOuter(1, 0x001, 0xF);
    PutWindowTilemap(1);
    CopyWindowToVram(1, COPYWIN_FULL);
}

static void ClearTextWindow(void)
{
    rbox_fill_rectangle(1);
    ClearWindowTilemap(1);
    CopyWindowToVram(1, COPYWIN_MAP);
}

#define DOWN_ARROW_X 208
#define DOWN_ARROW_Y 20

bool32 PrintMysteryGiftMenuMessage(u8 *textState, const u8 *str)
{
    switch (*textState)
    {
    case 0:
        AddTextPrinterToWindow1(str);
        (*textState)++;
        break;
    case 1:
        DrawDownArrow(1, DOWN_ARROW_X, DOWN_ARROW_Y, 1, FALSE, &sDownArrowCounterAndYCoordIdx[0], &sDownArrowCounterAndYCoordIdx[1]);
        if (({JOY_NEW(A_BUTTON | B_BUTTON);}))
            (*textState)++;
        break;
    case 2:
        DrawDownArrow(1, DOWN_ARROW_X, DOWN_ARROW_Y, 1, TRUE, &sDownArrowCounterAndYCoordIdx[0], &sDownArrowCounterAndYCoordIdx[1]);
        *textState = 0;
        ClearTextWindow();
        return TRUE;
    case 0xFF:
        *textState = 2;
        return FALSE;
    }
    return FALSE;
}

bool32 PrintMysteryGiftMenuMessage2(u8 *textState, const u8 *str)
{
    switch (*textState)
    {
    case 0:
        AddTextPrinterToWindow2(str);
        (*textState)++;
        break;
    case 1:
        DrawDownArrow(1, DOWN_ARROW_X, DOWN_ARROW_Y, 1, FALSE, &sDownArrowCounterAndYCoordIdx[0], &sDownArrowCounterAndYCoordIdx[1]);
        if (({JOY_NEW(A_BUTTON | B_BUTTON);}))
            (*textState)++;
        break;
    case 2:
        DrawDownArrow(1, DOWN_ARROW_X, DOWN_ARROW_Y, 1, TRUE, &sDownArrowCounterAndYCoordIdx[0], &sDownArrowCounterAndYCoordIdx[1]);
        *textState = 0;
        ClearTextWindow();
        return TRUE;
    case 0xFF:
        *textState = 2;
        return FALSE;
    }
    return FALSE;
}

static void HideDownArrow(void)
{
    DrawDownArrow(1, DOWN_ARROW_X, DOWN_ARROW_Y, 1, FALSE, &sDownArrowCounterAndYCoordIdx[0], &sDownArrowCounterAndYCoordIdx[1]);
}

static void ShowDownArrow(void)
{
    DrawDownArrow(1, DOWN_ARROW_X, DOWN_ARROW_Y, 1, TRUE, &sDownArrowCounterAndYCoordIdx[0], &sDownArrowCounterAndYCoordIdx[1]);
}

// Unused
static bool32 HideDownArrowAndWaitButton(u8 * textState)
{
    switch (*textState)
    {
    case 0:
        HideDownArrow();
        if (JOY_NEW(A_BUTTON | B_BUTTON))
            (*textState)++;
        break;
    case 1:
        ShowDownArrow();
        *textState = 0;
        return TRUE;
    }
    return FALSE;
}

static bool32 PrintStringAndWait2Seconds(u8 * counter, const u8 * str)
{
    if (*counter == 0)
        AddTextPrinterToWindow1(str);

    if (++(*counter) > 120)
    {
        *counter = 0;
        ClearTextWindow();
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/* static void DarPokemonBasicosKanto(u8);
static void DarPokemonClassicKanto(u8);
static void DarPokemonRocketGrunt(u8);
static void DarPokemonRocketScientist(u8);
static void DarPokemonRocketAdmin(u8);
static void DarPokemonRainTeam(u8);
static void DarPokemonSunTeam(u8);
static void DarPokemonRareTeam(u8);
static void DarPokemonPopularTeam(u8);
static void DarPokemonWeakTeam(u8);
static void DarPokemonRandomTeam(u8); */

static void DarPokemonBasicosKanto(u8 opcion){
	switch (opcion)
	{
		case 0: //kanto
			ScriptGiveCustomMon(SPECIES_CROBAT,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NASTY_PLOT, MOVE_GIGA_DRAIN,MOVE_CROSS_POISON,MOVE_CONFUSE_RAY,0);
			ScriptGiveCustomMon(SPECIES_HOUNDOOM,63,ITEM_CHARCOAL,26,NATURE_MODEST,0xFF, 0, (u8*)15, MOVE_DESTINY_BOND, MOVE_DARK_PULSE,MOVE_FLAMETHROWER,MOVE_NASTY_PLOT,0);
			ScriptGiveCustomMon(SPECIES_MAROWAK,63,ITEM_THICK_CLUB,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_IRON_HEAD, MOVE_EARTHQUAKE,MOVE_THRASH,MOVE_ENDEAVOR,0);
			ScriptGiveCustomMon(SPECIES_AERODACTYL,63,ITEM_SHARP_BEAK,26,NATURE_JOLLY,0xFF, 0, (u8*)15, MOVE_WIDE_GUARD, MOVE_SKY_ATTACK,MOVE_ROCK_SLIDE,MOVE_HYPER_BEAM,0);
			ScriptGiveCustomMon(SPECIES_VENUSAUR,63,ITEM_MIRACLE_SEED,26,NATURE_HARDY,2, 0, (u8*)15, MOVE_LEAF_STORM, MOVE_BULLDOZE,MOVE_SOLAR_BEAM,MOVE_SUNNY_DAY,0);
			ScriptGiveCustomMon(SPECIES_PORYGON,63,ITEM_UPGRADE,26,NATURE_QUIET,1, 0, (u8*)15, MOVE_SIGNAL_BEAM, MOVE_TRICK_ROOM,MOVE_TRI_ATTACK,MOVE_CONVERSION_2,0);
			ScriptGiveCustomMon(SPECIES_OMASTAR,63,ITEM_MYSTIC_WATER,26,NATURE_QUIET,0, 0, (u8*)15, MOVE_TOXIC_SPIKES, MOVE_SURF,MOVE_ANCIENT_POWER,MOVE_SHELL_SMASH,0);
			ScriptGiveCustomMon(SPECIES_KABUTOPS,63,ITEM_HARD_STONE,26,NATURE_ADAMANT,2, 0, (u8*)15, MOVE_CONFUSE_RAY, MOVE_ROCK_SLIDE,MOVE_AQUA_JET,MOVE_NIGHT_SLASH,0);
			ScriptGiveCustomMon(SPECIES_PINSIR,63,ITEM_SILVER_POWDER,26,NATURE_ADAMANT,2, 0, (u8*)15, MOVE_ME_FIRST, MOVE_ROCK_TOMB,MOVE_X_SCISSOR,MOVE_SUPERPOWER,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,63,ITEM_SUN_STONE,26,NATURE_MODEST,1, 0, (u8*)15, MOVE_STORED_POWER, MOVE_ECHOED_VOICE,MOVE_SWIFT,MOVE_TRUMP_CARD,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,63,ITEM_MOON_STONE,26,NATURE_CAREFUL,0xFF, 0, (u8*)15, MOVE_FAKE_TEARS, MOVE_TOXIC,MOVE_SWIFT,MOVE_HIDDEN_POWER,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,63,ITEM_THUNDER_STONE,26,NATURE_TIMID,0xFF, 0, (u8*)15, MOVE_WISH, MOVE_SHADOW_BALL, MOVE_SWIFT, MOVE_BATON_PASS,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,63,ITEM_WATER_STONE,26,NATURE_CALM,1, 0, (u8*)15, MOVE_YAWN, MOVE_RAIN_DANCE,MOVE_SWIFT,MOVE_REFRESH,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,63,ITEM_FIRE_STONE,26,NATURE_ADAMANT,1, 0, (u8*)15, MOVE_CURSE, MOVE_FACADE,MOVE_BITE,MOVE_DOUBLE_EDGE,0);
		break;
		case 1: //sevii
			ScriptGiveCustomMon(SPECIES_CROBAT,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_CURSE, MOVE_TAILWIND,MOVE_POISON_FANG,MOVE_VENOSHOCK,0);
			ScriptGiveCustomMon(SPECIES_HOUNDOOM,77,ITEM_CHARCOAL,26,NATURE_MODEST,0xFF, 0, (u8*)20, MOVE_COUNTER, MOVE_FIRE_BLAST,MOVE_FLAMETHROWER,MOVE_INFERNO,0);
			ScriptGiveCustomMon(SPECIES_MAROWAK,77,ITEM_THICK_CLUB,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_PERISH_SONG, MOVE_EARTHQUAKE,MOVE_STOMPING_TANTRUM,MOVE_RETALIATE,0);
			ScriptGiveCustomMon(SPECIES_AERODACTYL,77,ITEM_SHARP_BEAK,26,NATURE_JOLLY,0xFF, 0, (u8*)20, MOVE_ROOST, MOVE_FLY,MOVE_ROCK_SLIDE,MOVE_GIGA_IMPACT,0);
			ScriptGiveCustomMon(SPECIES_VENUSAUR,77,ITEM_MIRACLE_SEED,26,NATURE_HARDY,2, 0, (u8*)20, MOVE_WEATHER_BALL, MOVE_FRENZY_PLANT,MOVE_SOLAR_BEAM,MOVE_DOUBLE_EDGE,0);
			ScriptGiveCustomMon(SPECIES_PORYGON,77,ITEM_UPGRADE,26,NATURE_MODEST,1, 0, (u8*)15, MOVE_RECYCLE, MOVE_PSYCHIC,MOVE_TRI_ATTACK,MOVE_CONVERSION,0);
			ScriptGiveCustomMon(SPECIES_OMASTAR,77,ITEM_MYSTIC_WATER,26,NATURE_QUIET,2, 0, (u8*)20, MOVE_SPIKES, MOVE_ICE_BEAM,MOVE_MUD_SHOT,MOVE_BRINE,0);
			ScriptGiveCustomMon(SPECIES_KABUTOPS,77,ITEM_HARD_STONE,26,NATURE_ADAMANT,2, 0, (u8*)20, MOVE_FLAIL, MOVE_ROCK_SLIDE,MOVE_AQUA_JET,MOVE_WRING_OUT,0);
			ScriptGiveCustomMon(SPECIES_PINSIR,77,ITEM_SILVER_POWDER,26,NATURE_ADAMANT,2, 0, (u8*)20, MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE,MOVE_STORM_THROW,MOVE_GUILLOTINE,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,77,ITEM_SUN_STONE,26,NATURE_MODEST,1, 0, (u8*)20, MOVE_STORED_POWER, MOVE_ECHOED_VOICE,MOVE_SWIFT,MOVE_TRUMP_CARD,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,77,ITEM_MOON_STONE,26,NATURE_CAREFUL,0xFF, 0, (u8*)20, MOVE_FAKE_TEARS, MOVE_TOXIC,MOVE_SWIFT,MOVE_HIDDEN_POWER,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,77,ITEM_THUNDER_STONE,26,NATURE_TIMID,0xFF, 0, (u8*)20, MOVE_WISH, MOVE_SHADOW_BALL,MOVE_SWIFT,MOVE_BATON_PASS,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,77,ITEM_WATER_STONE,26,NATURE_CALM,1, 0, (u8*)20, MOVE_YAWN, MOVE_RAIN_DANCE,MOVE_SWIFT,MOVE_REFRESH,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,77,ITEM_FIRE_STONE,26,NATURE_ADAMANT,1, 0, (u8*)20, MOVE_CURSE, MOVE_FACADE,MOVE_BITE,MOVE_DOUBLE_EDGE,0);
			ScriptGiveCustomMon(SPECIES_HITMONCHAN,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_HIGH_JUMP_KICK, MOVE_DRAIN_PUNCH,MOVE_REVENGE,MOVE_CLOSE_COMBAT,0);                  //FALTANTE
			ScriptGiveCustomMon(SPECIES_BLASTOISE,77,ITEM_NONE,26,NATURE_MODEST,0xFF, 0, (u8*)20, MOVE_HYDRO_CANNON, MOVE_ICE_BEAM,MOVE_FLASH_CANNON,MOVE_HYDRO_PUMP,0);
			ScriptGiveCustomMon(SPECIES_ARTICUNO,77,ITEM_LUM_BERRY,26,NATURE_CALM,0xFF, 0, (u8*)20, MOVE_EXTRASENSORY, MOVE_WATER_PULSE,MOVE_ICE_BEAM,MOVE_SHEER_COLD,0);
			ScriptGiveCustomMon(SPECIES_ZAPDOS,77,ITEM_LUM_BERRY,26,NATURE_MODEST,0xFF, 0, (u8*)20, MOVE_EXTRASENSORY, MOVE_CHARGE_BEAM,MOVE_THUNDERBOLT,MOVE_ZAP_CANNON,0);
			ScriptGiveCustomMon(SPECIES_MOLTRES,77,ITEM_LUM_BERRY,26,NATURE_TIMID,0xFF, 0, (u8*)20, MOVE_EXTRASENSORY, MOVE_FLAME_CHARGE,MOVE_FLAMETHROWER,MOVE_BURN_UP,0);	
		break;
		case 2: //johto
			ScriptGiveCustomMon(SPECIES_CROBAT_BOND,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_ZEN_HEADBUTT, MOVE_SUPER_FANG,MOVE_GUNK_SHOT,MOVE_CONFUSE_RAY,1);
			ScriptGiveCustomMon(SPECIES_HOUNDOOM,98,ITEM_CHARCOAL,26,NATURE_MODEST,0xFF, 0, (u8*)31, MOVE_SUCKER_PUNCH, MOVE_SLUDGE_BOMB,MOVE_FLAMETHROWER,MOVE_FIRE_BLAST,0);
			ScriptGiveCustomMon(SPECIES_MAROWAK,98,ITEM_THICK_CLUB,26,NATURE_ADAMANT,0, 0, (u8*)31, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE,MOVE_THRASH,MOVE_DOUBLE_EDGE,0);
			ScriptGiveCustomMon(SPECIES_AERODACTYL,98,ITEM_SHARP_BEAK,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_CURSE, MOVE_STEALTH_ROCK,MOVE_ROCK_SLIDE,MOVE_HYPER_BEAM,0);
			ScriptGiveCustomMon(SPECIES_VENUSAUR,98,ITEM_MIRACLE_SEED,26,NATURE_HARDY,2, 0, (u8*)31, MOVE_GRASSY_TERRAIN, MOVE_ENERGY_BALL,MOVE_PETAL_BLIZZARD,MOVE_PETAL_DANCE,0);
			ScriptGiveCustomMon(SPECIES_PORYGON,98,ITEM_UPGRADE,26,NATURE_JOLLY,1, 0, (u8*)31, MOVE_MAGNET_RISE, MOVE_SHADOW_BALL,MOVE_TRI_ATTACK,MOVE_RECOVER,0);
			ScriptGiveCustomMon(SPECIES_OMASTAR,98,ITEM_MYSTIC_WATER,26,NATURE_MODEST,0, 0, (u8*)31, MOVE_REFLECT_TYPE, MOVE_SURF,MOVE_ANCIENT_POWER,MOVE_HYDRO_PUMP,0);
			ScriptGiveCustomMon(SPECIES_KABUTOPS,98,ITEM_HARD_STONE,26,NATURE_ADAMANT,2, 0, (u8*)31, MOVE_CONFUSE_RAY, MOVE_ROCK_SLIDE,MOVE_AQUA_JET,MOVE_NIGHT_SLASH,0);
			ScriptGiveCustomMon(SPECIES_PINSIR,98,ITEM_SILVER_POWDER,26,NATURE_ADAMANT,2, 0, (u8*)31, MOVE_BUG_BITE, MOVE_EARTHQUAKE,MOVE_X_SCISSOR,MOVE_THRASH,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,98,ITEM_SUN_STONE,26,NATURE_JOLLY,1, 0, (u8*)31, MOVE_STORED_POWER, MOVE_ECHOED_VOICE,MOVE_SWIFT,MOVE_TRUMP_CARD,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,98,ITEM_MOON_STONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_CURSE, MOVE_SHADOW_BALL,MOVE_SWIFT,MOVE_HIDDEN_POWER,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,98,ITEM_THUNDER_STONE,26,NATURE_MODEST,0xFF, 0, (u8*)31, MOVE_WISH, MOVE_SUBSTITUTE,MOVE_SWIFT,MOVE_REFRESH,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,98,ITEM_WATER_STONE,26,NATURE_BOLD,1, 0, (u8*)31, MOVE_ENDURE, MOVE_RAIN_DANCE,MOVE_SWIFT,MOVE_BATON_PASS,0);
			ScriptGiveCustomMon(SPECIES_EEVEE,98,ITEM_FIRE_STONE,26,NATURE_ADAMANT,1, 0, (u8*)31, MOVE_SING, MOVE_FACADE,MOVE_BITE,MOVE_DOUBLE_EDGE,0);
			ScriptGiveCustomMon(SPECIES_ARTICUNO,98,ITEM_LUM_BERRY,26,NATURE_CALM,0xFF, 0, (u8*)31, MOVE_HEAL_BELL, MOVE_FROST_BREATH,MOVE_ICE_BEAM,MOVE_SHEER_COLD,0);
			ScriptGiveCustomMon(SPECIES_ZAPDOS,98,ITEM_AIR_BALLOON,26,NATURE_MODEST,0xFF, 0, (u8*)31, MOVE_BATON_PASS, MOVE_ROOST,MOVE_THUNDERBOLT,MOVE_ZAP_CANNON,0);
			ScriptGiveCustomMon(SPECIES_MOLTRES,98,ITEM_LUM_BERRY,26,NATURE_TIMID,0xFF, 0, (u8*)31, MOVE_MORNING_SUN, MOVE_ROOST,MOVE_FLAMETHROWER,MOVE_BURN_UP,0);
			ScriptGiveCustomMon(SPECIES_ENTEI,98,ITEM_LUM_BERRY,26,NATURE_MILD,0xFF, 0, (u8*)31, MOVE_FLARE_BLITZ, MOVE_STOMPING_TANTRUM,MOVE_SACRED_FIRE,MOVE_ERUPTION,0);
			ScriptGiveCustomMon(SPECIES_SUICUNE,98,ITEM_LUM_BERRY,26,NATURE_CALM,0xFF, 0, (u8*)31, MOVE_AIR_SLASH, MOVE_ICE_BEAM,MOVE_CALM_MIND,MOVE_HYDRO_PUMP,0);
			ScriptGiveCustomMon(SPECIES_RAIKOU,98,ITEM_LUM_BERRY,26,NATURE_MODEST,0xFF, 0, (u8*)31, MOVE_ZAP_CANNON, MOVE_THUNDERBOLT,MOVE_EXTRASENSORY,MOVE_REFLECT,0);
			ScriptGiveCustomMon(SPECIES_BRAVIARY,98,ITEM_SILK_SCARF,26,NATURE_JOLLY,2, 0, (u8*)31, MOVE_ROCK_SLIDE, MOVE_BRAVE_BIRD,MOVE_SUPERPOWER,MOVE_GIGA_IMPACT,0);
			ScriptGiveCustomMon(SPECIES_VIKAVOLT,98,ITEM_CHOICE_SPECS,26,NATURE_MODEST,0xFF, 0, (u8*)31, MOVE_MUD_SHOT, MOVE_THUNDERBOLT,MOVE_BUG_BUZZ,MOVE_ZAP_CANNON,0);
			ScriptGiveCustomMon(SPECIES_MANDIBUZZ,98,ITEM_LEFTOVERS,26,NATURE_IMPISH,1, 0, (u8*)31, MOVE_FOUL_PLAY, MOVE_TAUNT,MOVE_DARK_PULSE,MOVE_NASTY_PLOT,0);
			ScriptGiveCustomMon(SPECIES_PROBOPASS,98,ITEM_LIFE_ORB,26,NATURE_QUIET,2, 0, (u8*)31, MOVE_EXPLOSION, MOVE_DAZZLING_GLEAM,MOVE_POWER_GEM,MOVE_MAGNETIC_FLUX,0);
			ScriptGiveCustomMon(SPECIES_SLAKING,98,ITEM_CHOICE_BAND,26,NATURE_NAUGHTY,2, 0, (u8*)31, MOVE_NIGHT_SLASH, MOVE_POWER_UP_PUNCH,MOVE_SLASH,MOVE_AMNESIA,0);
			ScriptGiveCustomMon(SPECIES_HITMONCHAN,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_HIGH_JUMP_KICK, MOVE_DRAIN_PUNCH,MOVE_REVENGE,MOVE_CLOSE_COMBAT,0);
			ScriptGiveCustomMon(SPECIES_BLASTOISE,98,ITEM_WATER_GEM,26,NATURE_MODEST,0xFF, 0, (u8*)20, MOVE_HYDRO_CANNON, MOVE_ICE_BEAM,MOVE_FLASH_CANNON,MOVE_HYDRO_PUMP,0);
			ScriptGiveCustomMon(SPECIES_LUCARIO,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_BEWEAR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_FLORGES,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_BAXCALIBUR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_EMPOLEON,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_INFERNAPE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DRAGAPULT,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DEOXYS,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_PSYCHIC, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_REGIROCK,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_REGICE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_REGISTEEL,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;		
	};
}

static void DarPokemonClassicKanto(u8 opcion){
	switch(opcion)
	{
		case 0:
			ScriptGiveCustomMon(SPECIES_GENGAR,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ALAKAZAM,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MACHAMP,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_RAICHU,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_KINGLER,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_EXEGGUTOR,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MUK,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GOLEM,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DODRIO,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DRAGONITE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 1:
			ScriptGiveCustomMon(SPECIES_GENGAR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ALAKAZAM,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MACHAMP,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_RAICHU,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_KINGLER,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_EXEGGUTOR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MUK,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GOLEM,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DODRIO,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DRAGONITE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 2:
			ScriptGiveCustomMon(SPECIES_GENGAR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ALAKAZAM,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MACHAMP,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_RAICHU,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_KINGLER,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_EXEGGUTOR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MUK,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GOLEM,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DODRIO,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DRAGONITE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
	}
}

static void DarPokemonRocketGrunt(u8 opcion)
{
	switch(opcion)
	{
		case 0:
			ScriptGiveCustomMon(SPECIES_RATICATE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SANDSLASH,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DUGTRIO,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PERSIAN,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_BEEDRILL,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ARBOK,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PRIMEAPE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_HYPNO,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_QWILFISH,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PARASECT,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 1:
			ScriptGiveCustomMon(SPECIES_RATICATE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SANDSLASH,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DUGTRIO,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PERSIAN,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_BEEDRILL,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ARBOK,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PRIMEAPE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_HYPNO,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_QWILFISH,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GRANBULL,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 2:
			ScriptGiveCustomMon(SPECIES_RATICATE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SANDSLASH,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DUGTRIO,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PERSIAN,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_BEEDRILL,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ARBOK,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PRIMEAPE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_HYPNO,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_QWILFISH,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GRANBULL,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
	}	
}

static void DarPokemonRocketScientist(u8 opcion)
{
	switch(opcion){
		case 0:
			ScriptGiveCustomMon(SPECIES_MAGNEZONE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PORYGON2,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGNETON,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ESPEON,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DITTO,63,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)15, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_ELECTABUZZ,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ELECTRODE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHANSEY,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_JYNX,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VENOMOTH,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 1:
			ScriptGiveCustomMon(SPECIES_MAGNEZONE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PORYGON2,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGNETON,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ESPEON,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DITTO,77,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)20, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_ELECTABUZZ,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ELECTRODE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHANSEY,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_JYNX,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VENOMOTH,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 2:
			ScriptGiveCustomMon(SPECIES_MAGNEZONE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PORYGON2,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGNETON,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ESPEON,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DITTO,98,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)31, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_ELECTABUZZ,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ELECTRODE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHANSEY,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_JYNX,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VENOMOTH,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
	}
}

static void DarPokemonRocketAdmin(u8 opcion)
{
		switch(opcion){
		case 0:
			ScriptGiveCustomMon(SPECIES_RHYPERIOR,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_NIDOKING,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_NIDOQUEEN,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TAUROS,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_WEEZING,63,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)15, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_KANGASKHAN,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ELECTIVIRE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGMORTAR,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_WEAVILE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_HONCHKROW,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
			ScriptGiveCustomMon(SPECIES_RHYPERIOR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_NIDOKING,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_NIDOQUEEN,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TAUROS,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_WEEZING,77,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)20, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_KANGASKHAN,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ELECTIVIRE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGMORTAR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_WEAVILE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_HONCHKROW,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 2:
			ScriptGiveCustomMon(SPECIES_RHYPERIOR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_NIDOKING,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_NIDOQUEEN,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TAUROS,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_WEEZING,98,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)31, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_KANGASKHAN,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ELECTIVIRE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGMORTAR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_WEAVILE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_HONCHKROW,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
	}
}

static void DarPokemonRainTeam(u8 opcion)
{
	switch(opcion){
		case 0:
			ScriptGiveCustomMon(SPECIES_POLITOED,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_KINGDRA,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_STARMIE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GOLDUCK,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TENTACRUEL,63,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)15, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_GYARADOS,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VAPOREON,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_LAPRAS,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DEWGONG,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SEAKING,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 1:
			ScriptGiveCustomMon(SPECIES_POLITOED,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_KINGDRA,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_STARMIE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GOLDUCK,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TENTACRUEL,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GYARADOS,77,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)20, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_VAPOREON,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_LAPRAS,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_AMBIPOM,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_LANTURN,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 2:
			ScriptGiveCustomMon(SPECIES_POLITOED,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_KINGDRA,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_STARMIE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_PELIPPER,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_LUDICOLO,98,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)31, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_GYARADOS,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_HELIOLISK,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_LAPRAS,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_AMBIPOM,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_LANTURN,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
	}
}

static void DarPokemonSunTeam(u8 opcion)
{
	switch(opcion){
		case 0:
			ScriptGiveCustomMon(SPECIES_NINETALES,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGMAR,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ARCANINE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_FLAREON,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_RAPIDASH,63,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)15, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);//FALTANTE
			ScriptGiveCustomMon(SPECIES_JUMPLUFF,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_EXEGGUTOR,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHARIZARD,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VICTREEBEL,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VILEPLUME,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 1:
			ScriptGiveCustomMon(SPECIES_NINETALES,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGMORTAR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ARCANINE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TORKOAL,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_RAPIDASH,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_JUMPLUFF,77,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)20, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);//FALTANTE
			ScriptGiveCustomMon(SPECIES_EXEGGUTOR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHARIZARD,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VICTREEBEL,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VOLCARONA,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 2:
			ScriptGiveCustomMon(SPECIES_NINETALES,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGMORTAR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TORKOAL,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_HELIOLISK,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DARMANITAN,98,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)31, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);//FALTANTE
			ScriptGiveCustomMon(SPECIES_JUMPLUFF,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_EXEGGUTOR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHARIZARD,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VICTREEBEL,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VOLCARONA,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
	}
}

static void DarPokemonRareTeam(u8 opcion)
{
	switch(opcion){
		case 0:
			ScriptGiveCustomMon(SPECIES_DRAGONITE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SNORLAX,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_BLASTOISE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHARIZARD,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_LICKILICKY,63,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)15, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);//FALTANTE
			ScriptGiveCustomMon(SPECIES_CLEFABLE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHANSEY,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TOGETIC,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_HITMONTOP,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SCYTHER,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 1:
			ScriptGiveCustomMon(SPECIES_DRAGONITE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MILOTIC,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_BLASTOISE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHARIZARD,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VOLCARONA,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TRXATU,77,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)20, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);//FALTANTE
			ScriptGiveCustomMon(SPECIES_BLISSEY,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TOGEKISS,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TYRANITAR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SCIZOR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 2:
			ScriptGiveCustomMon(SPECIES_DRAGONITE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_FLY, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MILOTIC,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_BLASTOISE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_CHARIZARD,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VOLCARONA,98,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)31, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);//FALTANTE
			ScriptGiveCustomMon(SPECIES_TRXATU,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_BLISSEY,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TOGEKISS,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TYRANITAR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_DUNSPARCE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
	}
}

static void DarPokemonPopularTeam(u8 opcion)
{
	switch(opcion){
		case 0:
			ScriptGiveCustomMon(SPECIES_FURRET,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TYRANITAR,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ELECTRODE,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GYARADOS,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GOLEM,63,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)15, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_RHYDON,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SNORLAX,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_NIDOKING,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VICTREEBEL,63,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SWELLOW,63,ITEM_TOXIC_ORB,26,NATURE_ADAMANT,1, 0, (u8*)15, MOVE_NONE, MOVE_FACADE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 1:
			ScriptGiveCustomMon(SPECIES_VOLCARONA,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_NIDOKING,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_TYRANITAR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_FURRET,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_ELECTRODE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GYARADOS,77,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)20, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_DRAGONITE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGNEZONE,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MILOTIC,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SCIZOR,77,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
		case 2:
			ScriptGiveCustomMon(SPECIES_NIDOKING,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MAGMORTAR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_RHYPERIOR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_MILOTIC,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_FURRET,98,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)31, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_ELECTRODE,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_METAGROSS,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_SCIZOR,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_VOLCARONA,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
			ScriptGiveCustomMon(SPECIES_GYARADOS,98,ITEM_NONE,26,NATURE_ADAMANT,0xFF, 0, (u8*)31, MOVE_NONE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0); //FALTANTE
		break;
	}
}

static void DarPokemonWeakTeam(u8 opcion){
	switch(opcion){
		case 0:
			ScriptGiveCustomMon(SPECIES_MAGIKARP,63,ITEM_WATER_GEM,26,NATURE_ADAMANT,1, 0, (u8*)15, MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE,MOVE_SPLASH,MOVE_FLAIL,1);
			ScriptGiveCustomMon(SPECIES_DELIBIRD,63,ITEM_CHOICE_BAND,26,NATURE_JOLLY,1, 0, (u8*)15, MOVE_DESTINY_BOND, MOVE_AERIAL_ACE,MOVE_DRILL_PECK,MOVE_PRESENT,0);
			ScriptGiveCustomMon(SPECIES_SMEARGLE,63,ITEM_NONE,26,NATURE_JOLLY,2, 0, (u8*)15, MOVE_SKETCH, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_BELDUM,63,ITEM_SILK_SCARF,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_DOUBLE_EDGE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_DITTO,63,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)15, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_SHEDINJA,63,ITEM_FOCUS_SASH,26,NATURE_ADAMANT,0xFF, 0, (u8*)15, MOVE_SWORDS_DANCE, MOVE_MIMIC,MOVE_SHADOW_SNEAK,MOVE_PHANTOM_FORCE,0);
			ScriptGiveCustomMon(SPECIES_UNOWN,63,ITEM_CHOICE_SCARF,26,NATURE_MODEST,0xFF, 0, (u8*)15, MOVE_HIDDEN_POWER, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_WYNAUT,63,ITEM_CUSTAP_BERRY,26,NATURE_BOLD,0, 0, (u8*)15, MOVE_ENCORE, MOVE_COUNTER,MOVE_MIRROR_COAT,MOVE_DESTINY_BOND,0);
			ScriptGiveCustomMon(SPECIES_PUMPKABOO,63,ITEM_CHOICE_BAND,26,NATURE_ADAMANT,0, 0, (u8*)15, MOVE_DESTINY_BOND, MOVE_TRICK_ROOM,MOVE_TRICK,MOVE_PAIN_SPLIT,0);
			ScriptGiveCustomMon(SPECIES_WIMPOD,63,ITEM_BRIGHT_POWDER,26,NATURE_ADAMANT,0, 0, (u8*)15, MOVE_AQUA_JET, MOVE_DOUBLE_TEAM,MOVE_SAND_ATTACK,MOVE_STRUGGLE_BUG,0);
		break;
		case 1:
			ScriptGiveCustomMon(SPECIES_MAGIKARP,63,ITEM_WATER_GEM,26,NATURE_ADAMANT,1, 0, (u8*)15, MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE,MOVE_BOUNCE,MOVE_FLAIL,1);
			ScriptGiveCustomMon(SPECIES_DELIBIRD,77,ITEM_SHARP_BEAK,26,NATURE_ADAMANT,1, 0, (u8*)20, MOVE_FAKE_OUT, MOVE_POWER_UP_PUNCH,MOVE_DRILL_PECK,MOVE_PRESENT,0);
			ScriptGiveCustomMon(SPECIES_SMEARGLE,77,ITEM_NONE,26,NATURE_JOLLY,2, 0, (u8*)20, MOVE_SKETCH, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_BELDUM,77,ITEM_SILK_SCARF,26,NATURE_ADAMANT,0xFF, 0, (u8*)20, MOVE_DOUBLE_EDGE, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_DITTO,77,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)20, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_IGGLYBUFF,77,ITEM_LEFTOVERS,26,NATURE_MODEST,1, 0, (u8*)20, MOVE_PERISH_SONG, MOVE_WATER_PULSE,MOVE_COPYCAT,MOVE_SWEET_KISS,0);
			ScriptGiveCustomMon(SPECIES_CLEFFA,77,ITEM_TOXIC_ORB,26,NATURE_ADAMANT,1, 0, (u8*)20, MOVE_BELLY_DRUM, MOVE_FACADE,MOVE_SWEET_KISS,MOVE_ENCORE,0);
			ScriptGiveCustomMon(SPECIES_WYNAUT,77,ITEM_CUSTAP_BERRY,26,NATURE_CALM,0, 0, (u8*)20, MOVE_ENCORE, MOVE_COUNTER,MOVE_MIRROR_COAT,MOVE_TICKLE,0);
			ScriptGiveCustomMon(SPECIES_TYROGUE,77,ITEM_BRIGHT_POWDER,26,NATURE_HARDY,0, 0, (u8*)20, MOVE_MACH_PUNCH, MOVE_RETALIATE,MOVE_FAKE_OUT,MOVE_FORESIGHT,0);
			ScriptGiveCustomMon(SPECIES_MUNCHLAX,77,ITEM_STARF_BERRY,26,NATURE_ADAMANT,2, 0, (u8*)20, MOVE_SELF_DESTRUCT, MOVE_SECRET_POWER,MOVE_CHIP_AWAY,MOVE_RECYCLE,0);
		break;
		case 2:
			ScriptGiveCustomMon(SPECIES_MAGIKARP,98,ITEM_WATER_GEM,26,NATURE_ADAMANT,1, 0, (u8*)31, MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE,MOVE_BOUNCE,MOVE_FLAIL,1);
			ScriptGiveCustomMon(SPECIES_TOGEPI,98,ITEM_NONE,26,NATURE_MODEST,1, 0, (u8*)31, MOVE_TRI_ATTACK, MOVE_DAZZLING_GLEAM,MOVE_METRONOME,MOVE_WISH,0);
			ScriptGiveCustomMon(SPECIES_SMEARGLE,98,ITEM_NONE,26,NATURE_JOLLY,2, 0, (u8*)31, MOVE_SKETCH, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_FEEBAS,98,ITEM_QUICK_CLAW,26,NATURE_CALM,2, 0, (u8*)31, MOVE_HYPNOSIS, MOVE_WATER_PULSE,MOVE_TACKLE,MOVE_FLAIL,0);
			ScriptGiveCustomMon(SPECIES_DITTO,98,ITEM_NONE,26,NATURE_HARDY,1, 0, (u8*)31, MOVE_TRANSFORM, MOVE_NONE,MOVE_NONE,MOVE_NONE,0);
			ScriptGiveCustomMon(SPECIES_RIOLU,98,ITEM_BLACK_BELT,26,NATURE_ADAMANT,2, 0, (u8*)31, MOVE_AGILITY, MOVE_POWER_UP_PUNCH,MOVE_FORCE_PALM,MOVE_REVERSAL,0); 
			ScriptGiveCustomMon(SPECIES_SMOOCHUM,98,ITEM_CHOICE_SPECS,26,NATURE_TIMID,2, 0, (u8*)31, MOVE_MIRACLE_EYE, MOVE_RAIN_DANCE,MOVE_PSYCHIC,MOVE_PERISH_SONG,0);
			ScriptGiveCustomMon(SPECIES_FARFETCHD,98,ITEM_LEEK,26,NATURE_ADAMANT,2, 0, (u8*)31, MOVE_LEAF_BLADE, MOVE_U_TURN,MOVE_SLASH,MOVE_AIR_CUTTER,0);
			ScriptGiveCustomMon(SPECIES_TAILLOW,98,ITEM_TOXIC_ORB,26,NATURE_ADAMANT,1, 0, (u8*)31, MOVE_BOOMBURST, MOVE_FACADE,MOVE_BRAVE_BIRD,MOVE_REVERSAL,0);
			ScriptGiveCustomMon(SPECIES_WISHIWASHI,98,ITEM_LEFTOVERS,26,NATURE_SASSY,0xFF, 0, (u8*)31, MOVE_MUDDY_WATER, MOVE_SURF,MOVE_DOUBLE_EDGE,MOVE_ENDEAVOR,0);
		break;
	}
}

const u16 species[] = 
{
	 SPECIES_BULBASAUR,
	 SPECIES_IVYSAUR,
	 SPECIES_VENUSAUR,
	 SPECIES_CHARMANDER,
	 SPECIES_CHARMELEON,
	 SPECIES_CHARIZARD,
	 SPECIES_SQUIRTLE,
	 SPECIES_WARTORTLE,
	 SPECIES_BLASTOISE,
	 SPECIES_CATERPIE,
	 SPECIES_METAPOD,
	 SPECIES_BUTTERFREE,
	 SPECIES_WEEDLE,
	 SPECIES_KAKUNA,
	 SPECIES_BEEDRILL,
	 SPECIES_PIDGEY,
	 SPECIES_PIDGEOTTO,
	 SPECIES_PIDGEOT,
	 SPECIES_RATTATA,
	 SPECIES_RATICATE,
	 SPECIES_SPEAROW,
	 SPECIES_FEAROW,
	 SPECIES_EKANS,
	 SPECIES_ARBOK,
	 SPECIES_PIKACHU,
	 SPECIES_RAICHU,
	 SPECIES_SANDSHREW,
	 SPECIES_SANDSLASH,
	 SPECIES_NIDORAN_F,
	 SPECIES_NIDORINA,
	 SPECIES_NIDOQUEEN,
	 SPECIES_NIDORAN_M,
	 SPECIES_NIDORINO,
	 SPECIES_NIDOKING,
	 SPECIES_CLEFAIRY,
	 SPECIES_CLEFABLE,
	 SPECIES_VULPIX,
	 SPECIES_NINETALES,
	 SPECIES_JIGGLYPUFF,
	 SPECIES_WIGGLYTUFF,
	 SPECIES_ZUBAT,
	 SPECIES_GOLBAT,
	 SPECIES_ODDISH,
	 SPECIES_GLOOM,
	 SPECIES_VILEPLUME,
	 SPECIES_PARAS,
	 SPECIES_PARASECT,
	 SPECIES_VENONAT,
	 SPECIES_VENOMOTH,
	 SPECIES_DIGLETT,
	 SPECIES_DUGTRIO,
	 SPECIES_MEOWTH,
	 SPECIES_PERSIAN,
	 SPECIES_PSYDUCK,
	 SPECIES_GOLDUCK,
	 SPECIES_MANKEY,
	 SPECIES_PRIMEAPE,
	 SPECIES_GROWLITHE,
	 SPECIES_ARCANINE,
	 SPECIES_POLIWAG,
	 SPECIES_POLIWHIRL,
	 SPECIES_POLIWRATH,
	 SPECIES_ABRA,
	 SPECIES_KADABRA,
	 SPECIES_ALAKAZAM,
	 SPECIES_MACHOP,
	 SPECIES_MACHOKE,
	 SPECIES_MACHAMP,
	 SPECIES_BELLSPROUT,
	 SPECIES_WEEPINBELL,
	 SPECIES_VICTREEBEL,
	 SPECIES_TENTACOOL,
	 SPECIES_TENTACRUEL,
	 SPECIES_GEODUDE,
	 SPECIES_GRAVELER,
	 SPECIES_GOLEM,
	 SPECIES_PONYTA,
	 SPECIES_RAPIDASH,
	 SPECIES_SLOWPOKE,
	 SPECIES_SLOWBRO,
	 SPECIES_MAGNEMITE,
	 SPECIES_MAGNETON,
	 SPECIES_FARFETCHD,
	 SPECIES_DODUO,
	 SPECIES_DODRIO,
	 SPECIES_SEEL,
	 SPECIES_DEWGONG,
	 SPECIES_GRIMER,
	 SPECIES_MUK,
	 SPECIES_SHELLDER,
	 SPECIES_CLOYSTER,
	 SPECIES_GASTLY,
	 SPECIES_HAUNTER,
	 SPECIES_GENGAR,
	 SPECIES_ONIX,
	 SPECIES_DROWZEE,
	 SPECIES_HYPNO,
	 SPECIES_KRABBY,
	 SPECIES_KINGLER,
	 SPECIES_VOLTORB,
	 SPECIES_ELECTRODE,
	 SPECIES_EXEGGCUTE,
	 SPECIES_EXEGGUTOR,
	 SPECIES_CUBONE,
	 SPECIES_MAROWAK,
	 SPECIES_HITMONLEE,
	 SPECIES_HITMONCHAN,
	 SPECIES_LICKITUNG,
	 SPECIES_KOFFING,
	 SPECIES_WEEZING,
	 SPECIES_RHYHORN,
	 SPECIES_RHYDON,
	 SPECIES_CHANSEY,
	 SPECIES_TANGELA,
	 SPECIES_KANGASKHAN,
	 SPECIES_HORSEA,
	 SPECIES_SEADRA,
	 SPECIES_GOLDEEN,
	 SPECIES_SEAKING,
	 SPECIES_STARYU,
	 SPECIES_STARMIE,
	 SPECIES_MR_MIME,
	 SPECIES_SCYTHER,
	 SPECIES_JYNX,
	 SPECIES_ELECTABUZZ,
	 SPECIES_MAGMAR,
	 SPECIES_PINSIR,
	 SPECIES_TAUROS,
	 SPECIES_MAGIKARP,
	 SPECIES_GYARADOS,
	 SPECIES_LAPRAS,
	 SPECIES_DITTO,
	 SPECIES_EEVEE,
	 SPECIES_VAPOREON,
	 SPECIES_JOLTEON,
	 SPECIES_FLAREON,
	 SPECIES_PORYGON,
	 SPECIES_OMANYTE,
	 SPECIES_OMASTAR,
	 SPECIES_KABUTO,
	 SPECIES_KABUTOPS,
	 SPECIES_AERODACTYL,
	 SPECIES_SNORLAX,
	 SPECIES_DRATINI,
	 SPECIES_DRAGONAIR,
	 SPECIES_DRAGONITE,
	 SPECIES_CHIKORITA,
	 SPECIES_BAYLEEF,
	 SPECIES_MEGANIUM,
	 SPECIES_CYNDAQUIL,
	 SPECIES_QUILAVA,
	 SPECIES_TYPHLOSION,
	 SPECIES_TOTODILE,
	 SPECIES_CROCONAW,
	 SPECIES_FERALIGATR,
	 SPECIES_SENTRET,
	 SPECIES_FURRET,
	 SPECIES_HOOTHOOT,
	 SPECIES_NOCTOWL,
	 SPECIES_LEDYBA,
	 SPECIES_LEDIAN,
	 SPECIES_SPINARAK,
	 SPECIES_ARIADOS,
	 SPECIES_CROBAT,
	 SPECIES_CHINCHOU,
	 SPECIES_LANTURN,
	 SPECIES_PICHU,
	 SPECIES_CLEFFA,
	 SPECIES_IGGLYBUFF,
	 SPECIES_TOGEPI,
	 SPECIES_TOGETIC,
	 SPECIES_NATU,
	 SPECIES_XATU,
	 SPECIES_MAREEP,
	 SPECIES_FLAAFFY,
	 SPECIES_AMPHAROS,
	 SPECIES_BELLOSSOM,
	 SPECIES_MARILL,
	 SPECIES_AZUMARILL,
	 SPECIES_SUDOWOODO,
	 SPECIES_POLITOED,
	 SPECIES_HOPPIP,
	 SPECIES_SKIPLOOM,
	 SPECIES_JUMPLUFF,
	 SPECIES_AIPOM,
	 SPECIES_SUNKERN,
	 SPECIES_SUNFLORA,
	 SPECIES_YANMA,
	 SPECIES_WOOPER,
	 SPECIES_QUAGSIRE,
	 SPECIES_ESPEON,
	 SPECIES_UMBREON,
	 SPECIES_MURKROW,
	 SPECIES_SLOWKING,
	 SPECIES_MISDREAVUS,
	 SPECIES_UNOWN,
	 SPECIES_WOBBUFFET,
	 SPECIES_GIRAFARIG,
	 SPECIES_PINECO,
	 SPECIES_FORRETRESS,
	 SPECIES_DUNSPARCE,
	 SPECIES_GLIGAR,
	 SPECIES_STEELIX,
	 SPECIES_SNUBBULL,
	 SPECIES_GRANBULL,
	 SPECIES_QWILFISH,
	 SPECIES_SCIZOR,
	 SPECIES_SHUCKLE,
	 SPECIES_HERACROSS,
	 SPECIES_SNEASEL,
	 SPECIES_TEDDIURSA,
	 SPECIES_URSARING,
	 SPECIES_SLUGMA,
	 SPECIES_MAGCARGO,
	 SPECIES_SWINUB,
	 SPECIES_PILOSWINE,
	 SPECIES_CORSOLA,
	 SPECIES_REMORAID,
	 SPECIES_OCTILLERY,
	 SPECIES_DELIBIRD,
	 SPECIES_MANTINE,
	 SPECIES_SKARMORY,
	 SPECIES_HOUNDOUR,
	 SPECIES_HOUNDOOM,
	 SPECIES_KINGDRA,
	 SPECIES_PHANPY,
	 SPECIES_DONPHAN,
	 SPECIES_PORYGON2,
	 SPECIES_STANTLER,
	 SPECIES_SMEARGLE,
	 SPECIES_TYROGUE,
	 SPECIES_HITMONTOP,
	 SPECIES_SMOOCHUM,
	 SPECIES_ELEKID,
	 SPECIES_MAGBY,
	 SPECIES_MILTANK,
	 SPECIES_BLISSEY,
	 SPECIES_RAIKOU,
	 SPECIES_ENTEI,
	 SPECIES_SUICUNE,
	 SPECIES_LARVITAR,
	 SPECIES_PUPITAR,
	 SPECIES_TYRANITAR,
	 SPECIES_TREECKO,
	 SPECIES_GROVYLE,
	 SPECIES_SCEPTILE,
	 SPECIES_TORCHIC,
	 SPECIES_COMBUSKEN,
	 SPECIES_BLAZIKEN,
	 SPECIES_MUDKIP,
	 SPECIES_MARSHTOMP,
	 SPECIES_SWAMPERT,
	 SPECIES_POOCHYENA,
	 SPECIES_MIGHTYENA,
	 SPECIES_ZIGZAGOON,
	 SPECIES_LINOONE,
	 SPECIES_WURMPLE,
	 SPECIES_SILCOON,
	 SPECIES_BEAUTIFLY,
	 SPECIES_CASCOON,
	 SPECIES_DUSTOX,
	 SPECIES_LOTAD,
	 SPECIES_LOMBRE,
	 SPECIES_LUDICOLO,
	 SPECIES_SEEDOT,
	 SPECIES_NUZLEAF,
	 SPECIES_SHIFTRY,
	 SPECIES_TAILLOW,
	 SPECIES_SWELLOW,
	 SPECIES_WINGULL,
	 SPECIES_PELIPPER,
	 SPECIES_RALTS,
	 SPECIES_KIRLIA,
	 SPECIES_GARDEVOIR,
	 SPECIES_SURSKIT,
	 SPECIES_MASQUERAIN,
	 SPECIES_SHROOMISH,
	 SPECIES_BRELOOM,
	 SPECIES_SLAKOTH,
	 SPECIES_VIGOROTH,
	 SPECIES_SLAKING,
	 SPECIES_NINCADA,
	 SPECIES_NINJASK,
	 SPECIES_SHEDINJA,
	 SPECIES_WHISMUR,
	 SPECIES_LOUDRED,
	 SPECIES_EXPLOUD,
	 SPECIES_MAKUHITA,
	 SPECIES_HARIYAMA,
	 SPECIES_AZURILL,
	 SPECIES_NOSEPASS,
	 SPECIES_SKITTY,
	 SPECIES_DELCATTY,
	 SPECIES_SABLEYE,
	 SPECIES_MAWILE,
	 SPECIES_ARON,
	 SPECIES_LAIRON,
	 SPECIES_AGGRON,
	 SPECIES_MEDITITE,
	 SPECIES_MEDICHAM,
	 SPECIES_ELECTRIKE,
	 SPECIES_MANECTRIC,
	 SPECIES_PLUSLE,
	 SPECIES_MINUN,
	 SPECIES_VOLBEAT,
	 SPECIES_ILLUMISE,
	 SPECIES_ROSELIA,
	 SPECIES_GULPIN,
	 SPECIES_SWALOT,
	 SPECIES_CARVANHA,
	 SPECIES_SHARPEDO,
	 SPECIES_WAILMER,
	 SPECIES_WAILORD,
	 SPECIES_NUMEL,
	 SPECIES_CAMERUPT,
	 SPECIES_TORKOAL,
	 SPECIES_SPOINK,
	 SPECIES_GRUMPIG,
	 SPECIES_SPINDA,
	 SPECIES_TRAPINCH,
	 SPECIES_VIBRAVA,
	 SPECIES_FLYGON,
	 SPECIES_CACNEA,
	 SPECIES_CACTURNE,
	 SPECIES_SWABLU,
	 SPECIES_ALTARIA,
	 SPECIES_ZANGOOSE,
	 SPECIES_SEVIPER,
	 SPECIES_LUNATONE,
	 SPECIES_SOLROCK,
	 SPECIES_BARBOACH,
	 SPECIES_WHISCASH,
	 SPECIES_CORPHISH,
	 SPECIES_CRAWDAUNT,
	 SPECIES_BALTOY,
	 SPECIES_CLAYDOL,
	 SPECIES_LILEEP,
	 SPECIES_CRADILY,
	 SPECIES_ANORITH,
	 SPECIES_ARMALDO,
	 SPECIES_FEEBAS,
	 SPECIES_MILOTIC,
	 SPECIES_CASTFORM,
	 SPECIES_KECLEON,
	 SPECIES_SHUPPET,
	 SPECIES_BANETTE,
	 SPECIES_DUSKULL,
	 SPECIES_DUSCLOPS,
	 SPECIES_TROPIUS,
	 SPECIES_CHIMECHO,
	 SPECIES_ABSOL,
	 SPECIES_WYNAUT,
	 SPECIES_SNORUNT,
	 SPECIES_GLALIE,
	 SPECIES_SPHEAL,
	 SPECIES_SEALEO,
	 SPECIES_WALREIN,
	 SPECIES_CLAMPERL,
	 SPECIES_HUNTAIL,
	 SPECIES_GOREBYSS,
	 SPECIES_RELICANTH,
	 SPECIES_LUVDISC,
	 SPECIES_BAGON,
	 SPECIES_SHELGON,
	 SPECIES_SALAMENCE,
	 SPECIES_BELDUM,
	 SPECIES_METANG,
	 SPECIES_METAGROSS,
	 SPECIES_TURTWIG,
	 SPECIES_GROTLE,
	 SPECIES_TORTERRA,
	 SPECIES_CHIMCHAR,
	 SPECIES_MONFERNO,
	 SPECIES_INFERNAPE,
	 SPECIES_PIPLUP,
	 SPECIES_PRINPLUP,
	 SPECIES_EMPOLEON,
	 SPECIES_STARLY,
	 SPECIES_STARAVIA,
	 SPECIES_STARAPTOR,
	 SPECIES_BIDOOF,
	 SPECIES_BIBAREL,
	 SPECIES_KRICKETOT,
	 SPECIES_KRICKETUNE,
	 SPECIES_SHINX,
	 SPECIES_LUXIO,
	 SPECIES_LUXRAY,
	 SPECIES_BUDEW,
	 SPECIES_ROSERADE,
	 SPECIES_CRANIDOS,
	 SPECIES_RAMPARDOS,
	 SPECIES_SHIELDON,
	 SPECIES_BASTIODON,
	 SPECIES_BURMY,
	 SPECIES_WORMADAM,
	 SPECIES_MOTHIM,
	 SPECIES_COMBEE,
	 SPECIES_VESPIQUEN,
	 SPECIES_PACHIRISU,
	 SPECIES_BUIZEL,
	 SPECIES_FLOATZEL,
	 SPECIES_CHERUBI,
	 SPECIES_CHERRIM,
	 SPECIES_SHELLOS,
	 SPECIES_GASTRODON,
	 SPECIES_AMBIPOM,
	 SPECIES_DRIFLOON,
	 SPECIES_DRIFBLIM,
	 SPECIES_BUNEARY,
	 SPECIES_LOPUNNY,
	 SPECIES_MISMAGIUS,
	 SPECIES_HONCHKROW,
	 SPECIES_GLAMEOW,
	 SPECIES_PURUGLY,
	 SPECIES_CHINGLING,
	 SPECIES_STUNKY,
	 SPECIES_SKUNTANK,
	 SPECIES_BRONZOR,
	 SPECIES_BRONZONG,
	 SPECIES_BONSLY,
	 SPECIES_MIME_JR,
	 SPECIES_HAPPINY,
	 SPECIES_CHATOT,
	 SPECIES_SPIRITOMB,
	 SPECIES_GIBLE,
	 SPECIES_GABITE,
	 SPECIES_GARCHOMP,
	 SPECIES_MUNCHLAX,
	 SPECIES_RIOLU,
	 SPECIES_LUCARIO,
	 SPECIES_HIPPOPOTAS,
	 SPECIES_HIPPOWDON,
	 SPECIES_SKORUPI,
	 SPECIES_DRAPION,
	 SPECIES_CROAGUNK,
	 SPECIES_TOXICROAK,
	 SPECIES_CARNIVINE,
	 SPECIES_FINNEON,
	 SPECIES_LUMINEON,
	 SPECIES_MANTYKE,
	 SPECIES_SNOVER,
	 SPECIES_ABOMASNOW,
	 SPECIES_WEAVILE,
	 SPECIES_MAGNEZONE,
	 SPECIES_LICKILICKY,
	 SPECIES_RHYPERIOR,
	 SPECIES_TANGROWTH,
	 SPECIES_ELECTIVIRE,
	 SPECIES_MAGMORTAR,
	 SPECIES_TOGEKISS,
	 SPECIES_YANMEGA,
	 SPECIES_LEAFEON,
	 SPECIES_GLACEON,
	 SPECIES_GLISCOR,
	 SPECIES_MAMOSWINE,
	 SPECIES_PORYGON_Z,
	 SPECIES_GALLADE,
	 SPECIES_PROBOPASS,
	 SPECIES_DUSKNOIR,
	 SPECIES_FROSLASS,
	 SPECIES_ROTOM,
	 SPECIES_SNIVY,
	 SPECIES_SERVINE,
	 SPECIES_SERPERIOR,
	 SPECIES_TEPIG,
	 SPECIES_PIGNITE,
	 SPECIES_EMBOAR,
	 SPECIES_OSHAWOTT,
	 SPECIES_DEWOTT,
	 SPECIES_SAMUROTT,
	 SPECIES_PATRAT,
	 SPECIES_WATCHOG,
	 SPECIES_LILLIPUP,
	 SPECIES_HERDIER,
	 SPECIES_STOUTLAND,
	 SPECIES_PURRLOIN,
	 SPECIES_LIEPARD,
	 SPECIES_PANSAGE,
	 SPECIES_SIMISAGE,
	 SPECIES_PANSEAR,
	 SPECIES_SIMISEAR,
	 SPECIES_PANPOUR,
	 SPECIES_SIMIPOUR,
	 SPECIES_MUNNA,
	 SPECIES_MUSHARNA,
	 SPECIES_PIDOVE,
	 SPECIES_TRANQUILL,
	 SPECIES_UNFEZANT,
	 SPECIES_BLITZLE,
	 SPECIES_ZEBSTRIKA,
	 SPECIES_ROGGENROLA,
	 SPECIES_BOLDORE,
	 SPECIES_GIGALITH,
	 SPECIES_WOOBAT,
	 SPECIES_SWOOBAT,
	 SPECIES_DRILBUR,
	 SPECIES_EXCADRILL,
	 SPECIES_AUDINO,
	 SPECIES_TIMBURR,
	 SPECIES_GURDURR,
	 SPECIES_CONKELDURR,
	 SPECIES_TYMPOLE,
	 SPECIES_PALPITOAD,
	 SPECIES_SEISMITOAD,
	 SPECIES_THROH,
	 SPECIES_SAWK,
	 SPECIES_SEWADDLE,
	 SPECIES_SWADLOON,
	 SPECIES_LEAVANNY,
	 SPECIES_VENIPEDE,
	 SPECIES_WHIRLIPEDE,
	 SPECIES_SCOLIPEDE,
	 SPECIES_COTTONEE,
	 SPECIES_WHIMSICOTT,
	 SPECIES_PETILIL,
	 SPECIES_LILLIGANT,
	 SPECIES_BASCULIN,
	 SPECIES_SANDILE,
	 SPECIES_KROKOROK,
	 SPECIES_KROOKODILE,
	 SPECIES_DARUMAKA,
	 SPECIES_DARMANITAN,
	 SPECIES_MARACTUS,
	 SPECIES_DWEBBLE,
	 SPECIES_CRUSTLE,
	 SPECIES_SCRAGGY,
	 SPECIES_SCRAFTY,
	 SPECIES_SIGILYPH,
	 SPECIES_YAMASK,
	 SPECIES_COFAGRIGUS,
	 SPECIES_TIRTOUGA,
	 SPECIES_CARRACOSTA,
	 SPECIES_ARCHEN,
	 SPECIES_ARCHEOPS,
	 SPECIES_TRUBBISH,
	 SPECIES_GARBODOR,
	 SPECIES_ZORUA,
	 SPECIES_ZOROARK,
	 SPECIES_MINCCINO,
	 SPECIES_CINCCINO,
	 SPECIES_GOTHITA,
	 SPECIES_GOTHORITA,
	 SPECIES_GOTHITELLE,
	 SPECIES_SOLOSIS,
	 SPECIES_DUOSION,
	 SPECIES_REUNICLUS,
	 SPECIES_DUCKLETT,
	 SPECIES_SWANNA,
	 SPECIES_VANILLITE,
	 SPECIES_VANILLISH,
	 SPECIES_VANILLUXE,
	 SPECIES_DEERLING,
	 SPECIES_SAWSBUCK,
	 SPECIES_EMOLGA,
	 SPECIES_KARRABLAST,
	 SPECIES_ESCAVALIER,
	 SPECIES_FOONGUS,
	 SPECIES_AMOONGUSS,
	 SPECIES_FRILLISH,
	 SPECIES_JELLICENT,
	 SPECIES_ALOMOMOLA,
	 SPECIES_JOLTIK,
	 SPECIES_GALVANTULA,
	 SPECIES_FERROSEED,
	 SPECIES_FERROTHORN,
	 SPECIES_KLINK,
	 SPECIES_KLANG,
	 SPECIES_KLINKLANG,
	 SPECIES_TYNAMO,
	 SPECIES_EELEKTRIK,
	 SPECIES_EELEKTROSS,
	 SPECIES_ELGYEM,
	 SPECIES_BEHEEYEM,
	 SPECIES_LITWICK,
	 SPECIES_LAMPENT,
	 SPECIES_CHANDELURE,
	 SPECIES_AXEW,
	 SPECIES_FRAXURE,
	 SPECIES_HAXORUS,
	 SPECIES_CUBCHOO,
	 SPECIES_BEARTIC,
	 SPECIES_CRYOGONAL,
	 SPECIES_SHELMET,
	 SPECIES_ACCELGOR,
	 SPECIES_STUNFISK,
	 SPECIES_MIENFOO,
	 SPECIES_MIENSHAO,
	 SPECIES_DRUDDIGON,
	 SPECIES_GOLETT,
	 SPECIES_GOLURK,
	 SPECIES_PAWNIARD,
	 SPECIES_BISHARP,
	 SPECIES_BOUFFALANT,
	 SPECIES_RUFFLET,
	 SPECIES_BRAVIARY,
	 SPECIES_VULLABY,
	 SPECIES_MANDIBUZZ,
	 SPECIES_HEATMOR,
	 SPECIES_DURANT,
	 SPECIES_DEINO,
	 SPECIES_ZWEILOUS,
	 SPECIES_HYDREIGON,
	 SPECIES_LARVESTA,
	 SPECIES_VOLCARONA,
	 SPECIES_CHESPIN,
	 SPECIES_QUILLADIN,
	 SPECIES_CHESNAUGHT,
	 SPECIES_FENNEKIN,
	 SPECIES_BRAIXEN,
	 SPECIES_DELPHOX,
	 SPECIES_FROAKIE,
	 SPECIES_FROGADIER,
	 SPECIES_GRENINJA,
	 SPECIES_BUNNELBY,
	 SPECIES_DIGGERSBY,
	 SPECIES_FLETCHLING,
	 SPECIES_FLETCHINDER,
	 SPECIES_TALONFLAME,
	 SPECIES_SCATTERBUG,
	 SPECIES_SPEWPA,
	 SPECIES_VIVILLON,
	 SPECIES_LITLEO,
	 SPECIES_PYROAR,
	 SPECIES_FLABEBE,
	 SPECIES_FLOETTE,
	 SPECIES_FLORGES,
	 SPECIES_SKIDDO,
	 SPECIES_GOGOAT,
	 SPECIES_PANCHAM,
	 SPECIES_PANGORO,
	 SPECIES_FURFROU,
	 SPECIES_ESPURR,
	 SPECIES_MEOWSTIC,
	 SPECIES_HONEDGE,
	 SPECIES_DOUBLADE,
	 SPECIES_AEGISLASH,
	 SPECIES_SPRITZEE,
	 SPECIES_AROMATISSE,
	 SPECIES_SWIRLIX,
	 SPECIES_SLURPUFF,
	 SPECIES_INKAY,
	 SPECIES_MALAMAR,
	 SPECIES_BINACLE,
	 SPECIES_BARBARACLE,
	 SPECIES_SKRELP,
	 SPECIES_DRAGALGE,
	 SPECIES_CLAUNCHER,
	 SPECIES_CLAWITZER,
	 SPECIES_HELIOPTILE,
	 SPECIES_HELIOLISK,
	 SPECIES_TYRUNT,
	 SPECIES_TYRANTRUM,
	 SPECIES_AMAURA,
	 SPECIES_AURORUS,
	 SPECIES_SYLVEON,
	 SPECIES_HAWLUCHA,
	 SPECIES_DEDENNE,
	 SPECIES_CARBINK,
	 SPECIES_GOOMY,
	 SPECIES_SLIGGOO,
	 SPECIES_GOODRA,
	 SPECIES_KLEFKI,
	 SPECIES_PHANTUMP,
	 SPECIES_TREVENANT,
	 SPECIES_PUMPKABOO,
	 SPECIES_GOURGEIST,
	 SPECIES_BERGMITE,
	 SPECIES_AVALUGG,
	 SPECIES_NOIBAT,
	 SPECIES_NOIVERN,
	 SPECIES_ROWLET,
	 SPECIES_DARTRIX,
	 SPECIES_DECIDUEYE,
	 SPECIES_LITTEN,
	 SPECIES_TORRACAT,
	 SPECIES_INCINEROAR,
	 SPECIES_POPPLIO,
	 SPECIES_BRIONNE,
	 SPECIES_PRIMARINA,
	 SPECIES_PIKIPEK,
	 SPECIES_TRUMBEAK,
	 SPECIES_TOUCANNON,
	 SPECIES_YUNGOOS,
	 SPECIES_GUMSHOOS,
	 SPECIES_GRUBBIN,
	 SPECIES_CHARJABUG,
	 SPECIES_VIKAVOLT,
	 SPECIES_CRABRAWLER,
	 SPECIES_CRABOMINABLE,
	 SPECIES_ORICORIO,
	 SPECIES_CUTIEFLY,
	 SPECIES_RIBOMBEE,
	 SPECIES_ROCKRUFF,
	 SPECIES_LYCANROC,
	 SPECIES_WISHIWASHI,
	 SPECIES_MAREANIE,
	 SPECIES_TOXAPEX,
	 SPECIES_MUDBRAY,
	 SPECIES_MUDSDALE,
	 SPECIES_DEWPIDER,
	 SPECIES_ARAQUANID,
	 SPECIES_FOMANTIS,
	 SPECIES_LURANTIS,
	 SPECIES_MORELULL,
	 SPECIES_SHIINOTIC,
	 SPECIES_SALANDIT,
	 SPECIES_SALAZZLE,
	 SPECIES_STUFFUL,
	 SPECIES_BEWEAR,
	 SPECIES_BOUNSWEET,
	 SPECIES_STEENEE,
	 SPECIES_TSAREENA,
	 SPECIES_COMFEY,
	 SPECIES_ORANGURU,
	 SPECIES_PASSIMIAN,
	 SPECIES_WIMPOD,
	 SPECIES_GOLISOPOD,
	 SPECIES_SANDYGAST,
	 SPECIES_PALOSSAND,
	 SPECIES_PYUKUMUKU,
	 SPECIES_TYPE_NULL,
	 SPECIES_SILVALLY,
	 SPECIES_MINIOR,
	 SPECIES_KOMALA,
	 SPECIES_TURTONATOR,
	 SPECIES_TOGEDEMARU,
	 SPECIES_MIMIKYU,
	 SPECIES_BRUXISH,
	 SPECIES_DRAMPA,
	 SPECIES_DHELMISE,
	 SPECIES_JANGMO_O,
	 SPECIES_HAKAMO_O,
	 SPECIES_KOMMO_O,
	 SPECIES_TAPU_KOKO,
	 SPECIES_TAPU_LELE,
	 SPECIES_TAPU_BULU,
	 SPECIES_TAPU_FINI,
	 SPECIES_COSMOG,
	 SPECIES_COSMOEM,
	 SPECIES_GROOKEY,
	 SPECIES_THWACKEY,
	 SPECIES_RILLABOOM,
	 SPECIES_SCORBUNNY,
	 SPECIES_RABOOT,
	 SPECIES_CINDERACE,
	 SPECIES_SOBBLE,
	 SPECIES_DRIZZILE,
	 SPECIES_INTELEON,
	 SPECIES_SKWOVET,
	 SPECIES_GREEDENT,
	 SPECIES_ROOKIDEE,
	 SPECIES_CORVISQUIRE,
	 SPECIES_CORVIKNIGHT,
	 SPECIES_BLIPBUG,
	 SPECIES_DOTTLER,
	 SPECIES_ORBEETLE,
	 SPECIES_NICKIT,
	 SPECIES_THIEVUL,
	 SPECIES_GOSSIFLEUR,
	 SPECIES_ELDEGOSS,
	 SPECIES_WOOLOO,
	 SPECIES_DUBWOOL,
	 SPECIES_CHEWTLE,
	 SPECIES_DREDNAW,
	 SPECIES_YAMPER,
	 SPECIES_BOLTUND,
	 SPECIES_ROLYCOLY,
	 SPECIES_CARKOL,
	 SPECIES_COALOSSAL,
	 SPECIES_APPLIN,
	 SPECIES_FLAPPLE,
	 SPECIES_APPLETUN,
	 SPECIES_SILICOBRA,
	 SPECIES_SANDACONDA,
	 SPECIES_CRAMORANT,
	 SPECIES_ARROKUDA,
	 SPECIES_BARRASKEWDA,
	 SPECIES_TOXEL,
	 SPECIES_TOXTRICITY,
	 SPECIES_SIZZLIPEDE,
	 SPECIES_CENTISKORCH,
	 SPECIES_CLOBBOPUS,
	 SPECIES_GRAPPLOCT,
	 SPECIES_SINISTEA,
	 SPECIES_POLTEAGEIST,
	 SPECIES_HATENNA,
	 SPECIES_HATTREM,
	 SPECIES_HATTERENE,
	 SPECIES_IMPIDIMP,
	 SPECIES_MORGREM,
	 SPECIES_GRIMMSNARL,
	 SPECIES_OBSTAGOON,
	 SPECIES_PERRSERKER,
	 SPECIES_CURSOLA,
	 SPECIES_SIRFETCHD,
	 SPECIES_MR_RIME,
	 SPECIES_RUNERIGUS,
	 SPECIES_MILCERY,
	 SPECIES_ALCREMIE,
	 SPECIES_FALINKS,
	 SPECIES_PINCURCHIN, 
	 SPECIES_SNOM,
	 SPECIES_FROSMOTH,
	 SPECIES_STONJOURNER,
	 SPECIES_EISCUE,
	 SPECIES_INDEEDEE,
	 SPECIES_MORPEKO,
	 SPECIES_CUFANT,
	 SPECIES_COPPERAJAH,
	 SPECIES_DRACOZOLT,
	 SPECIES_ARCTOZOLT,
	 SPECIES_DRACOVISH,
	 SPECIES_ARCTOVISH,
	 SPECIES_DURALUDON,
	 SPECIES_DREEPY,
	 SPECIES_DRAKLOAK,
	 SPECIES_DRAGAPULT,
	 SPECIES_TRXATU,
};
	

u16 generarSpeciesAleatoria()
{
	u16 indice = Random() % (sizeof(species) / sizeof(species[0]));
	u16 palabra = species[indice];
	
	return palabra;
}

static void DarPokemonRandomTeam(u8 opcion)
{
	switch(opcion)
	{
		case 0:
			ScriptGiveMon(SPECIES_CROBAT,63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),63,ITEM_NONE,0,0,0);
		break;
		case 1:
			ScriptGiveMon(SPECIES_CROBAT,77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),77,ITEM_NONE,0,0,0);
		break;
		case 2:
			ScriptGiveMon(SPECIES_CROBAT_BOND,98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
			ScriptGiveMon(generarSpeciesAleatoria(),98,ITEM_NONE,0,0,0);
		break;
	}
}

static u32 MysteryGift_HandleThreeOptionMenu(u8 * unused0, u16 * unused1, u8 whichMenu)
{
    struct ListMenuTemplate listMenuTemplate = sListMenuTemplate_ThreeOptions;
    struct WindowTemplate windowTemplate = sWindowTemplate_ThreeOptions;
    s32 width;
    s32 response;


        listMenuTemplate.items = sListMenuItems_CardsOrNews;


    width = Intl_GetListMenuWidth(&listMenuTemplate);
    if (width & 1)
        width++;

    windowTemplate.width = width;
    if (width < 30)
        windowTemplate.tilemapLeft = (30 - width) / 2;
    else
        windowTemplate.tilemapLeft = 0;

    response = DoMysteryGiftListMenu(&windowTemplate, &listMenuTemplate, 1, LIST_MENU_TILE_NUM, LIST_MENU_PAL_NUM);
    if (response != LIST_NOTHING_CHOSEN)
    {
        ClearWindowTilemap(2);
        CopyWindowToVram(2, COPYWIN_MAP);
    }
    return response;
}

u32 MenuPersonalizado(void)
{
	struct WindowTemplate windowTemplate = sDebugMenuWindowTemplate;
	struct ListMenuTemplate listMenuTemplate = sDebugMenuListTemplate;
	s32 width;
	s32 response;
    
	width = Intl_GetListMenuWidth(&listMenuTemplate);
	if (width & 1)
        width++;
	response = DoMysteryGiftListMenu(&windowTemplate, &listMenuTemplate, 1, LIST_MENU_TILE_NUM, LIST_MENU_PAL_NUM);
	if(response != LIST_NOTHING_CHOSEN)
	{
		ClearWindowTilemap(2);
		CopyWindowToVram(2, COPYWIN_MAP);
	}
	return response;
}


u32 MenuPersonalizado2(void)
{
	struct WindowTemplate windowTemplate = sDebugMenuWindowTemplate;
	struct ListMenuTemplate listMenuTemplate = sDebugMenuListTemplate2;
	s32 width;
	s32 response;
    
	width = Intl_GetListMenuWidth(&listMenuTemplate);
	if (width & 1)
        width++;
	response = DoMysteryGiftListMenu(&windowTemplate, &listMenuTemplate, 1, LIST_MENU_TILE_NUM, LIST_MENU_PAL_NUM);
	if(response != LIST_NOTHING_CHOSEN)
	{
		ClearWindowTilemap(2);
		CopyWindowToVram(2, COPYWIN_MAP);
	}
	return response;
}

s8 DoMysteryGiftYesNo(u8 * textState, u16 * windowId, bool8 yesNoBoxPlacement, const u8 * str)
{
    struct WindowTemplate windowTemplate;
    s8 input;

    switch (*textState)
    {
    case 0:
        // Print question message
        StringExpandPlaceholders(gStringVar4, str);
        if (yesNoBoxPlacement == 0)
            *windowId = AddWindow(&sWindowTemplate_YesNoMsg_Wide);
        else
            *windowId = AddWindow(&sWindowTemplate_YesNoMsg);
        FillWindowPixelBuffer(*windowId, 0x11);
        AddTextPrinterParameterized4(*windowId, FONT_SMALL, 0, 1, 0, 0, sMG_Ereader_TextColor_2, 0, gStringVar4);
        DrawTextBorderOuter(*windowId, 0x001, 0x0F);
        CopyWindowToVram(*windowId, COPYWIN_GFX);
        PutWindowTilemap(*windowId);
        (*textState)++;
        break;
    case 1:
        // Create Yes/No
        windowTemplate = sWindowTemplate_YesNoBox;
        if (yesNoBoxPlacement == 0)
            windowTemplate.tilemapTop = 9;
        else
            windowTemplate.tilemapTop = 15;
        CreateYesNoMenu(&windowTemplate, 10, 14, 0);
        (*textState)++;
        break;
    case 2:
        // Handle Yes/No input
        input = Menu_ProcessInputNoWrapClearOnChoose();
        if (input == MENU_B_PRESSED || input == 0 || input == 1)
        {
            *textState = 0;
            rbox_fill_rectangle(*windowId);
            ClearWindowTilemap(*windowId);
            CopyWindowToVram(*windowId, COPYWIN_MAP);
            RemoveWindow(*windowId);
            return input;
        }
        break;
    case 0xFF:
        *textState = 0;
        rbox_fill_rectangle(*windowId);
        ClearWindowTilemap(*windowId);
        CopyWindowToVram(*windowId, COPYWIN_MAP);
        RemoveWindow(*windowId);
        return MENU_B_PRESSED;
    }

    return MENU_NOTHING_CHOSEN;
}

// Handle the "Receive/Send/Toss" menu that appears when selecting Wonder Card/News
static s32 HandleGiftSelectMenu(u8 * textState, u16 * windowId, bool32 cannotToss, bool32 cannotSend)
{
    struct WindowTemplate windowTemplate;
    s32 input;

    switch (*textState)
    {
    case 0:
        // Print menu message
        if (!cannotToss)
            StringExpandPlaceholders(gStringVar4, gText_WhatToDoWithCards);
        else
            StringExpandPlaceholders(gStringVar4, gText_WhatToDoWithNews);
        *windowId = AddWindow(&sWindowTemplate_GiftSelect);
        FillWindowPixelBuffer(*windowId, 0x11);
        AddTextPrinterParameterized4(*windowId, FONT_NORMAL, 0, 1, 0, 0, sMG_Ereader_TextColor_2, 0, gStringVar4);
        DrawTextBorderOuter(*windowId, 0x001, 0x0F);
        CopyWindowToVram(*windowId, COPYWIN_GFX);
        PutWindowTilemap(*windowId);
        (*textState)++;
        break;
    case 1:
        windowTemplate = sWindowTemplate_YesNoBox;
        if (cannotSend)
        {
            if (!cannotToss)
                input = DoMysteryGiftListMenu(&sWindowTemplate_GiftSelect_2Options, &sListMenu_ReceiveToss, 1, LIST_MENU_TILE_NUM, LIST_MENU_PAL_NUM);
            else
                input = DoMysteryGiftListMenu(&sWindowTemplate_GiftSelect_1Option, &sListMenu_Receive, 1, LIST_MENU_TILE_NUM, LIST_MENU_PAL_NUM);
        }
        else
        {
            if (!cannotToss)
                input = DoMysteryGiftListMenu(&sWindowTemplate_GiftSelect_3Options, &sListMenu_ReceiveSendToss, 1, LIST_MENU_TILE_NUM, LIST_MENU_PAL_NUM);
            else
                input = DoMysteryGiftListMenu(&sWindowTemplate_GiftSelect_2Options, &sListMenu_ReceiveSend, 1, LIST_MENU_TILE_NUM, LIST_MENU_PAL_NUM);
        }
        if (input != LIST_NOTHING_CHOSEN)
        {
            *textState = 0;
            rbox_fill_rectangle(*windowId);
            ClearWindowTilemap(*windowId);
            CopyWindowToVram(*windowId, COPYWIN_MAP);
            RemoveWindow(*windowId);
            return input;
        }
        break;
    case 0xFF:
        *textState = 0;
        rbox_fill_rectangle(*windowId);
        ClearWindowTilemap(*windowId);
        CopyWindowToVram(*windowId, COPYWIN_MAP);
        RemoveWindow(*windowId);
        return LIST_CANCEL;
    }

    return LIST_NOTHING_CHOSEN;
}

static bool32 ValidateCardOrNews(bool32 isWonderNews)
{
    if (!isWonderNews)
        return ValidateSavedWonderCard();
    else
        return ValidateSavedWonderNews();
}

static bool32 HandleLoadWonderCardOrNews(u8 * state, bool32 isWonderNews)
{
    switch (*state)
    {
    case 0:
        if (!isWonderNews)
            WonderCard_Init(GetSavedWonderCard(), GetSavedWonderCardMetadata());
        else
            WonderNews_Init(GetSavedWonderNews());
        (*state)++;
        break;
    case 1:
        if (!isWonderNews)
        {
            if (!WonderCard_Enter())
                return FALSE;
        }
        else
        {
            if (!WonderNews_Enter())
                return FALSE;
        }
        *state = 0;
        return TRUE;
    }

    return FALSE;
}

static bool32 ClearSavedNewsOrCard(bool32 isWonderNews)
{
    if (!isWonderNews)
        ClearSavedWonderCardAndRelated();
    else
        ClearSavedWonderNewsAndRelated();
    return TRUE;
}

static bool32 ExitWonderCardOrNews(bool32 isWonderNews, bool32 useCancel)
{
    if (!isWonderNews)
    {
        if (WonderCard_Exit(useCancel))
        {
            WonderCard_Destroy();
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
    else
    {
        if (WonderNews_Exit(useCancel))
        {
            WonderNews_Destroy();
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

static s32 AskDiscardGift(u8 * textState, u16 * windowId, bool32 isWonderNews)
{
    if (!isWonderNews)
        return DoMysteryGiftYesNo(textState, windowId, TRUE, gText_PostgameKanto4);
    else
        return DoMysteryGiftYesNo(textState, windowId, TRUE, gText_PostgameKanto4);
}

static bool32 PrintThrownAway(u8 * textState, bool32 isWonderNews)
{
    if (!isWonderNews)
        return PrintMysteryGiftMenuMessage(textState, gText_WonderCardThrownAway);
    else
        return PrintMysteryGiftMenuMessage(textState, gText_WonderNewsThrownAway);
}

static bool32 SaveOnMysteryGiftMenu(u8 * state)
{
    switch (*state)
    {
    case 0:
        AddTextPrinterToWindow1(gText_DataWillBeSaved);
        (*state)++;
        break;
    case 1:
        TrySavingData(SAVE_NORMAL);
        (*state)++;
        break;
    case 2:
        AddTextPrinterToWindow1(gText_SaveCompletedPressA);
        (*state)++;
        break;
    case 3:
        if (JOY_NEW(A_BUTTON | B_BUTTON))
            (*state)++;
        break;
    case 4:
        *state = 0;
        ClearTextWindow();
        return TRUE;
    }

    return FALSE;
}

static const u8 * GetClientResultMessage(bool32 * successMsg, bool8 isWonderNews, bool8 sourceIsFriend, u32 msgId)
{
    const u8 * msg = NULL;
    *successMsg = FALSE;

    switch (msgId)
    {
    case CLI_MSG_NOTHING_SENT:
        *successMsg = FALSE;
        msg = gText_NothingSentOver;
        break;
    case CLI_MSG_RECORD_UPLOADED:
        *successMsg = FALSE;
        msg = gText_RecordUploadedViaWireless;
        break;
    case CLI_MSG_CARD_RECEIVED:
        *successMsg = TRUE;
        msg = !sourceIsFriend ? gText_WonderCardReceived : gText_WonderCardReceivedFrom;
        break;
    case CLI_MSG_NEWS_RECEIVED:
        *successMsg = TRUE;
        msg = !sourceIsFriend ? gText_WonderNewsReceived : gText_WonderNewsReceivedFrom;
        break;
    case CLI_MSG_STAMP_RECEIVED:
        *successMsg = TRUE;
        msg = gText_NewStampReceived;
        break;
    case CLI_MSG_HAD_CARD:
        *successMsg = FALSE;
        msg = gText_AlreadyHadCard;
        break;
    case CLI_MSG_HAD_STAMP:
        *successMsg = FALSE;
        msg = gText_AlreadyHadStamp;
        break;
    case CLI_MSG_HAD_NEWS:
        *successMsg = FALSE;
        msg = gText_AlreadyHadNews;
        break;
    case CLI_MSG_NO_ROOM_STAMPS:
        *successMsg = FALSE;
        msg = gText_NoMoreRoomForStamps;
        break;
    case CLI_MSG_COMM_CANCELED:
        *successMsg = FALSE;
        msg = gText_CommunicationCanceled;
        break;
    case CLI_MSG_CANT_ACCEPT:
        *successMsg = FALSE;
        msg = !isWonderNews ? gText_CantAcceptCardFromTrainer : gText_CantAcceptNewsFromTrainer;
        break;
    case CLI_MSG_COMM_ERROR:
        *successMsg = FALSE;
        msg = gText_CommunicationError;
        break;
    case CLI_MSG_TRAINER_RECEIVED:
        *successMsg = TRUE;
        msg = gText_NewTrainerReceived;
        break;
    case CLI_MSG_BUFFER_SUCCESS:
        *successMsg = TRUE;
        // msg is NULL, use buffer
        break;
    case CLI_MSG_BUFFER_FAILURE:
        *successMsg = FALSE;
        // msg is NULL, use buffer
        break;
    }

    return msg;
}

static bool32 PrintSuccessMessage(u8 * state, const u8 * msg, u16 * timer)
{
    switch (*state)
    {
    case 0:
        if (msg != NULL)
            AddTextPrinterToWindow1(msg);
        PlayFanfare(MUS_OBTAIN_ITEM);
        *timer = 0;
        (*state)++;
        break;
    case 1:
        if (++(*timer) > 240)
            (*state)++;
        break;
    case 2:
        if (IsFanfareTaskInactive())
        {
            *state = 0;
            ClearTextWindow();
            return TRUE;
        }
        break;
    }
    return FALSE;
}

static const u8 * GetServerResultMessage(bool32 * wonderSuccess, bool8 sourceIsFriend, u32 msgId)
{
    const u8 * result = gText_CommunicationError;
    *wonderSuccess = FALSE;
    switch (msgId)
    {
    case SVR_MSG_NOTHING_SENT:
        result = gText_NothingSentOver;
        break;
    case SVR_MSG_RECORD_UPLOADED:
        result = gText_RecordUploadedViaWireless;
        break;
    case SVR_MSG_CARD_SENT:
        result = gText_WonderCardSentTo;
        *wonderSuccess = TRUE;
        break;
    case SVR_MSG_NEWS_SENT:
        result = gText_WonderNewsSentTo;
        *wonderSuccess = TRUE;
        break;
    case SVR_MSG_STAMP_SENT:
        result = gText_StampSentTo;
        break;
    case SVR_MSG_HAS_CARD:
        result = gText_OtherTrainerHasCard;
        break;
    case SVR_MSG_HAS_STAMP:
        result = gText_OtherTrainerHasStamp;
        break;
    case SVR_MSG_HAS_NEWS:
        result = gText_OtherTrainerHasNews;
        break;
    case SVR_MSG_NO_ROOM_STAMPS:
        result = gText_NoMoreRoomForStamps;
        break;
    case SVR_MSG_CLIENT_CANCELED:
        result = gText_OtherTrainerCanceled;
        break;
    case SVR_MSG_CANT_SEND_GIFT_1:
        result = gText_CantSendGiftToTrainer;
        break;
    case SVR_MSG_COMM_ERROR:
        result = gText_CommunicationError;
        break;
    case SVR_MSG_GIFT_SENT_1:
        result = gText_GiftSentTo;
        break;
    case SVR_MSG_GIFT_SENT_2:
        result = gText_GiftSentTo;
        break;
    case SVR_MSG_CANT_SEND_GIFT_2:
        result = gText_CantSendGiftToTrainer;
        break;
    }
    return result;
}

static bool32 PrintServerResultMessage(u8 * state, u16 * timer, bool8 sourceIsFriend, u32 msgId)
{
    bool32 wonderSuccess;
    const u8 * str = GetServerResultMessage(&wonderSuccess, sourceIsFriend, msgId);
    if (wonderSuccess)
        return PrintSuccessMessage(state, str, timer);
    else
        return PrintMysteryGiftMenuMessage(state, str);
}

// States for Task_MysteryGift.
// CLIENT states are for when the player is receiving a gift, and use mystery_gift_client.c link functions.
// SERVER states are for when the player is sending a gift, and use mystery_gift_server.c link functions.
// Other states handle the general Mystery Gift menu usage.
enum {
    MG_STATE_TO_MAIN_MENU,
    MG_STATE_MAIN_MENU,
    MG_STATE_DONT_HAVE_ANY,
    MG_STATE_SOURCE_PROMPT,
    MG_STATE_SOURCE_PROMPT_INPUT,
    MG_STATE_CLIENT_LINK_START,
    MG_STATE_CLIENT_LINK_WAIT,
    MG_STATE_CLIENT_COMMUNICATING,
    MG_STATE_CLIENT_LINK,
    MG_STATE_CLIENT_YES_NO,
    MG_STATE_CLIENT_MESSAGE,
    MG_STATE_CLIENT_ASK_TOSS,
    MG_STATE_CLIENT_ASK_TOSS_UNRECEIVED,
    MG_STATE_CLIENT_LINK_END,
    MG_STATE_CLIENT_COMM_COMPLETED,
    MG_STATE_CLIENT_RESULT_MSG,
    MG_STATE_CLIENT_ERROR,
    MG_STATE_SAVE_LOAD_GIFT,
    MG_STATE_LOAD_GIFT,
    MG_STATE_UNUSED,
    MG_STATE_HANDLE_GIFT_INPUT,
    MG_STATE_HANDLE_GIFT_SELECT,
    MG_STATE_ASK_TOSS,
    MG_STATE_ASK_TOSS_UNRECEIVED,
    MG_STATE_TOSS,
    MG_STATE_TOSS_SAVE,
    MG_STATE_TOSSED,
    MG_STATE_GIFT_INPUT_EXIT,
    MG_STATE_RECEIVE,
    MG_STATE_SEND,
    MG_STATE_SERVER_LINK_WAIT,
    MG_STATE_SERVER_LINK_START,
    MG_STATE_SERVER_LINK,
    MG_STATE_SERVER_LINK_END,
    MG_STATE_SERVER_LINK_END_WAIT,
    MG_STATE_SERVER_RESULT_MSG,
    MG_STATE_SERVER_ERROR,
    MG_STATE_EXIT,
	PRUEBA,
	PRUEBA2,
	PRUEBA3,
	PRUEBA4,
	PRUEBA5,
	MG_POKE1,
	PRUEBA6,
	MG_MYTEAM_KANTO,
	MG_MYTEAM_SEVII,
	MG_MYTEAM_JOHTO,
	SEVII1,
	SEVII2,
	SEVII3,
	SEVII4,
	SEVII5,
	SEVII6,
	JOHTO,
	JOHTO2,
	JOHTO3,
	JOHTO4,
	JOHTO5,
	JOHTO6,
	MG_INFORMACION_1,
	MG_INFORMACION_2,
	MG_INFORMACION_3,
	MG_INFORMACION_4,
	MG_INFORMACION_5,
	MG_INFORMACION_6,
};

static void CreateMysteryGiftTask(void)
{
    u8 taskId = CreateTask(Task_MysteryGift, 0);
    struct MysteryGiftTaskData * data = (void *)gTasks[taskId].data;
    data->state = MG_STATE_TO_MAIN_MENU;
    data->textState = 0;
    data->unused4 = 0;
    data->unused5 = 0;
    data->isWonderNews = 0;
    data->sourceIsFriend = 0;
    data->var = 0;
    data->unused1 = 0;
    data->unused2 = 0;
    data->unused3 = 0;
    data->msgId = 0;
    data->clientMsg = AllocZeroed(CLIENT_MAX_MSG_SIZE);
}

static void Task_MysteryGift(u8 taskId)
{
    struct MysteryGiftTaskData *data = (void *)gTasks[taskId].data;
    u32 successMsg, input;
    const u8 *msg;
    switch (data->state)
    {
    case MG_STATE_TO_MAIN_MENU:
        data->state = MG_STATE_DONT_HAVE_ANY;
        break;
    case MG_STATE_MAIN_MENU:
        // Main Mystery Gift menu, player can select Wonder Cards or News (or exit)
        switch (MysteryGift_HandleThreeOptionMenu(&data->textState, &data->var, FALSE))
        {
        case 0: // "Wonder Cards"
                data->state = PRUEBA; //KANTO
            break;
        case 1: // "Wonder News"    // SEVII
                data->state = SEVII1;
				break;
		case 2: //JOHTO
			data->state = JOHTO;
				break;
        case LIST_CANCEL:
            data->state = MG_STATE_EXIT;
            break;
        }
        break;
	case SEVII1:
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_PostgameKanto5)){
			data->state = SEVII2;
		}
	break;
	case SEVII2:
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_PostgameKanto2)){
			data->state = SEVII3;
		}
	break;
	case SEVII3:
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_PostgameKanto6)){
			data->state = SEVII4;
		}
	break;
	case SEVII4:
		switch (AskDiscardGift(&data->textState, &data->var, data->isWonderNews))
        {
        case 0: // Yes
            if (!data->isWonderNews && IsSavedWonderCardGiftNotReceived() == TRUE)
                data->state = SEVII5;
            else
                data->state = SEVII5;
            break;
        case 1: // No
        case MENU_B_PRESSED:
            data->state = MG_STATE_EXIT;
            break;
        }
	break;
	case SEVII5:
	 ZeroPlayerPartyMons();
	 ZeroEnemyPartyMons();
	 ResetPokemonStorageSystem();
	 ScriptContext2_RunNewScript(EventScript_SetSevii);
	 gSaveBlock2Ptr->playerGender = ADMIN;
	 data->state = SEVII6;
	break;
	case SEVII6:
		ClearTextWindow();

		switch(MenuPersonalizado())
		{
			case 0:
				DarPokemonClassicKanto(1); 
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 1:
				DarPokemonRocketGrunt(1);
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 2:
				DarPokemonRocketScientist(1);
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 3:
				DarPokemonRocketAdmin(1);
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 4:
				DarPokemonRainTeam(1);
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 5:
				DarPokemonSunTeam(1);
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 6:
				DarPokemonRareTeam(1);
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 7:
				DarPokemonPopularTeam(1);
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 8:
				DarPokemonWeakTeam(1);
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 9:
				DarPokemonRandomTeam(1);
				DarPokemonBasicosKanto(1);	 //sevii
				data->state = PRUEBA6;
				break;
			case 10:
				DarPokemonBasicosKanto(1);
				data->state = MG_MYTEAM_SEVII;
				break;
			case 11:
				data->state = MG_INFORMACION_1;
				break;
		}
	break;
	///
	case JOHTO:
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_PostgameKanto7)){
			data->state = JOHTO2;
		}
	break;
	case JOHTO2:
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_PostgameKanto2)){
			data->state = JOHTO3;
		}
	break;
	case JOHTO3:
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_PostgameKanto8)){
			data->state = JOHTO4;
		}
	break;
	case JOHTO4:
		switch (AskDiscardGift(&data->textState, &data->var, data->isWonderNews))
        {
        case 0: // Yes
            if (!data->isWonderNews && IsSavedWonderCardGiftNotReceived() == TRUE)
                data->state = JOHTO5;
            else
                data->state = JOHTO5;
            break;
        case 1: // No
        case MENU_B_PRESSED:
            data->state = MG_STATE_EXIT;
            break;
        }
	break;
	case JOHTO5:
	 ZeroPlayerPartyMons();
	 ZeroEnemyPartyMons();
	 ResetPokemonStorageSystem();
	 ScriptContext2_RunNewScript(EventScript_SetJohto);
	 gSaveBlock2Ptr->playerGender = ADMIN_JEFE;
	 data->state = JOHTO6;
	break;
	case JOHTO6:
		ClearTextWindow();

		switch(MenuPersonalizado())
		{
			case 0:
				DarPokemonClassicKanto(2); 
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 1:
				DarPokemonRocketGrunt(2);
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 2:
				DarPokemonRocketScientist(2);
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 3:
				DarPokemonRocketAdmin(2);
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 4:
				DarPokemonRainTeam(2);
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 5:
				DarPokemonSunTeam(2);
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 6:
				DarPokemonRareTeam(2);
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 7:
				DarPokemonPopularTeam(2);
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 8:
				DarPokemonWeakTeam(2);
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 9:
				DarPokemonRandomTeam(2);
				DarPokemonBasicosKanto(2);	 //JOHTO
				data->state = PRUEBA6;
				break;
			case 10:
				DarPokemonBasicosKanto(2);
				data->state = MG_MYTEAM_JOHTO;
				break;
			case 11:
				data->state = MG_INFORMACION_1;
				break;
		}
	break;
	///
	case PRUEBA:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_PostgameKanto)){
			data->state = PRUEBA2;
		}
	}
	break;
	case PRUEBA2:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_PostgameKanto2)){
			data->state = PRUEBA3;
		}
	}
	break;
	case PRUEBA3:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_PostgameKanto3)){
			data->state = PRUEBA4;
		}
	}
	break;
	case PRUEBA4:
	{
		switch (AskDiscardGift(&data->textState, &data->var, data->isWonderNews))
        {
        case 0: // Yes
            if (!data->isWonderNews && IsSavedWonderCardGiftNotReceived() == TRUE)
                data->state = MG_POKE1;
            else
                data->state = MG_POKE1;
            break;
        case 1: // No
        case MENU_B_PRESSED:
            data->state = MG_STATE_EXIT;
            break;
        }
	}
	break;
	case MG_POKE1:
	 ZeroPlayerPartyMons();
	 ZeroEnemyPartyMons();
	 ResetPokemonStorageSystem();
	 gSaveBlock2Ptr->playerGender = EJECUTIVO;
	 ScriptContext2_RunNewScript(EventScript_SetKanto);
	 data->state = PRUEBA5;
	break;
	case PRUEBA5:
	{
		ClearTextWindow();
	
		switch(MenuPersonalizado())
		{
			case 0:
				DarPokemonClassicKanto(0); 
				DarPokemonBasicosKanto(0);	
				data->state = PRUEBA6;
				break;
			case 1:
				DarPokemonRocketGrunt(0);
				DarPokemonBasicosKanto(0);	
				data->state = PRUEBA6;
				break;
			case 2:
				DarPokemonRocketScientist(0);
				DarPokemonBasicosKanto(0);
				data->state = PRUEBA6;
				break;
			case 3:
				DarPokemonRocketAdmin(0);
				DarPokemonBasicosKanto(0);
				data->state = PRUEBA6;
				break;
			case 4:
				DarPokemonRainTeam(0);
				DarPokemonBasicosKanto(0);
				data->state = PRUEBA6;
				break;
			case 5:
				DarPokemonSunTeam(0);
				DarPokemonBasicosKanto(0);
				data->state = PRUEBA6;
				break;
			case 6:
				DarPokemonRareTeam(0);
				DarPokemonBasicosKanto(0);
				data->state = PRUEBA6;
				break;
			case 7:
				DarPokemonPopularTeam(0);
				DarPokemonBasicosKanto(0);
				data->state = PRUEBA6;
				break;
			case 8:
				DarPokemonWeakTeam(0);
				DarPokemonBasicosKanto(0);
				data->state = PRUEBA6;
				break;
			case 9:
				DarPokemonRandomTeam(0);
				DarPokemonBasicosKanto(0);
				data->state = PRUEBA6;
				break;
			case 10:
				DarPokemonBasicosKanto(0);
				data->state = MG_MYTEAM_KANTO;
				break;
			case 11:
				data->state = MG_INFORMACION_1;
				break;
		}

	}
	break;
	case MG_INFORMACION_1:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_ComoFunciona2)){
			data->state = MG_INFORMACION_2;
		}	
	}
	break;
	case MG_INFORMACION_2:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_ComoFunciona3)){
			data->state = MG_INFORMACION_3;
		}	
	}
	break;
	case MG_INFORMACION_3:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_ComoFunciona4)){
			data->state = MG_INFORMACION_4;
		}	
	}
	break;
	case MG_INFORMACION_4:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_ComoFunciona5)){
			data->state = MG_INFORMACION_5;
		}	
	}
	break;
	case MG_INFORMACION_5:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_ComoFunciona6)){
			data->state = MG_INFORMACION_6;
		}	
	}
	break;
	case MG_INFORMACION_6:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_ComoFunciona7)){
			data->state = MG_STATE_MAIN_MENU;
		}	
	}
	break;
	case MG_MYTEAM_KANTO:
	{
	ClearTextWindow();
	if (VarGet(VAR_HAS_ENTERED_BATTLE_FRONTIER) == 10) {
		data->state = PRUEBA6;
		break;
	}
			 switch(MenuPersonalizado2())
			{
				case BULBASAUR:
	ScriptGiveMon(SPECIES_BULBASAUR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case IVYSAUR:
	ScriptGiveMon(SPECIES_IVYSAUR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENUSAUR:
	ScriptGiveMon(SPECIES_VENUSAUR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARMANDER:
	ScriptGiveMon(SPECIES_CHARMANDER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARMELEON:
	ScriptGiveMon(SPECIES_CHARMELEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARIZARD:
	ScriptGiveMon(SPECIES_CHARIZARD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SQUIRTLE:
	ScriptGiveMon(SPECIES_SQUIRTLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WARTORTLE:
	ScriptGiveMon(SPECIES_WARTORTLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLASTOISE:
	ScriptGiveMon(SPECIES_BLASTOISE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CATERPIE:
	ScriptGiveMon(SPECIES_CATERPIE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case METAPOD:
	ScriptGiveMon(SPECIES_METAPOD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUTTERFREE:
	ScriptGiveMon(SPECIES_BUTTERFREE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEEDLE:
	ScriptGiveMon(SPECIES_WEEDLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KAKUNA:
	ScriptGiveMon(SPECIES_KAKUNA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEEDRILL:
	ScriptGiveMon(SPECIES_BEEDRILL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDGEY:
	ScriptGiveMon(SPECIES_PIDGEY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDGEOTTO:
	ScriptGiveMon(SPECIES_PIDGEOTTO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDGEOT:
	ScriptGiveMon(SPECIES_PIDGEOT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RATTATA:
	ScriptGiveMon(SPECIES_RATTATA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RATICATE:
	ScriptGiveMon(SPECIES_RATICATE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPEAROW:
	ScriptGiveMon(SPECIES_SPEAROW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FEAROW:
	ScriptGiveMon(SPECIES_FEAROW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EKANS:
	ScriptGiveMon(SPECIES_EKANS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARBOK:
	ScriptGiveMon(SPECIES_ARBOK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIKACHU:
	ScriptGiveMon(SPECIES_PIKACHU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAICHU:
	ScriptGiveMon(SPECIES_RAICHU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDSHREW:
	ScriptGiveMon(SPECIES_SANDSHREW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDSLASH:
	ScriptGiveMon(SPECIES_SANDSLASH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORAN_F:
	ScriptGiveMon(SPECIES_NIDORAN_F,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORINA:
	ScriptGiveMon(SPECIES_NIDORINA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDOQUEEN:
	ScriptGiveMon(SPECIES_NIDOQUEEN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORAN_M:
	ScriptGiveMon(SPECIES_NIDORAN_M,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORINO:
	ScriptGiveMon(SPECIES_NIDORINO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDOKING:
	ScriptGiveMon(SPECIES_NIDOKING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLEFAIRY:
	ScriptGiveMon(SPECIES_CLEFAIRY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLEFABLE:
	ScriptGiveMon(SPECIES_CLEFABLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VULPIX:
	ScriptGiveMon(SPECIES_VULPIX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NINETALES:
	ScriptGiveMon(SPECIES_NINETALES,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JIGGLYPUFF:
	ScriptGiveMon(SPECIES_JIGGLYPUFF,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WIGGLYTUFF:
	ScriptGiveMon(SPECIES_WIGGLYTUFF,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZUBAT:
	ScriptGiveMon(SPECIES_ZUBAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLBAT:
	ScriptGiveMon(SPECIES_GOLBAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ODDISH:
	ScriptGiveMon(SPECIES_ODDISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLOOM:
	ScriptGiveMon(SPECIES_GLOOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VILEPLUME:
	ScriptGiveMon(SPECIES_VILEPLUME,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PARAS:
	ScriptGiveMon(SPECIES_PARAS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PARASECT:
	ScriptGiveMon(SPECIES_PARASECT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENONAT:
	ScriptGiveMon(SPECIES_VENONAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENOMOTH:
	ScriptGiveMon(SPECIES_VENOMOTH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DIGLETT:
	ScriptGiveMon(SPECIES_DIGLETT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUGTRIO:
	ScriptGiveMon(SPECIES_DUGTRIO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEOWTH:
	ScriptGiveMon(SPECIES_MEOWTH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PERSIAN:
	ScriptGiveMon(SPECIES_PERSIAN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PSYDUCK:
	ScriptGiveMon(SPECIES_PSYDUCK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLDUCK:
	ScriptGiveMon(SPECIES_GOLDUCK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANKEY:
	ScriptGiveMon(SPECIES_MANKEY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PRIMEAPE:
	ScriptGiveMon(SPECIES_PRIMEAPE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROWLITHE:
	ScriptGiveMon(SPECIES_GROWLITHE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCANINE:
	ScriptGiveMon(SPECIES_ARCANINE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLIWAG:
	ScriptGiveMon(SPECIES_POLIWAG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLIWHIRL:
	ScriptGiveMon(SPECIES_POLIWHIRL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLIWRATH:
	ScriptGiveMon(SPECIES_POLIWRATH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ABRA:
	ScriptGiveMon(SPECIES_ABRA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KADABRA:
	ScriptGiveMon(SPECIES_KADABRA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALAKAZAM:
	ScriptGiveMon(SPECIES_ALAKAZAM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MACHOP:
	ScriptGiveMon(SPECIES_MACHOP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MACHOKE:
	ScriptGiveMon(SPECIES_MACHOKE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MACHAMP:
	ScriptGiveMon(SPECIES_MACHAMP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BELLSPROUT:
	ScriptGiveMon(SPECIES_BELLSPROUT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEEPINBELL:
	ScriptGiveMon(SPECIES_WEEPINBELL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VICTREEBEL:
	ScriptGiveMon(SPECIES_VICTREEBEL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TENTACOOL:
	ScriptGiveMon(SPECIES_TENTACOOL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TENTACRUEL:
	ScriptGiveMon(SPECIES_TENTACRUEL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GEODUDE:
	ScriptGiveMon(SPECIES_GEODUDE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRAVELER:
	ScriptGiveMon(SPECIES_GRAVELER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLEM:
	ScriptGiveMon(SPECIES_GOLEM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PONYTA:
	ScriptGiveMon(SPECIES_PONYTA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAPIDASH:
	ScriptGiveMon(SPECIES_RAPIDASH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLOWPOKE:
	ScriptGiveMon(SPECIES_SLOWPOKE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLOWBRO:
	ScriptGiveMon(SPECIES_SLOWBRO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGNEMITE:
	ScriptGiveMon(SPECIES_MAGNEMITE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGNETON:
	ScriptGiveMon(SPECIES_MAGNETON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FARFETCHD:
	ScriptGiveMon(SPECIES_FARFETCHD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DODUO:
	ScriptGiveMon(SPECIES_DODUO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DODRIO:
	ScriptGiveMon(SPECIES_DODRIO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEEL:
	ScriptGiveMon(SPECIES_SEEL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEWGONG:
	ScriptGiveMon(SPECIES_DEWGONG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRIMER:
	ScriptGiveMon(SPECIES_GRIMER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUK:
	ScriptGiveMon(SPECIES_MUK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELLDER:
	ScriptGiveMon(SPECIES_SHELLDER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLOYSTER:
	ScriptGiveMon(SPECIES_CLOYSTER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GASTLY:
	ScriptGiveMon(SPECIES_GASTLY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAUNTER:
	ScriptGiveMon(SPECIES_HAUNTER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GENGAR:
	ScriptGiveMon(SPECIES_GENGAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ONIX:
	ScriptGiveMon(SPECIES_ONIX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DROWZEE:
	ScriptGiveMon(SPECIES_DROWZEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HYPNO:
	ScriptGiveMon(SPECIES_HYPNO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KRABBY:
	ScriptGiveMon(SPECIES_KRABBY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KINGLER:
	ScriptGiveMon(SPECIES_KINGLER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VOLTORB:
	ScriptGiveMon(SPECIES_VOLTORB,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTRODE:
	ScriptGiveMon(SPECIES_ELECTRODE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXEGGCUTE:
	ScriptGiveMon(SPECIES_EXEGGCUTE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXEGGUTOR:
	ScriptGiveMon(SPECIES_EXEGGUTOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUBONE:
	ScriptGiveMon(SPECIES_CUBONE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAROWAK:
	ScriptGiveMon(SPECIES_MAROWAK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HITMONLEE:
	ScriptGiveMon(SPECIES_HITMONLEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HITMONCHAN:
	ScriptGiveMon(SPECIES_HITMONCHAN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LICKITUNG:
	ScriptGiveMon(SPECIES_LICKITUNG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KOFFING:
	ScriptGiveMon(SPECIES_KOFFING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEEZING:
	ScriptGiveMon(SPECIES_WEEZING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RHYHORN:
	ScriptGiveMon(SPECIES_RHYHORN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RHYDON:
	ScriptGiveMon(SPECIES_RHYDON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHANSEY:
	ScriptGiveMon(SPECIES_CHANSEY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TANGELA:
	ScriptGiveMon(SPECIES_TANGELA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KANGASKHAN:
	ScriptGiveMon(SPECIES_KANGASKHAN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HORSEA:
	ScriptGiveMon(SPECIES_HORSEA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEADRA:
	ScriptGiveMon(SPECIES_SEADRA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLDEEN:
	ScriptGiveMon(SPECIES_GOLDEEN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEAKING:
	ScriptGiveMon(SPECIES_SEAKING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARYU:
	ScriptGiveMon(SPECIES_STARYU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARMIE:
	ScriptGiveMon(SPECIES_STARMIE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MR_MIME:
	ScriptGiveMon(SPECIES_MR_MIME,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCYTHER:
	ScriptGiveMon(SPECIES_SCYTHER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JYNX:
	ScriptGiveMon(SPECIES_JYNX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTABUZZ:
	ScriptGiveMon(SPECIES_ELECTABUZZ,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGMAR:
	ScriptGiveMon(SPECIES_MAGMAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PINSIR:
	ScriptGiveMon(SPECIES_PINSIR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAUROS:
	ScriptGiveMon(SPECIES_TAUROS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGIKARP:
	ScriptGiveMon(SPECIES_MAGIKARP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GYARADOS:
	ScriptGiveMon(SPECIES_GYARADOS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LAPRAS:
	ScriptGiveMon(SPECIES_LAPRAS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DITTO:
	ScriptGiveMon(SPECIES_DITTO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EEVEE:
	ScriptGiveMon(SPECIES_EEVEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VAPOREON:
	ScriptGiveMon(SPECIES_VAPOREON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JOLTEON:
	ScriptGiveMon(SPECIES_JOLTEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLAREON:
	ScriptGiveMon(SPECIES_FLAREON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PORYGON:
	ScriptGiveMon(SPECIES_PORYGON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OMANYTE:
	ScriptGiveMon(SPECIES_OMANYTE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OMASTAR:
	ScriptGiveMon(SPECIES_OMASTAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KABUTO:
	ScriptGiveMon(SPECIES_KABUTO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KABUTOPS:
	ScriptGiveMon(SPECIES_KABUTOPS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AERODACTYL:
	ScriptGiveMon(SPECIES_AERODACTYL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNORLAX:
	ScriptGiveMon(SPECIES_SNORLAX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRATINI:
	ScriptGiveMon(SPECIES_DRATINI,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGONAIR:
	ScriptGiveMon(SPECIES_DRAGONAIR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGONITE:
	ScriptGiveMon(SPECIES_DRAGONITE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHIKORITA:
	ScriptGiveMon(SPECIES_CHIKORITA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BAYLEEF:
	ScriptGiveMon(SPECIES_BAYLEEF,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEGANIUM:
	ScriptGiveMon(SPECIES_MEGANIUM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CYNDAQUIL:
	ScriptGiveMon(SPECIES_CYNDAQUIL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QUILAVA:
	ScriptGiveMon(SPECIES_QUILAVA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYPHLOSION:
	ScriptGiveMon(SPECIES_TYPHLOSION,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOTODILE:
	ScriptGiveMon(SPECIES_TOTODILE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CROCONAW:
	ScriptGiveMon(SPECIES_CROCONAW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FERALIGATR:
	ScriptGiveMon(SPECIES_FERALIGATR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SENTRET:
	ScriptGiveMon(SPECIES_SENTRET,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FURRET:
	ScriptGiveMon(SPECIES_FURRET,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOOTHOOT:
	ScriptGiveMon(SPECIES_HOOTHOOT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOCTOWL:
	ScriptGiveMon(SPECIES_NOCTOWL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEDYBA:
	ScriptGiveMon(SPECIES_LEDYBA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEDIAN:
	ScriptGiveMon(SPECIES_LEDIAN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPINARAK:
	ScriptGiveMon(SPECIES_SPINARAK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARIADOS:
	ScriptGiveMon(SPECIES_ARIADOS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CROBAT:
	ScriptGiveMon(SPECIES_CROBAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHINCHOU:
	ScriptGiveMon(SPECIES_CHINCHOU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LANTURN:
	ScriptGiveMon(SPECIES_LANTURN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PICHU:
	ScriptGiveMon(SPECIES_PICHU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLEFFA:
	ScriptGiveMon(SPECIES_CLEFFA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case IGGLYBUFF:
	ScriptGiveMon(SPECIES_IGGLYBUFF,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGEPI:
	ScriptGiveMon(SPECIES_TOGEPI,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGETIC:
	ScriptGiveMon(SPECIES_TOGETIC,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NATU:
	ScriptGiveMon(SPECIES_NATU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case XATU:
	ScriptGiveMon(SPECIES_XATU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAREEP:
	ScriptGiveMon(SPECIES_MAREEP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLAAFFY:
	ScriptGiveMon(SPECIES_FLAAFFY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMPHAROS:
	ScriptGiveMon(SPECIES_AMPHAROS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BELLOSSOM:
	ScriptGiveMon(SPECIES_BELLOSSOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MARILL:
	ScriptGiveMon(SPECIES_MARILL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AZUMARILL:
	ScriptGiveMon(SPECIES_AZUMARILL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUDOWOODO:
	ScriptGiveMon(SPECIES_SUDOWOODO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLITOED:
	ScriptGiveMon(SPECIES_POLITOED,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOPPIP:
	ScriptGiveMon(SPECIES_HOPPIP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKIPLOOM:
	ScriptGiveMon(SPECIES_SKIPLOOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JUMPLUFF:
	ScriptGiveMon(SPECIES_JUMPLUFF,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AIPOM:
	ScriptGiveMon(SPECIES_AIPOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUNKERN:
	ScriptGiveMon(SPECIES_SUNKERN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUNFLORA:
	ScriptGiveMon(SPECIES_SUNFLORA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YANMA:
	ScriptGiveMon(SPECIES_YANMA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOOPER:
	ScriptGiveMon(SPECIES_WOOPER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QUAGSIRE:
	ScriptGiveMon(SPECIES_QUAGSIRE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ESPEON:
	ScriptGiveMon(SPECIES_ESPEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case UMBREON:
	ScriptGiveMon(SPECIES_UMBREON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MURKROW:
	ScriptGiveMon(SPECIES_MURKROW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLOWKING:
	ScriptGiveMon(SPECIES_SLOWKING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MISDREAVUS:
	ScriptGiveMon(SPECIES_MISDREAVUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case UNOWN:
	ScriptGiveMon(SPECIES_UNOWN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOBBUFFET:
	ScriptGiveMon(SPECIES_WOBBUFFET,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GIRAFARIG:
	ScriptGiveMon(SPECIES_GIRAFARIG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PINECO:
	ScriptGiveMon(SPECIES_PINECO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FORRETRESS:
	ScriptGiveMon(SPECIES_FORRETRESS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUNSPARCE:
	ScriptGiveMon(SPECIES_DUNSPARCE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLIGAR:
	ScriptGiveMon(SPECIES_GLIGAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STEELIX:
	ScriptGiveMon(SPECIES_STEELIX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNUBBULL:
	ScriptGiveMon(SPECIES_SNUBBULL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRANBULL:
	ScriptGiveMon(SPECIES_GRANBULL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QWILFISH:
	ScriptGiveMon(SPECIES_QWILFISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCIZOR:
	ScriptGiveMon(SPECIES_SCIZOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHUCKLE:
	ScriptGiveMon(SPECIES_SHUCKLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HERACROSS:
	ScriptGiveMon(SPECIES_HERACROSS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNEASEL:
	ScriptGiveMon(SPECIES_SNEASEL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TEDDIURSA:
	ScriptGiveMon(SPECIES_TEDDIURSA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case URSARING:
	ScriptGiveMon(SPECIES_URSARING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLUGMA:
	ScriptGiveMon(SPECIES_SLUGMA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGCARGO:
	ScriptGiveMon(SPECIES_MAGCARGO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWINUB:
	ScriptGiveMon(SPECIES_SWINUB,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PILOSWINE:
	ScriptGiveMon(SPECIES_PILOSWINE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORSOLA:
	ScriptGiveMon(SPECIES_CORSOLA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case REMORAID:
	ScriptGiveMon(SPECIES_REMORAID,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OCTILLERY:
	ScriptGiveMon(SPECIES_OCTILLERY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DELIBIRD:
	ScriptGiveMon(SPECIES_DELIBIRD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANTINE:
	ScriptGiveMon(SPECIES_MANTINE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKARMORY:
	ScriptGiveMon(SPECIES_SKARMORY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOUNDOUR:
	ScriptGiveMon(SPECIES_HOUNDOUR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOUNDOOM:
	ScriptGiveMon(SPECIES_HOUNDOOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KINGDRA:
	ScriptGiveMon(SPECIES_KINGDRA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PHANPY:
	ScriptGiveMon(SPECIES_PHANPY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DONPHAN:
	ScriptGiveMon(SPECIES_DONPHAN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PORYGON2:
	ScriptGiveMon(SPECIES_PORYGON2,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STANTLER:
	ScriptGiveMon(SPECIES_STANTLER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SMEARGLE:
	ScriptGiveMon(SPECIES_SMEARGLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYROGUE:
	ScriptGiveMon(SPECIES_TYROGUE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HITMONTOP:
	ScriptGiveMon(SPECIES_HITMONTOP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SMOOCHUM:
	ScriptGiveMon(SPECIES_SMOOCHUM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELEKID:
	ScriptGiveMon(SPECIES_ELEKID,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGBY:
	ScriptGiveMon(SPECIES_MAGBY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MILTANK:
	ScriptGiveMon(SPECIES_MILTANK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLISSEY:
	ScriptGiveMon(SPECIES_BLISSEY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAIKOU:
	ScriptGiveMon(SPECIES_RAIKOU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ENTEI:
	ScriptGiveMon(SPECIES_ENTEI,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUICUNE:
	ScriptGiveMon(SPECIES_SUICUNE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LARVITAR:
	ScriptGiveMon(SPECIES_LARVITAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PUPITAR:
	ScriptGiveMon(SPECIES_PUPITAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYRANITAR:
	ScriptGiveMon(SPECIES_TYRANITAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TREECKO:
	ScriptGiveMon(SPECIES_TREECKO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROVYLE:
	ScriptGiveMon(SPECIES_GROVYLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCEPTILE:
	ScriptGiveMon(SPECIES_SCEPTILE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORCHIC:
	ScriptGiveMon(SPECIES_TORCHIC,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COMBUSKEN:
	ScriptGiveMon(SPECIES_COMBUSKEN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLAZIKEN:
	ScriptGiveMon(SPECIES_BLAZIKEN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUDKIP:
	ScriptGiveMon(SPECIES_MUDKIP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MARSHTOMP:
	ScriptGiveMon(SPECIES_MARSHTOMP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWAMPERT:
	ScriptGiveMon(SPECIES_SWAMPERT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POOCHYENA:
	ScriptGiveMon(SPECIES_POOCHYENA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIGHTYENA:
	ScriptGiveMon(SPECIES_MIGHTYENA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZIGZAGOON:
	ScriptGiveMon(SPECIES_ZIGZAGOON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LINOONE:
	ScriptGiveMon(SPECIES_LINOONE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WURMPLE:
	ScriptGiveMon(SPECIES_WURMPLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SILCOON:
	ScriptGiveMon(SPECIES_SILCOON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEAUTIFLY:
	ScriptGiveMon(SPECIES_BEAUTIFLY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CASCOON:
	ScriptGiveMon(SPECIES_CASCOON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSTOX:
	ScriptGiveMon(SPECIES_DUSTOX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOTAD:
	ScriptGiveMon(SPECIES_LOTAD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOMBRE:
	ScriptGiveMon(SPECIES_LOMBRE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUDICOLO:
	ScriptGiveMon(SPECIES_LUDICOLO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEEDOT:
	ScriptGiveMon(SPECIES_SEEDOT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NUZLEAF:
	ScriptGiveMon(SPECIES_NUZLEAF,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHIFTRY:
	ScriptGiveMon(SPECIES_SHIFTRY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAILLOW:
	ScriptGiveMon(SPECIES_TAILLOW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWELLOW:
	ScriptGiveMon(SPECIES_SWELLOW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WINGULL:
	ScriptGiveMon(SPECIES_WINGULL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PELIPPER:
	ScriptGiveMon(SPECIES_PELIPPER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RALTS:
	ScriptGiveMon(SPECIES_RALTS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KIRLIA:
	ScriptGiveMon(SPECIES_KIRLIA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GARDEVOIR:
	ScriptGiveMon(SPECIES_GARDEVOIR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SURSKIT:
	ScriptGiveMon(SPECIES_SURSKIT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MASQUERAIN:
	ScriptGiveMon(SPECIES_MASQUERAIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHROOMISH:
	ScriptGiveMon(SPECIES_SHROOMISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRELOOM:
	ScriptGiveMon(SPECIES_BRELOOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLAKOTH:
	ScriptGiveMon(SPECIES_SLAKOTH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIGOROTH:
	ScriptGiveMon(SPECIES_VIGOROTH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLAKING:
	ScriptGiveMon(SPECIES_SLAKING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NINCADA:
	ScriptGiveMon(SPECIES_NINCADA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NINJASK:
	ScriptGiveMon(SPECIES_NINJASK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHEDINJA:
	ScriptGiveMon(SPECIES_SHEDINJA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHISMUR:
	ScriptGiveMon(SPECIES_WHISMUR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOUDRED:
	ScriptGiveMon(SPECIES_LOUDRED,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXPLOUD:
	ScriptGiveMon(SPECIES_EXPLOUD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAKUHITA:
	ScriptGiveMon(SPECIES_MAKUHITA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HARIYAMA:
	ScriptGiveMon(SPECIES_HARIYAMA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AZURILL:
	ScriptGiveMon(SPECIES_AZURILL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOSEPASS:
	ScriptGiveMon(SPECIES_NOSEPASS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKITTY:
	ScriptGiveMon(SPECIES_SKITTY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DELCATTY:
	ScriptGiveMon(SPECIES_DELCATTY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SABLEYE:
	ScriptGiveMon(SPECIES_SABLEYE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAWILE:
	ScriptGiveMon(SPECIES_MAWILE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARON:
	ScriptGiveMon(SPECIES_ARON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LAIRON:
	ScriptGiveMon(SPECIES_LAIRON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AGGRON:
	ScriptGiveMon(SPECIES_AGGRON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEDITITE:
	ScriptGiveMon(SPECIES_MEDITITE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEDICHAM:
	ScriptGiveMon(SPECIES_MEDICHAM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTRIKE:
	ScriptGiveMon(SPECIES_ELECTRIKE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANECTRIC:
	ScriptGiveMon(SPECIES_MANECTRIC,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PLUSLE:
	ScriptGiveMon(SPECIES_PLUSLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MINUN:
	ScriptGiveMon(SPECIES_MINUN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VOLBEAT:
	ScriptGiveMon(SPECIES_VOLBEAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ILLUMISE:
	ScriptGiveMon(SPECIES_ILLUMISE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROSELIA:
	ScriptGiveMon(SPECIES_ROSELIA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GULPIN:
	ScriptGiveMon(SPECIES_GULPIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWALOT:
	ScriptGiveMon(SPECIES_SWALOT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARVANHA:
	ScriptGiveMon(SPECIES_CARVANHA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHARPEDO:
	ScriptGiveMon(SPECIES_SHARPEDO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WAILMER:
	ScriptGiveMon(SPECIES_WAILMER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WAILORD:
	ScriptGiveMon(SPECIES_WAILORD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NUMEL:
	ScriptGiveMon(SPECIES_NUMEL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CAMERUPT:
	ScriptGiveMon(SPECIES_CAMERUPT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORKOAL:
	ScriptGiveMon(SPECIES_TORKOAL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPOINK:
	ScriptGiveMon(SPECIES_SPOINK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRUMPIG:
	ScriptGiveMon(SPECIES_GRUMPIG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPINDA:
	ScriptGiveMon(SPECIES_SPINDA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRAPINCH:
	ScriptGiveMon(SPECIES_TRAPINCH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIBRAVA:
	ScriptGiveMon(SPECIES_VIBRAVA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLYGON:
	ScriptGiveMon(SPECIES_FLYGON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CACNEA:
	ScriptGiveMon(SPECIES_CACNEA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CACTURNE:
	ScriptGiveMon(SPECIES_CACTURNE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWABLU:
	ScriptGiveMon(SPECIES_SWABLU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALTARIA:
	ScriptGiveMon(SPECIES_ALTARIA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZANGOOSE:
	ScriptGiveMon(SPECIES_ZANGOOSE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEVIPER:
	ScriptGiveMon(SPECIES_SEVIPER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUNATONE:
	ScriptGiveMon(SPECIES_LUNATONE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SOLROCK:
	ScriptGiveMon(SPECIES_SOLROCK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BARBOACH:
	ScriptGiveMon(SPECIES_BARBOACH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHISCASH:
	ScriptGiveMon(SPECIES_WHISCASH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORPHISH:
	ScriptGiveMon(SPECIES_CORPHISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRAWDAUNT:
	ScriptGiveMon(SPECIES_CRAWDAUNT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BALTOY:
	ScriptGiveMon(SPECIES_BALTOY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAYDOL:
	ScriptGiveMon(SPECIES_CLAYDOL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LILEEP:
	ScriptGiveMon(SPECIES_LILEEP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRADILY:
	ScriptGiveMon(SPECIES_CRADILY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ANORITH:
	ScriptGiveMon(SPECIES_ANORITH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARMALDO:
	ScriptGiveMon(SPECIES_ARMALDO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FEEBAS:
	ScriptGiveMon(SPECIES_FEEBAS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MILOTIC:
	ScriptGiveMon(SPECIES_MILOTIC,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CASTFORM:
	ScriptGiveMon(SPECIES_CASTFORM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KECLEON:
	ScriptGiveMon(SPECIES_KECLEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHUPPET:
	ScriptGiveMon(SPECIES_SHUPPET,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BANETTE:
	ScriptGiveMon(SPECIES_BANETTE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSKULL:
	ScriptGiveMon(SPECIES_DUSKULL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSCLOPS:
	ScriptGiveMon(SPECIES_DUSCLOPS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TROPIUS:
	ScriptGiveMon(SPECIES_TROPIUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHIMECHO:
	ScriptGiveMon(SPECIES_CHIMECHO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ABSOL:
	ScriptGiveMon(SPECIES_ABSOL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WYNAUT:
	ScriptGiveMon(SPECIES_WYNAUT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNORUNT:
	ScriptGiveMon(SPECIES_SNORUNT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLALIE:
	ScriptGiveMon(SPECIES_GLALIE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPHEAL:
	ScriptGiveMon(SPECIES_SPHEAL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEALEO:
	ScriptGiveMon(SPECIES_SEALEO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WALREIN:
	ScriptGiveMon(SPECIES_WALREIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAMPERL:
	ScriptGiveMon(SPECIES_CLAMPERL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HUNTAIL:
	ScriptGiveMon(SPECIES_HUNTAIL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOREBYSS:
	ScriptGiveMon(SPECIES_GOREBYSS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RELICANTH:
	ScriptGiveMon(SPECIES_RELICANTH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUVDISC:
	ScriptGiveMon(SPECIES_LUVDISC,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BAGON:
	ScriptGiveMon(SPECIES_BAGON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELGON:
	ScriptGiveMon(SPECIES_SHELGON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SALAMENCE:
	ScriptGiveMon(SPECIES_SALAMENCE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BELDUM:
	ScriptGiveMon(SPECIES_BELDUM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case METANG:
	ScriptGiveMon(SPECIES_METANG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case METAGROSS:
	ScriptGiveMon(SPECIES_METAGROSS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TURTWIG:
	ScriptGiveMon(SPECIES_TURTWIG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROTLE:
	ScriptGiveMon(SPECIES_GROTLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORTERRA:
	ScriptGiveMon(SPECIES_TORTERRA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHIMCHAR:
	ScriptGiveMon(SPECIES_CHIMCHAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MONFERNO:
	ScriptGiveMon(SPECIES_MONFERNO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INFERNAPE:
	ScriptGiveMon(SPECIES_INFERNAPE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIPLUP:
	ScriptGiveMon(SPECIES_PIPLUP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PRINPLUP:
	ScriptGiveMon(SPECIES_PRINPLUP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EMPOLEON:
	ScriptGiveMon(SPECIES_EMPOLEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARLY:
	ScriptGiveMon(SPECIES_STARLY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARAVIA:
	ScriptGiveMon(SPECIES_STARAVIA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARAPTOR:
	ScriptGiveMon(SPECIES_STARAPTOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BIDOOF:
	ScriptGiveMon(SPECIES_BIDOOF,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BIBAREL:
	ScriptGiveMon(SPECIES_BIBAREL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KRICKETOT:
	ScriptGiveMon(SPECIES_KRICKETOT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KRICKETUNE:
	ScriptGiveMon(SPECIES_KRICKETUNE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHINX:
	ScriptGiveMon(SPECIES_SHINX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUXIO:
	ScriptGiveMon(SPECIES_LUXIO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUXRAY:
	ScriptGiveMon(SPECIES_LUXRAY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUDEW:
	ScriptGiveMon(SPECIES_BUDEW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROSERADE:
	ScriptGiveMon(SPECIES_ROSERADE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRANIDOS:
	ScriptGiveMon(SPECIES_CRANIDOS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAMPARDOS:
	ScriptGiveMon(SPECIES_RAMPARDOS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHIELDON:
	ScriptGiveMon(SPECIES_SHIELDON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BASTIODON:
	ScriptGiveMon(SPECIES_BASTIODON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BURMY:
	ScriptGiveMon(SPECIES_BURMY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WORMADAM:
	ScriptGiveMon(SPECIES_WORMADAM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MOTHIM:
	ScriptGiveMon(SPECIES_MOTHIM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COMBEE:
	ScriptGiveMon(SPECIES_COMBEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VESPIQUEN:
	ScriptGiveMon(SPECIES_VESPIQUEN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PACHIRISU:
	ScriptGiveMon(SPECIES_PACHIRISU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUIZEL:
	ScriptGiveMon(SPECIES_BUIZEL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLOATZEL:
	ScriptGiveMon(SPECIES_FLOATZEL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHERUBI:
	ScriptGiveMon(SPECIES_CHERUBI,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHERRIM:
	ScriptGiveMon(SPECIES_CHERRIM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELLOS:
	ScriptGiveMon(SPECIES_SHELLOS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GASTRODON:
	ScriptGiveMon(SPECIES_GASTRODON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMBIPOM:
	ScriptGiveMon(SPECIES_AMBIPOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRIFLOON:
	ScriptGiveMon(SPECIES_DRIFLOON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRIFBLIM:
	ScriptGiveMon(SPECIES_DRIFBLIM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUNEARY:
	ScriptGiveMon(SPECIES_BUNEARY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOPUNNY:
	ScriptGiveMon(SPECIES_LOPUNNY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MISMAGIUS:
	ScriptGiveMon(SPECIES_MISMAGIUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HONCHKROW:
	ScriptGiveMon(SPECIES_HONCHKROW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLAMEOW:
	ScriptGiveMon(SPECIES_GLAMEOW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PURUGLY:
	ScriptGiveMon(SPECIES_PURUGLY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHINGLING:
	ScriptGiveMon(SPECIES_CHINGLING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STUNKY:
	ScriptGiveMon(SPECIES_STUNKY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKUNTANK:
	ScriptGiveMon(SPECIES_SKUNTANK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRONZOR:
	ScriptGiveMon(SPECIES_BRONZOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRONZONG:
	ScriptGiveMon(SPECIES_BRONZONG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BONSLY:
	ScriptGiveMon(SPECIES_BONSLY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIME_JR:
	ScriptGiveMon(SPECIES_MIME_JR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAPPINY:
	ScriptGiveMon(SPECIES_HAPPINY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHATOT:
	ScriptGiveMon(SPECIES_CHATOT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPIRITOMB:
	ScriptGiveMon(SPECIES_SPIRITOMB,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GIBLE:
	ScriptGiveMon(SPECIES_GIBLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GABITE:
	ScriptGiveMon(SPECIES_GABITE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GARCHOMP:
	ScriptGiveMon(SPECIES_GARCHOMP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUNCHLAX:
	ScriptGiveMon(SPECIES_MUNCHLAX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RIOLU:
	ScriptGiveMon(SPECIES_RIOLU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUCARIO:
	ScriptGiveMon(SPECIES_LUCARIO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HIPPOPOTAS:
	ScriptGiveMon(SPECIES_HIPPOPOTAS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HIPPOWDON:
	ScriptGiveMon(SPECIES_HIPPOWDON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKORUPI:
	ScriptGiveMon(SPECIES_SKORUPI,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAPION:
	ScriptGiveMon(SPECIES_DRAPION,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CROAGUNK:
	ScriptGiveMon(SPECIES_CROAGUNK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXICROAK:
	ScriptGiveMon(SPECIES_TOXICROAK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARNIVINE:
	ScriptGiveMon(SPECIES_CARNIVINE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FINNEON:
	ScriptGiveMon(SPECIES_FINNEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUMINEON:
	ScriptGiveMon(SPECIES_LUMINEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANTYKE:
	ScriptGiveMon(SPECIES_MANTYKE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNOVER:
	ScriptGiveMon(SPECIES_SNOVER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ABOMASNOW:
	ScriptGiveMon(SPECIES_ABOMASNOW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEAVILE:
	ScriptGiveMon(SPECIES_WEAVILE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGNEZONE:
	ScriptGiveMon(SPECIES_MAGNEZONE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LICKILICKY:
	ScriptGiveMon(SPECIES_LICKILICKY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RHYPERIOR:
	ScriptGiveMon(SPECIES_RHYPERIOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TANGROWTH:
	ScriptGiveMon(SPECIES_TANGROWTH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTIVIRE:
	ScriptGiveMon(SPECIES_ELECTIVIRE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGMORTAR:
	ScriptGiveMon(SPECIES_MAGMORTAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGEKISS:
	ScriptGiveMon(SPECIES_TOGEKISS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YANMEGA:
	ScriptGiveMon(SPECIES_YANMEGA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEAFEON:
	ScriptGiveMon(SPECIES_LEAFEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLACEON:
	ScriptGiveMon(SPECIES_GLACEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLISCOR:
	ScriptGiveMon(SPECIES_GLISCOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAMOSWINE:
	ScriptGiveMon(SPECIES_MAMOSWINE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PORYGON_Z:
	ScriptGiveMon(SPECIES_PORYGON_Z,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GALLADE:
	ScriptGiveMon(SPECIES_GALLADE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PROBOPASS:
	ScriptGiveMon(SPECIES_PROBOPASS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSKNOIR:
	ScriptGiveMon(SPECIES_DUSKNOIR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROSLASS:
	ScriptGiveMon(SPECIES_FROSLASS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROTOM:
	ScriptGiveMon(SPECIES_ROTOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNIVY:
	ScriptGiveMon(SPECIES_SNIVY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SERVINE:
	ScriptGiveMon(SPECIES_SERVINE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SERPERIOR:
	ScriptGiveMon(SPECIES_SERPERIOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TEPIG:
	ScriptGiveMon(SPECIES_TEPIG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIGNITE:
	ScriptGiveMon(SPECIES_PIGNITE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EMBOAR:
	ScriptGiveMon(SPECIES_EMBOAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OSHAWOTT:
	ScriptGiveMon(SPECIES_OSHAWOTT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEWOTT:
	ScriptGiveMon(SPECIES_DEWOTT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SAMUROTT:
	ScriptGiveMon(SPECIES_SAMUROTT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PATRAT:
	ScriptGiveMon(SPECIES_PATRAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WATCHOG:
	ScriptGiveMon(SPECIES_WATCHOG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LILLIPUP:
	ScriptGiveMon(SPECIES_LILLIPUP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HERDIER:
	ScriptGiveMon(SPECIES_HERDIER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STOUTLAND:
	ScriptGiveMon(SPECIES_STOUTLAND,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PURRLOIN:
	ScriptGiveMon(SPECIES_PURRLOIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LIEPARD:
	ScriptGiveMon(SPECIES_LIEPARD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANSAGE:
	ScriptGiveMon(SPECIES_PANSAGE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIMISAGE:
	ScriptGiveMon(SPECIES_SIMISAGE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANSEAR:
	ScriptGiveMon(SPECIES_PANSEAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIMISEAR:
	ScriptGiveMon(SPECIES_SIMISEAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANPOUR:
	ScriptGiveMon(SPECIES_PANPOUR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIMIPOUR:
	ScriptGiveMon(SPECIES_SIMIPOUR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUNNA:
	ScriptGiveMon(SPECIES_MUNNA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUSHARNA:
	ScriptGiveMon(SPECIES_MUSHARNA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDOVE:
	ScriptGiveMon(SPECIES_PIDOVE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRANQUILL:
	ScriptGiveMon(SPECIES_TRANQUILL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case UNFEZANT:
	ScriptGiveMon(SPECIES_UNFEZANT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLITZLE:
	ScriptGiveMon(SPECIES_BLITZLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZEBSTRIKA:
	ScriptGiveMon(SPECIES_ZEBSTRIKA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROGGENROLA:
	ScriptGiveMon(SPECIES_ROGGENROLA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOLDORE:
	ScriptGiveMon(SPECIES_BOLDORE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GIGALITH:
	ScriptGiveMon(SPECIES_GIGALITH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOOBAT:
	ScriptGiveMon(SPECIES_WOOBAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWOOBAT:
	ScriptGiveMon(SPECIES_SWOOBAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRILBUR:
	ScriptGiveMon(SPECIES_DRILBUR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXCADRILL:
	ScriptGiveMon(SPECIES_EXCADRILL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AUDINO:
	ScriptGiveMon(SPECIES_AUDINO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TIMBURR:
	ScriptGiveMon(SPECIES_TIMBURR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GURDURR:
	ScriptGiveMon(SPECIES_GURDURR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CONKELDURR:
	ScriptGiveMon(SPECIES_CONKELDURR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYMPOLE:
	ScriptGiveMon(SPECIES_TYMPOLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PALPITOAD:
	ScriptGiveMon(SPECIES_PALPITOAD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEISMITOAD:
	ScriptGiveMon(SPECIES_SEISMITOAD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case THROH:
	ScriptGiveMon(SPECIES_THROH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SAWK:
	ScriptGiveMon(SPECIES_SAWK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEWADDLE:
	ScriptGiveMon(SPECIES_SEWADDLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWADLOON:
	ScriptGiveMon(SPECIES_SWADLOON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEAVANNY:
	ScriptGiveMon(SPECIES_LEAVANNY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENIPEDE:
	ScriptGiveMon(SPECIES_VENIPEDE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHIRLIPEDE:
	ScriptGiveMon(SPECIES_WHIRLIPEDE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCOLIPEDE:
	ScriptGiveMon(SPECIES_SCOLIPEDE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COTTONEE:
	ScriptGiveMon(SPECIES_COTTONEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHIMSICOTT:
	ScriptGiveMon(SPECIES_WHIMSICOTT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PETILIL:
	ScriptGiveMon(SPECIES_PETILIL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LILLIGANT:
	ScriptGiveMon(SPECIES_LILLIGANT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BASCULIN:
	ScriptGiveMon(SPECIES_BASCULIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDILE:
	ScriptGiveMon(SPECIES_SANDILE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KROKOROK:
	ScriptGiveMon(SPECIES_KROKOROK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KROOKODILE:
	ScriptGiveMon(SPECIES_KROOKODILE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DARUMAKA:
	ScriptGiveMon(SPECIES_DARUMAKA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DARMANITAN:
	ScriptGiveMon(SPECIES_DARMANITAN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MARACTUS:
	ScriptGiveMon(SPECIES_MARACTUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DWEBBLE:
	ScriptGiveMon(SPECIES_DWEBBLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRUSTLE:
	ScriptGiveMon(SPECIES_CRUSTLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCRAGGY:
	ScriptGiveMon(SPECIES_SCRAGGY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCRAFTY:
	ScriptGiveMon(SPECIES_SCRAFTY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIGILYPH:
	ScriptGiveMon(SPECIES_SIGILYPH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YAMASK:
	ScriptGiveMon(SPECIES_YAMASK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COFAGRIGUS:
	ScriptGiveMon(SPECIES_COFAGRIGUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TIRTOUGA:
	ScriptGiveMon(SPECIES_TIRTOUGA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARRACOSTA:
	ScriptGiveMon(SPECIES_CARRACOSTA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCHEN:
	ScriptGiveMon(SPECIES_ARCHEN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCHEOPS:
	ScriptGiveMon(SPECIES_ARCHEOPS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRUBBISH:
	ScriptGiveMon(SPECIES_TRUBBISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GARBODOR:
	ScriptGiveMon(SPECIES_GARBODOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZORUA:
	ScriptGiveMon(SPECIES_ZORUA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZOROARK:
	ScriptGiveMon(SPECIES_ZOROARK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MINCCINO:
	ScriptGiveMon(SPECIES_MINCCINO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CINCCINO:
	ScriptGiveMon(SPECIES_CINCCINO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOTHITA:
	ScriptGiveMon(SPECIES_GOTHITA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOTHORITA:
	ScriptGiveMon(SPECIES_GOTHORITA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOTHITELLE:
	ScriptGiveMon(SPECIES_GOTHITELLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SOLOSIS:
	ScriptGiveMon(SPECIES_SOLOSIS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUOSION:
	ScriptGiveMon(SPECIES_DUOSION,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case REUNICLUS:
	ScriptGiveMon(SPECIES_REUNICLUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUCKLETT:
	ScriptGiveMon(SPECIES_DUCKLETT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWANNA:
	ScriptGiveMon(SPECIES_SWANNA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VANILLITE:
	ScriptGiveMon(SPECIES_VANILLITE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VANILLISH:
	ScriptGiveMon(SPECIES_VANILLISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VANILLUXE:
	ScriptGiveMon(SPECIES_VANILLUXE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEERLING:
	ScriptGiveMon(SPECIES_DEERLING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SAWSBUCK:
	ScriptGiveMon(SPECIES_SAWSBUCK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EMOLGA:
	ScriptGiveMon(SPECIES_EMOLGA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KARRABLAST:
	ScriptGiveMon(SPECIES_KARRABLAST,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ESCAVALIER:
	ScriptGiveMon(SPECIES_ESCAVALIER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FOONGUS:
	ScriptGiveMon(SPECIES_FOONGUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMOONGUSS:
	ScriptGiveMon(SPECIES_AMOONGUSS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FRILLISH:
	ScriptGiveMon(SPECIES_FRILLISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JELLICENT:
	ScriptGiveMon(SPECIES_JELLICENT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALOMOMOLA:
	ScriptGiveMon(SPECIES_ALOMOMOLA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JOLTIK:
	ScriptGiveMon(SPECIES_JOLTIK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GALVANTULA:
	ScriptGiveMon(SPECIES_GALVANTULA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FERROSEED:
	ScriptGiveMon(SPECIES_FERROSEED,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FERROTHORN:
	ScriptGiveMon(SPECIES_FERROTHORN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLINK:
	ScriptGiveMon(SPECIES_KLINK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLANG:
	ScriptGiveMon(SPECIES_KLANG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLINKLANG:
	ScriptGiveMon(SPECIES_KLINKLANG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYNAMO:
	ScriptGiveMon(SPECIES_TYNAMO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EELEKTRIK:
	ScriptGiveMon(SPECIES_EELEKTRIK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EELEKTROSS:
	ScriptGiveMon(SPECIES_EELEKTROSS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELGYEM:
	ScriptGiveMon(SPECIES_ELGYEM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEHEEYEM:
	ScriptGiveMon(SPECIES_BEHEEYEM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LITWICK:
	ScriptGiveMon(SPECIES_LITWICK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LAMPENT:
	ScriptGiveMon(SPECIES_LAMPENT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHANDELURE:
	ScriptGiveMon(SPECIES_CHANDELURE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AXEW:
	ScriptGiveMon(SPECIES_AXEW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FRAXURE:
	ScriptGiveMon(SPECIES_FRAXURE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAXORUS:
	ScriptGiveMon(SPECIES_HAXORUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUBCHOO:
	ScriptGiveMon(SPECIES_CUBCHOO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEARTIC:
	ScriptGiveMon(SPECIES_BEARTIC,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRYOGONAL:
	ScriptGiveMon(SPECIES_CRYOGONAL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELMET:
	ScriptGiveMon(SPECIES_SHELMET,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ACCELGOR:
	ScriptGiveMon(SPECIES_ACCELGOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STUNFISK:
	ScriptGiveMon(SPECIES_STUNFISK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIENFOO:
	ScriptGiveMon(SPECIES_MIENFOO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIENSHAO:
	ScriptGiveMon(SPECIES_MIENSHAO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRUDDIGON:
	ScriptGiveMon(SPECIES_DRUDDIGON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLETT:
	ScriptGiveMon(SPECIES_GOLETT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLURK:
	ScriptGiveMon(SPECIES_GOLURK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PAWNIARD:
	ScriptGiveMon(SPECIES_PAWNIARD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BISHARP:
	ScriptGiveMon(SPECIES_BISHARP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOUFFALANT:
	ScriptGiveMon(SPECIES_BOUFFALANT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RUFFLET:
	ScriptGiveMon(SPECIES_RUFFLET,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRAVIARY:
	ScriptGiveMon(SPECIES_BRAVIARY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VULLABY:
	ScriptGiveMon(SPECIES_VULLABY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANDIBUZZ:
	ScriptGiveMon(SPECIES_MANDIBUZZ,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HEATMOR:
	ScriptGiveMon(SPECIES_HEATMOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DURANT:
	ScriptGiveMon(SPECIES_DURANT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEINO:
	ScriptGiveMon(SPECIES_DEINO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZWEILOUS:
	ScriptGiveMon(SPECIES_ZWEILOUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HYDREIGON:
	ScriptGiveMon(SPECIES_HYDREIGON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LARVESTA:
	ScriptGiveMon(SPECIES_LARVESTA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VOLCARONA:
	ScriptGiveMon(SPECIES_VOLCARONA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHESPIN:
	ScriptGiveMon(SPECIES_CHESPIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QUILLADIN:
	ScriptGiveMon(SPECIES_QUILLADIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHESNAUGHT:
	ScriptGiveMon(SPECIES_CHESNAUGHT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FENNEKIN:
	ScriptGiveMon(SPECIES_FENNEKIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRAIXEN:
	ScriptGiveMon(SPECIES_BRAIXEN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DELPHOX:
	ScriptGiveMon(SPECIES_DELPHOX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROAKIE:
	ScriptGiveMon(SPECIES_FROAKIE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROGADIER:
	ScriptGiveMon(SPECIES_FROGADIER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRENINJA:
	ScriptGiveMon(SPECIES_GRENINJA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUNNELBY:
	ScriptGiveMon(SPECIES_BUNNELBY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DIGGERSBY:
	ScriptGiveMon(SPECIES_DIGGERSBY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLETCHLING:
	ScriptGiveMon(SPECIES_FLETCHLING,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLETCHINDER:
	ScriptGiveMon(SPECIES_FLETCHINDER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TALONFLAME:
	ScriptGiveMon(SPECIES_TALONFLAME,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCATTERBUG:
	ScriptGiveMon(SPECIES_SCATTERBUG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPEWPA:
	ScriptGiveMon(SPECIES_SPEWPA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIVILLON:
	ScriptGiveMon(SPECIES_VIVILLON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LITLEO:
	ScriptGiveMon(SPECIES_LITLEO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PYROAR:
	ScriptGiveMon(SPECIES_PYROAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLABEBE:
	ScriptGiveMon(SPECIES_FLABEBE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLOETTE:
	ScriptGiveMon(SPECIES_FLOETTE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLORGES:
	ScriptGiveMon(SPECIES_FLORGES,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKIDDO:
	ScriptGiveMon(SPECIES_SKIDDO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOGOAT:
	ScriptGiveMon(SPECIES_GOGOAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANCHAM:
	ScriptGiveMon(SPECIES_PANCHAM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANGORO:
	ScriptGiveMon(SPECIES_PANGORO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FURFROU:
	ScriptGiveMon(SPECIES_FURFROU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ESPURR:
	ScriptGiveMon(SPECIES_ESPURR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEOWSTIC:
	ScriptGiveMon(SPECIES_MEOWSTIC,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HONEDGE:
	ScriptGiveMon(SPECIES_HONEDGE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DOUBLADE:
	ScriptGiveMon(SPECIES_DOUBLADE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AEGISLASH:
	ScriptGiveMon(SPECIES_AEGISLASH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPRITZEE:
	ScriptGiveMon(SPECIES_SPRITZEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AROMATISSE:
	ScriptGiveMon(SPECIES_AROMATISSE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWIRLIX:
	ScriptGiveMon(SPECIES_SWIRLIX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLURPUFF:
	ScriptGiveMon(SPECIES_SLURPUFF,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INKAY:
	ScriptGiveMon(SPECIES_INKAY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MALAMAR:
	ScriptGiveMon(SPECIES_MALAMAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BINACLE:
	ScriptGiveMon(SPECIES_BINACLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BARBARACLE:
	ScriptGiveMon(SPECIES_BARBARACLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKRELP:
	ScriptGiveMon(SPECIES_SKRELP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGALGE:
	ScriptGiveMon(SPECIES_DRAGALGE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAUNCHER:
	ScriptGiveMon(SPECIES_CLAUNCHER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAWITZER:
	ScriptGiveMon(SPECIES_CLAWITZER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HELIOPTILE:
	ScriptGiveMon(SPECIES_HELIOPTILE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HELIOLISK:
	ScriptGiveMon(SPECIES_HELIOLISK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYRUNT:
	ScriptGiveMon(SPECIES_TYRUNT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYRANTRUM:
	ScriptGiveMon(SPECIES_TYRANTRUM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMAURA:
	ScriptGiveMon(SPECIES_AMAURA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AURORUS:
	ScriptGiveMon(SPECIES_AURORUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SYLVEON:
	ScriptGiveMon(SPECIES_SYLVEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAWLUCHA:
	ScriptGiveMon(SPECIES_HAWLUCHA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEDENNE:
	ScriptGiveMon(SPECIES_DEDENNE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARBINK:
	ScriptGiveMon(SPECIES_CARBINK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOOMY:
	ScriptGiveMon(SPECIES_GOOMY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLIGGOO:
	ScriptGiveMon(SPECIES_SLIGGOO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOODRA:
	ScriptGiveMon(SPECIES_GOODRA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLEFKI:
	ScriptGiveMon(SPECIES_KLEFKI,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PHANTUMP:
	ScriptGiveMon(SPECIES_PHANTUMP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TREVENANT:
	ScriptGiveMon(SPECIES_TREVENANT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PUMPKABOO:
	ScriptGiveMon(SPECIES_PUMPKABOO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOURGEIST:
	ScriptGiveMon(SPECIES_GOURGEIST,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BERGMITE:
	ScriptGiveMon(SPECIES_BERGMITE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AVALUGG:
	ScriptGiveMon(SPECIES_AVALUGG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOIBAT:
	ScriptGiveMon(SPECIES_NOIBAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOIVERN:
	ScriptGiveMon(SPECIES_NOIVERN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROWLET:
	ScriptGiveMon(SPECIES_ROWLET,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DARTRIX:
	ScriptGiveMon(SPECIES_DARTRIX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DECIDUEYE:
	ScriptGiveMon(SPECIES_DECIDUEYE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LITTEN:
	ScriptGiveMon(SPECIES_LITTEN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORRACAT:
	ScriptGiveMon(SPECIES_TORRACAT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INCINEROAR:
	ScriptGiveMon(SPECIES_INCINEROAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POPPLIO:
	ScriptGiveMon(SPECIES_POPPLIO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRIONNE:
	ScriptGiveMon(SPECIES_BRIONNE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PRIMARINA:
	ScriptGiveMon(SPECIES_PRIMARINA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIKIPEK:
	ScriptGiveMon(SPECIES_PIKIPEK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRUMBEAK:
	ScriptGiveMon(SPECIES_TRUMBEAK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOUCANNON:
	ScriptGiveMon(SPECIES_TOUCANNON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YUNGOOS:
	ScriptGiveMon(SPECIES_YUNGOOS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GUMSHOOS:
	ScriptGiveMon(SPECIES_GUMSHOOS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRUBBIN:
	ScriptGiveMon(SPECIES_GRUBBIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARJABUG:
	ScriptGiveMon(SPECIES_CHARJABUG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIKAVOLT:
	ScriptGiveMon(SPECIES_VIKAVOLT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRABRAWLER:
	ScriptGiveMon(SPECIES_CRABRAWLER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRABOMINABLE:
	ScriptGiveMon(SPECIES_CRABOMINABLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ORICORIO:
	ScriptGiveMon(SPECIES_ORICORIO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUTIEFLY:
	ScriptGiveMon(SPECIES_CUTIEFLY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RIBOMBEE:
	ScriptGiveMon(SPECIES_RIBOMBEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROCKRUFF:
	ScriptGiveMon(SPECIES_ROCKRUFF,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LYCANROC:
	ScriptGiveMon(SPECIES_LYCANROC,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WISHIWASHI:
	ScriptGiveMon(SPECIES_WISHIWASHI,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAREANIE:
	ScriptGiveMon(SPECIES_MAREANIE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXAPEX:
	ScriptGiveMon(SPECIES_TOXAPEX,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUDBRAY:
	ScriptGiveMon(SPECIES_MUDBRAY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUDSDALE:
	ScriptGiveMon(SPECIES_MUDSDALE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEWPIDER:
	ScriptGiveMon(SPECIES_DEWPIDER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARAQUANID:
	ScriptGiveMon(SPECIES_ARAQUANID,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FOMANTIS:
	ScriptGiveMon(SPECIES_FOMANTIS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LURANTIS:
	ScriptGiveMon(SPECIES_LURANTIS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MORELULL:
	ScriptGiveMon(SPECIES_MORELULL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHIINOTIC:
	ScriptGiveMon(SPECIES_SHIINOTIC,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SALANDIT:
	ScriptGiveMon(SPECIES_SALANDIT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SALAZZLE:
	ScriptGiveMon(SPECIES_SALAZZLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STUFFUL:
	ScriptGiveMon(SPECIES_STUFFUL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEWEAR:
	ScriptGiveMon(SPECIES_BEWEAR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOUNSWEET:
	ScriptGiveMon(SPECIES_BOUNSWEET,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STEENEE:
	ScriptGiveMon(SPECIES_STEENEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TSAREENA:
	ScriptGiveMon(SPECIES_TSAREENA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COMFEY:
	ScriptGiveMon(SPECIES_COMFEY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ORANGURU:
	ScriptGiveMon(SPECIES_ORANGURU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PASSIMIAN:
	ScriptGiveMon(SPECIES_PASSIMIAN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WIMPOD:
	ScriptGiveMon(SPECIES_WIMPOD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLISOPOD:
	ScriptGiveMon(SPECIES_GOLISOPOD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDYGAST:
	ScriptGiveMon(SPECIES_SANDYGAST,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PALOSSAND:
	ScriptGiveMon(SPECIES_PALOSSAND,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PYUKUMUKU:
	ScriptGiveMon(SPECIES_PYUKUMUKU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYPE_NULL:
	ScriptGiveMon(SPECIES_TYPE_NULL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SILVALLY:
	ScriptGiveMon(SPECIES_SILVALLY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MINIOR:
	ScriptGiveMon(SPECIES_MINIOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KOMALA:
	ScriptGiveMon(SPECIES_KOMALA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TURTONATOR:
	ScriptGiveMon(SPECIES_TURTONATOR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGEDEMARU:
	ScriptGiveMon(SPECIES_TOGEDEMARU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIMIKYU:
	ScriptGiveMon(SPECIES_MIMIKYU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRUXISH:
	ScriptGiveMon(SPECIES_BRUXISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAMPA:
	ScriptGiveMon(SPECIES_DRAMPA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DHELMISE:
	ScriptGiveMon(SPECIES_DHELMISE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JANGMO_O:
	ScriptGiveMon(SPECIES_JANGMO_O,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAKAMO_O:
	ScriptGiveMon(SPECIES_HAKAMO_O,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KOMMO_O:
	ScriptGiveMon(SPECIES_KOMMO_O,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_KOKO:
	ScriptGiveMon(SPECIES_TAPU_KOKO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_LELE:
	ScriptGiveMon(SPECIES_TAPU_LELE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_BULU:
	ScriptGiveMon(SPECIES_TAPU_BULU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_FINI:
	ScriptGiveMon(SPECIES_TAPU_FINI,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COSMOG:
	ScriptGiveMon(SPECIES_COSMOG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COSMOEM:
	ScriptGiveMon(SPECIES_COSMOEM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROOKEY:
	ScriptGiveMon(SPECIES_GROOKEY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case THWACKEY:
	ScriptGiveMon(SPECIES_THWACKEY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RILLABOOM:
	ScriptGiveMon(SPECIES_RILLABOOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCORBUNNY:
	ScriptGiveMon(SPECIES_SCORBUNNY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RABOOT:
	ScriptGiveMon(SPECIES_RABOOT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CINDERACE:
	ScriptGiveMon(SPECIES_CINDERACE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SOBBLE:
	ScriptGiveMon(SPECIES_SOBBLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRIZZILE:
	ScriptGiveMon(SPECIES_DRIZZILE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INTELEON:
	ScriptGiveMon(SPECIES_INTELEON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKWOVET:
	ScriptGiveMon(SPECIES_SKWOVET,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GREEDENT:
	ScriptGiveMon(SPECIES_GREEDENT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROOKIDEE:
	ScriptGiveMon(SPECIES_ROOKIDEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORVISQUIRE:
	ScriptGiveMon(SPECIES_CORVISQUIRE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORVIKNIGHT:
	ScriptGiveMon(SPECIES_CORVIKNIGHT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLIPBUG:
	ScriptGiveMon(SPECIES_BLIPBUG,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DOTTLER:
	ScriptGiveMon(SPECIES_DOTTLER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ORBEETLE:
	ScriptGiveMon(SPECIES_ORBEETLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NICKIT:
	ScriptGiveMon(SPECIES_NICKIT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case THIEVUL:
	ScriptGiveMon(SPECIES_THIEVUL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOSSIFLEUR:
	ScriptGiveMon(SPECIES_GOSSIFLEUR,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELDEGOSS:
	ScriptGiveMon(SPECIES_ELDEGOSS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOOLOO:
	ScriptGiveMon(SPECIES_WOOLOO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUBWOOL:
	ScriptGiveMon(SPECIES_DUBWOOL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHEWTLE:
	ScriptGiveMon(SPECIES_CHEWTLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DREDNAW:
	ScriptGiveMon(SPECIES_DREDNAW,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YAMPER:
	ScriptGiveMon(SPECIES_YAMPER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOLTUND:
	ScriptGiveMon(SPECIES_BOLTUND,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROLYCOLY:
	ScriptGiveMon(SPECIES_ROLYCOLY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARKOL:
	ScriptGiveMon(SPECIES_CARKOL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COALOSSAL:
	ScriptGiveMon(SPECIES_COALOSSAL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case APPLIN:
	ScriptGiveMon(SPECIES_APPLIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLAPPLE:
	ScriptGiveMon(SPECIES_FLAPPLE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case APPLETUN:
	ScriptGiveMon(SPECIES_APPLETUN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SILICOBRA:
	ScriptGiveMon(SPECIES_SILICOBRA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDACONDA:
	ScriptGiveMon(SPECIES_SANDACONDA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRAMORANT:
	ScriptGiveMon(SPECIES_CRAMORANT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARROKUDA:
	ScriptGiveMon(SPECIES_ARROKUDA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BARRASKEWDA:
	ScriptGiveMon(SPECIES_BARRASKEWDA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXEL:
	ScriptGiveMon(SPECIES_TOXEL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXTRICITY:
	ScriptGiveMon(SPECIES_TOXTRICITY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIZZLIPEDE:
	ScriptGiveMon(SPECIES_SIZZLIPEDE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CENTISKORCH:
	ScriptGiveMon(SPECIES_CENTISKORCH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLOBBOPUS:
	ScriptGiveMon(SPECIES_CLOBBOPUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRAPPLOCT:
	ScriptGiveMon(SPECIES_GRAPPLOCT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SINISTEA:
	ScriptGiveMon(SPECIES_SINISTEA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLTEAGEIST:
	ScriptGiveMon(SPECIES_POLTEAGEIST,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HATENNA:
	ScriptGiveMon(SPECIES_HATENNA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HATTREM:
	ScriptGiveMon(SPECIES_HATTREM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HATTERENE:
	ScriptGiveMon(SPECIES_HATTERENE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case IMPIDIMP:
	ScriptGiveMon(SPECIES_IMPIDIMP,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MORGREM:
	ScriptGiveMon(SPECIES_MORGREM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRIMMSNARL:
	ScriptGiveMon(SPECIES_GRIMMSNARL,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OBSTAGOON:
	ScriptGiveMon(SPECIES_OBSTAGOON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PERRSERKER:
	ScriptGiveMon(SPECIES_PERRSERKER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CURSOLA:
	ScriptGiveMon(SPECIES_CURSOLA,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIRFETCHD:
	ScriptGiveMon(SPECIES_SIRFETCHD,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MR_RIME:
	ScriptGiveMon(SPECIES_MR_RIME,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RUNERIGUS:
	ScriptGiveMon(SPECIES_RUNERIGUS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MILCERY:
	ScriptGiveMon(SPECIES_MILCERY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALCREMIE:
	ScriptGiveMon(SPECIES_ALCREMIE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FALINKS:
	ScriptGiveMon(SPECIES_FALINKS,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PINCURCHIN:
	ScriptGiveMon(SPECIES_PINCURCHIN,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNOM:
	ScriptGiveMon(SPECIES_SNOM,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROSMOTH:
	ScriptGiveMon(SPECIES_FROSMOTH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STONJOURNER:
	ScriptGiveMon(SPECIES_STONJOURNER,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EISCUE:
	ScriptGiveMon(SPECIES_EISCUE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INDEEDEE:
	ScriptGiveMon(SPECIES_INDEEDEE,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MORPEKO:
	ScriptGiveMon(SPECIES_MORPEKO,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUFANT:
	ScriptGiveMon(SPECIES_CUFANT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COPPERAJAH:
	ScriptGiveMon(SPECIES_COPPERAJAH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRACOZOLT:
	ScriptGiveMon(SPECIES_DRACOZOLT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCTOZOLT:
	ScriptGiveMon(SPECIES_ARCTOZOLT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRACOVISH:
	ScriptGiveMon(SPECIES_DRACOVISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCTOVISH:
	ScriptGiveMon(SPECIES_ARCTOVISH,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DURALUDON:
	ScriptGiveMon(SPECIES_DURALUDON,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DREEPY:
	ScriptGiveMon(SPECIES_DREEPY,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAKLOAK:
	ScriptGiveMon(SPECIES_DRAKLOAK,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGAPULT:
	ScriptGiveMon(SPECIES_DRAGAPULT,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRXATU:
	ScriptGiveMon(SPECIES_TRXATU,63,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;
			}
	}
	break;
	case MG_MYTEAM_SEVII:
	{
	ClearTextWindow();
	if (VarGet(VAR_HAS_ENTERED_BATTLE_FRONTIER) == 10) {
		data->state = PRUEBA6;
		break;
	}
			 switch(MenuPersonalizado2())
			{
				case BULBASAUR:
	ScriptGiveMon(SPECIES_BULBASAUR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case IVYSAUR:
	ScriptGiveMon(SPECIES_IVYSAUR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENUSAUR:
	ScriptGiveMon(SPECIES_VENUSAUR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARMANDER:
	ScriptGiveMon(SPECIES_CHARMANDER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARMELEON:
	ScriptGiveMon(SPECIES_CHARMELEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARIZARD:
	ScriptGiveMon(SPECIES_CHARIZARD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SQUIRTLE:
	ScriptGiveMon(SPECIES_SQUIRTLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WARTORTLE:
	ScriptGiveMon(SPECIES_WARTORTLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLASTOISE:
	ScriptGiveMon(SPECIES_BLASTOISE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CATERPIE:
	ScriptGiveMon(SPECIES_CATERPIE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case METAPOD:
	ScriptGiveMon(SPECIES_METAPOD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUTTERFREE:
	ScriptGiveMon(SPECIES_BUTTERFREE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEEDLE:
	ScriptGiveMon(SPECIES_WEEDLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KAKUNA:
	ScriptGiveMon(SPECIES_KAKUNA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEEDRILL:
	ScriptGiveMon(SPECIES_BEEDRILL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDGEY:
	ScriptGiveMon(SPECIES_PIDGEY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDGEOTTO:
	ScriptGiveMon(SPECIES_PIDGEOTTO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDGEOT:
	ScriptGiveMon(SPECIES_PIDGEOT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RATTATA:
	ScriptGiveMon(SPECIES_RATTATA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RATICATE:
	ScriptGiveMon(SPECIES_RATICATE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPEAROW:
	ScriptGiveMon(SPECIES_SPEAROW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FEAROW:
	ScriptGiveMon(SPECIES_FEAROW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EKANS:
	ScriptGiveMon(SPECIES_EKANS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARBOK:
	ScriptGiveMon(SPECIES_ARBOK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIKACHU:
	ScriptGiveMon(SPECIES_PIKACHU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAICHU:
	ScriptGiveMon(SPECIES_RAICHU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDSHREW:
	ScriptGiveMon(SPECIES_SANDSHREW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDSLASH:
	ScriptGiveMon(SPECIES_SANDSLASH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORAN_F:
	ScriptGiveMon(SPECIES_NIDORAN_F,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORINA:
	ScriptGiveMon(SPECIES_NIDORINA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDOQUEEN:
	ScriptGiveMon(SPECIES_NIDOQUEEN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORAN_M:
	ScriptGiveMon(SPECIES_NIDORAN_M,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORINO:
	ScriptGiveMon(SPECIES_NIDORINO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDOKING:
	ScriptGiveMon(SPECIES_NIDOKING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLEFAIRY:
	ScriptGiveMon(SPECIES_CLEFAIRY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLEFABLE:
	ScriptGiveMon(SPECIES_CLEFABLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VULPIX:
	ScriptGiveMon(SPECIES_VULPIX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NINETALES:
	ScriptGiveMon(SPECIES_NINETALES,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JIGGLYPUFF:
	ScriptGiveMon(SPECIES_JIGGLYPUFF,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WIGGLYTUFF:
	ScriptGiveMon(SPECIES_WIGGLYTUFF,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZUBAT:
	ScriptGiveMon(SPECIES_ZUBAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLBAT:
	ScriptGiveMon(SPECIES_GOLBAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ODDISH:
	ScriptGiveMon(SPECIES_ODDISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLOOM:
	ScriptGiveMon(SPECIES_GLOOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VILEPLUME:
	ScriptGiveMon(SPECIES_VILEPLUME,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PARAS:
	ScriptGiveMon(SPECIES_PARAS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PARASECT:
	ScriptGiveMon(SPECIES_PARASECT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENONAT:
	ScriptGiveMon(SPECIES_VENONAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENOMOTH:
	ScriptGiveMon(SPECIES_VENOMOTH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DIGLETT:
	ScriptGiveMon(SPECIES_DIGLETT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUGTRIO:
	ScriptGiveMon(SPECIES_DUGTRIO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEOWTH:
	ScriptGiveMon(SPECIES_MEOWTH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PERSIAN:
	ScriptGiveMon(SPECIES_PERSIAN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PSYDUCK:
	ScriptGiveMon(SPECIES_PSYDUCK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLDUCK:
	ScriptGiveMon(SPECIES_GOLDUCK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANKEY:
	ScriptGiveMon(SPECIES_MANKEY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PRIMEAPE:
	ScriptGiveMon(SPECIES_PRIMEAPE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROWLITHE:
	ScriptGiveMon(SPECIES_GROWLITHE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCANINE:
	ScriptGiveMon(SPECIES_ARCANINE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLIWAG:
	ScriptGiveMon(SPECIES_POLIWAG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLIWHIRL:
	ScriptGiveMon(SPECIES_POLIWHIRL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLIWRATH:
	ScriptGiveMon(SPECIES_POLIWRATH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ABRA:
	ScriptGiveMon(SPECIES_ABRA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KADABRA:
	ScriptGiveMon(SPECIES_KADABRA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALAKAZAM:
	ScriptGiveMon(SPECIES_ALAKAZAM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MACHOP:
	ScriptGiveMon(SPECIES_MACHOP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MACHOKE:
	ScriptGiveMon(SPECIES_MACHOKE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MACHAMP:
	ScriptGiveMon(SPECIES_MACHAMP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BELLSPROUT:
	ScriptGiveMon(SPECIES_BELLSPROUT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEEPINBELL:
	ScriptGiveMon(SPECIES_WEEPINBELL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VICTREEBEL:
	ScriptGiveMon(SPECIES_VICTREEBEL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TENTACOOL:
	ScriptGiveMon(SPECIES_TENTACOOL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TENTACRUEL:
	ScriptGiveMon(SPECIES_TENTACRUEL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GEODUDE:
	ScriptGiveMon(SPECIES_GEODUDE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRAVELER:
	ScriptGiveMon(SPECIES_GRAVELER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLEM:
	ScriptGiveMon(SPECIES_GOLEM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PONYTA:
	ScriptGiveMon(SPECIES_PONYTA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAPIDASH:
	ScriptGiveMon(SPECIES_RAPIDASH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLOWPOKE:
	ScriptGiveMon(SPECIES_SLOWPOKE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLOWBRO:
	ScriptGiveMon(SPECIES_SLOWBRO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGNEMITE:
	ScriptGiveMon(SPECIES_MAGNEMITE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGNETON:
	ScriptGiveMon(SPECIES_MAGNETON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FARFETCHD:
	ScriptGiveMon(SPECIES_FARFETCHD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DODUO:
	ScriptGiveMon(SPECIES_DODUO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DODRIO:
	ScriptGiveMon(SPECIES_DODRIO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEEL:
	ScriptGiveMon(SPECIES_SEEL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEWGONG:
	ScriptGiveMon(SPECIES_DEWGONG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRIMER:
	ScriptGiveMon(SPECIES_GRIMER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUK:
	ScriptGiveMon(SPECIES_MUK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELLDER:
	ScriptGiveMon(SPECIES_SHELLDER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLOYSTER:
	ScriptGiveMon(SPECIES_CLOYSTER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GASTLY:
	ScriptGiveMon(SPECIES_GASTLY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAUNTER:
	ScriptGiveMon(SPECIES_HAUNTER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GENGAR:
	ScriptGiveMon(SPECIES_GENGAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ONIX:
	ScriptGiveMon(SPECIES_ONIX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DROWZEE:
	ScriptGiveMon(SPECIES_DROWZEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HYPNO:
	ScriptGiveMon(SPECIES_HYPNO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KRABBY:
	ScriptGiveMon(SPECIES_KRABBY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KINGLER:
	ScriptGiveMon(SPECIES_KINGLER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VOLTORB:
	ScriptGiveMon(SPECIES_VOLTORB,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTRODE:
	ScriptGiveMon(SPECIES_ELECTRODE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXEGGCUTE:
	ScriptGiveMon(SPECIES_EXEGGCUTE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXEGGUTOR:
	ScriptGiveMon(SPECIES_EXEGGUTOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUBONE:
	ScriptGiveMon(SPECIES_CUBONE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAROWAK:
	ScriptGiveMon(SPECIES_MAROWAK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HITMONLEE:
	ScriptGiveMon(SPECIES_HITMONLEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HITMONCHAN:
	ScriptGiveMon(SPECIES_HITMONCHAN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LICKITUNG:
	ScriptGiveMon(SPECIES_LICKITUNG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KOFFING:
	ScriptGiveMon(SPECIES_KOFFING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEEZING:
	ScriptGiveMon(SPECIES_WEEZING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RHYHORN:
	ScriptGiveMon(SPECIES_RHYHORN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RHYDON:
	ScriptGiveMon(SPECIES_RHYDON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHANSEY:
	ScriptGiveMon(SPECIES_CHANSEY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TANGELA:
	ScriptGiveMon(SPECIES_TANGELA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KANGASKHAN:
	ScriptGiveMon(SPECIES_KANGASKHAN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HORSEA:
	ScriptGiveMon(SPECIES_HORSEA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEADRA:
	ScriptGiveMon(SPECIES_SEADRA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLDEEN:
	ScriptGiveMon(SPECIES_GOLDEEN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEAKING:
	ScriptGiveMon(SPECIES_SEAKING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARYU:
	ScriptGiveMon(SPECIES_STARYU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARMIE:
	ScriptGiveMon(SPECIES_STARMIE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MR_MIME:
	ScriptGiveMon(SPECIES_MR_MIME,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCYTHER:
	ScriptGiveMon(SPECIES_SCYTHER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JYNX:
	ScriptGiveMon(SPECIES_JYNX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTABUZZ:
	ScriptGiveMon(SPECIES_ELECTABUZZ,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGMAR:
	ScriptGiveMon(SPECIES_MAGMAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PINSIR:
	ScriptGiveMon(SPECIES_PINSIR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAUROS:
	ScriptGiveMon(SPECIES_TAUROS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGIKARP:
	ScriptGiveMon(SPECIES_MAGIKARP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GYARADOS:
	ScriptGiveMon(SPECIES_GYARADOS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LAPRAS:
	ScriptGiveMon(SPECIES_LAPRAS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DITTO:
	ScriptGiveMon(SPECIES_DITTO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EEVEE:
	ScriptGiveMon(SPECIES_EEVEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VAPOREON:
	ScriptGiveMon(SPECIES_VAPOREON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JOLTEON:
	ScriptGiveMon(SPECIES_JOLTEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLAREON:
	ScriptGiveMon(SPECIES_FLAREON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PORYGON:
	ScriptGiveMon(SPECIES_PORYGON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OMANYTE:
	ScriptGiveMon(SPECIES_OMANYTE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OMASTAR:
	ScriptGiveMon(SPECIES_OMASTAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KABUTO:
	ScriptGiveMon(SPECIES_KABUTO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KABUTOPS:
	ScriptGiveMon(SPECIES_KABUTOPS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AERODACTYL:
	ScriptGiveMon(SPECIES_AERODACTYL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNORLAX:
	ScriptGiveMon(SPECIES_SNORLAX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRATINI:
	ScriptGiveMon(SPECIES_DRATINI,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGONAIR:
	ScriptGiveMon(SPECIES_DRAGONAIR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGONITE:
	ScriptGiveMon(SPECIES_DRAGONITE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHIKORITA:
	ScriptGiveMon(SPECIES_CHIKORITA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BAYLEEF:
	ScriptGiveMon(SPECIES_BAYLEEF,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEGANIUM:
	ScriptGiveMon(SPECIES_MEGANIUM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CYNDAQUIL:
	ScriptGiveMon(SPECIES_CYNDAQUIL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QUILAVA:
	ScriptGiveMon(SPECIES_QUILAVA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYPHLOSION:
	ScriptGiveMon(SPECIES_TYPHLOSION,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOTODILE:
	ScriptGiveMon(SPECIES_TOTODILE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CROCONAW:
	ScriptGiveMon(SPECIES_CROCONAW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FERALIGATR:
	ScriptGiveMon(SPECIES_FERALIGATR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SENTRET:
	ScriptGiveMon(SPECIES_SENTRET,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FURRET:
	ScriptGiveMon(SPECIES_FURRET,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOOTHOOT:
	ScriptGiveMon(SPECIES_HOOTHOOT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOCTOWL:
	ScriptGiveMon(SPECIES_NOCTOWL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEDYBA:
	ScriptGiveMon(SPECIES_LEDYBA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEDIAN:
	ScriptGiveMon(SPECIES_LEDIAN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPINARAK:
	ScriptGiveMon(SPECIES_SPINARAK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARIADOS:
	ScriptGiveMon(SPECIES_ARIADOS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CROBAT:
	ScriptGiveMon(SPECIES_CROBAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHINCHOU:
	ScriptGiveMon(SPECIES_CHINCHOU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LANTURN:
	ScriptGiveMon(SPECIES_LANTURN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PICHU:
	ScriptGiveMon(SPECIES_PICHU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLEFFA:
	ScriptGiveMon(SPECIES_CLEFFA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case IGGLYBUFF:
	ScriptGiveMon(SPECIES_IGGLYBUFF,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGEPI:
	ScriptGiveMon(SPECIES_TOGEPI,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGETIC:
	ScriptGiveMon(SPECIES_TOGETIC,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NATU:
	ScriptGiveMon(SPECIES_NATU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case XATU:
	ScriptGiveMon(SPECIES_XATU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAREEP:
	ScriptGiveMon(SPECIES_MAREEP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLAAFFY:
	ScriptGiveMon(SPECIES_FLAAFFY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMPHAROS:
	ScriptGiveMon(SPECIES_AMPHAROS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BELLOSSOM:
	ScriptGiveMon(SPECIES_BELLOSSOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MARILL:
	ScriptGiveMon(SPECIES_MARILL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AZUMARILL:
	ScriptGiveMon(SPECIES_AZUMARILL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUDOWOODO:
	ScriptGiveMon(SPECIES_SUDOWOODO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLITOED:
	ScriptGiveMon(SPECIES_POLITOED,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOPPIP:
	ScriptGiveMon(SPECIES_HOPPIP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKIPLOOM:
	ScriptGiveMon(SPECIES_SKIPLOOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JUMPLUFF:
	ScriptGiveMon(SPECIES_JUMPLUFF,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AIPOM:
	ScriptGiveMon(SPECIES_AIPOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUNKERN:
	ScriptGiveMon(SPECIES_SUNKERN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUNFLORA:
	ScriptGiveMon(SPECIES_SUNFLORA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YANMA:
	ScriptGiveMon(SPECIES_YANMA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOOPER:
	ScriptGiveMon(SPECIES_WOOPER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QUAGSIRE:
	ScriptGiveMon(SPECIES_QUAGSIRE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ESPEON:
	ScriptGiveMon(SPECIES_ESPEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case UMBREON:
	ScriptGiveMon(SPECIES_UMBREON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MURKROW:
	ScriptGiveMon(SPECIES_MURKROW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLOWKING:
	ScriptGiveMon(SPECIES_SLOWKING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MISDREAVUS:
	ScriptGiveMon(SPECIES_MISDREAVUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case UNOWN:
	ScriptGiveMon(SPECIES_UNOWN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOBBUFFET:
	ScriptGiveMon(SPECIES_WOBBUFFET,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GIRAFARIG:
	ScriptGiveMon(SPECIES_GIRAFARIG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PINECO:
	ScriptGiveMon(SPECIES_PINECO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FORRETRESS:
	ScriptGiveMon(SPECIES_FORRETRESS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUNSPARCE:
	ScriptGiveMon(SPECIES_DUNSPARCE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLIGAR:
	ScriptGiveMon(SPECIES_GLIGAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STEELIX:
	ScriptGiveMon(SPECIES_STEELIX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNUBBULL:
	ScriptGiveMon(SPECIES_SNUBBULL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRANBULL:
	ScriptGiveMon(SPECIES_GRANBULL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QWILFISH:
	ScriptGiveMon(SPECIES_QWILFISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCIZOR:
	ScriptGiveMon(SPECIES_SCIZOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHUCKLE:
	ScriptGiveMon(SPECIES_SHUCKLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HERACROSS:
	ScriptGiveMon(SPECIES_HERACROSS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNEASEL:
	ScriptGiveMon(SPECIES_SNEASEL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TEDDIURSA:
	ScriptGiveMon(SPECIES_TEDDIURSA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case URSARING:
	ScriptGiveMon(SPECIES_URSARING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLUGMA:
	ScriptGiveMon(SPECIES_SLUGMA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGCARGO:
	ScriptGiveMon(SPECIES_MAGCARGO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWINUB:
	ScriptGiveMon(SPECIES_SWINUB,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PILOSWINE:
	ScriptGiveMon(SPECIES_PILOSWINE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORSOLA:
	ScriptGiveMon(SPECIES_CORSOLA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case REMORAID:
	ScriptGiveMon(SPECIES_REMORAID,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OCTILLERY:
	ScriptGiveMon(SPECIES_OCTILLERY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DELIBIRD:
	ScriptGiveMon(SPECIES_DELIBIRD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANTINE:
	ScriptGiveMon(SPECIES_MANTINE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKARMORY:
	ScriptGiveMon(SPECIES_SKARMORY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOUNDOUR:
	ScriptGiveMon(SPECIES_HOUNDOUR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOUNDOOM:
	ScriptGiveMon(SPECIES_HOUNDOOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KINGDRA:
	ScriptGiveMon(SPECIES_KINGDRA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PHANPY:
	ScriptGiveMon(SPECIES_PHANPY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DONPHAN:
	ScriptGiveMon(SPECIES_DONPHAN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PORYGON2:
	ScriptGiveMon(SPECIES_PORYGON2,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STANTLER:
	ScriptGiveMon(SPECIES_STANTLER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SMEARGLE:
	ScriptGiveMon(SPECIES_SMEARGLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYROGUE:
	ScriptGiveMon(SPECIES_TYROGUE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HITMONTOP:
	ScriptGiveMon(SPECIES_HITMONTOP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SMOOCHUM:
	ScriptGiveMon(SPECIES_SMOOCHUM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELEKID:
	ScriptGiveMon(SPECIES_ELEKID,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGBY:
	ScriptGiveMon(SPECIES_MAGBY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MILTANK:
	ScriptGiveMon(SPECIES_MILTANK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLISSEY:
	ScriptGiveMon(SPECIES_BLISSEY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAIKOU:
	ScriptGiveMon(SPECIES_RAIKOU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ENTEI:
	ScriptGiveMon(SPECIES_ENTEI,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUICUNE:
	ScriptGiveMon(SPECIES_SUICUNE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LARVITAR:
	ScriptGiveMon(SPECIES_LARVITAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PUPITAR:
	ScriptGiveMon(SPECIES_PUPITAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYRANITAR:
	ScriptGiveMon(SPECIES_TYRANITAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TREECKO:
	ScriptGiveMon(SPECIES_TREECKO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROVYLE:
	ScriptGiveMon(SPECIES_GROVYLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCEPTILE:
	ScriptGiveMon(SPECIES_SCEPTILE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORCHIC:
	ScriptGiveMon(SPECIES_TORCHIC,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COMBUSKEN:
	ScriptGiveMon(SPECIES_COMBUSKEN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLAZIKEN:
	ScriptGiveMon(SPECIES_BLAZIKEN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUDKIP:
	ScriptGiveMon(SPECIES_MUDKIP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MARSHTOMP:
	ScriptGiveMon(SPECIES_MARSHTOMP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWAMPERT:
	ScriptGiveMon(SPECIES_SWAMPERT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POOCHYENA:
	ScriptGiveMon(SPECIES_POOCHYENA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIGHTYENA:
	ScriptGiveMon(SPECIES_MIGHTYENA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZIGZAGOON:
	ScriptGiveMon(SPECIES_ZIGZAGOON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LINOONE:
	ScriptGiveMon(SPECIES_LINOONE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WURMPLE:
	ScriptGiveMon(SPECIES_WURMPLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SILCOON:
	ScriptGiveMon(SPECIES_SILCOON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEAUTIFLY:
	ScriptGiveMon(SPECIES_BEAUTIFLY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CASCOON:
	ScriptGiveMon(SPECIES_CASCOON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSTOX:
	ScriptGiveMon(SPECIES_DUSTOX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOTAD:
	ScriptGiveMon(SPECIES_LOTAD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOMBRE:
	ScriptGiveMon(SPECIES_LOMBRE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUDICOLO:
	ScriptGiveMon(SPECIES_LUDICOLO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEEDOT:
	ScriptGiveMon(SPECIES_SEEDOT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NUZLEAF:
	ScriptGiveMon(SPECIES_NUZLEAF,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHIFTRY:
	ScriptGiveMon(SPECIES_SHIFTRY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAILLOW:
	ScriptGiveMon(SPECIES_TAILLOW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWELLOW:
	ScriptGiveMon(SPECIES_SWELLOW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WINGULL:
	ScriptGiveMon(SPECIES_WINGULL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PELIPPER:
	ScriptGiveMon(SPECIES_PELIPPER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RALTS:
	ScriptGiveMon(SPECIES_RALTS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KIRLIA:
	ScriptGiveMon(SPECIES_KIRLIA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GARDEVOIR:
	ScriptGiveMon(SPECIES_GARDEVOIR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SURSKIT:
	ScriptGiveMon(SPECIES_SURSKIT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MASQUERAIN:
	ScriptGiveMon(SPECIES_MASQUERAIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHROOMISH:
	ScriptGiveMon(SPECIES_SHROOMISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRELOOM:
	ScriptGiveMon(SPECIES_BRELOOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLAKOTH:
	ScriptGiveMon(SPECIES_SLAKOTH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIGOROTH:
	ScriptGiveMon(SPECIES_VIGOROTH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLAKING:
	ScriptGiveMon(SPECIES_SLAKING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NINCADA:
	ScriptGiveMon(SPECIES_NINCADA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NINJASK:
	ScriptGiveMon(SPECIES_NINJASK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHEDINJA:
	ScriptGiveMon(SPECIES_SHEDINJA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHISMUR:
	ScriptGiveMon(SPECIES_WHISMUR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOUDRED:
	ScriptGiveMon(SPECIES_LOUDRED,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXPLOUD:
	ScriptGiveMon(SPECIES_EXPLOUD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAKUHITA:
	ScriptGiveMon(SPECIES_MAKUHITA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HARIYAMA:
	ScriptGiveMon(SPECIES_HARIYAMA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AZURILL:
	ScriptGiveMon(SPECIES_AZURILL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOSEPASS:
	ScriptGiveMon(SPECIES_NOSEPASS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKITTY:
	ScriptGiveMon(SPECIES_SKITTY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DELCATTY:
	ScriptGiveMon(SPECIES_DELCATTY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SABLEYE:
	ScriptGiveMon(SPECIES_SABLEYE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAWILE:
	ScriptGiveMon(SPECIES_MAWILE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARON:
	ScriptGiveMon(SPECIES_ARON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LAIRON:
	ScriptGiveMon(SPECIES_LAIRON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AGGRON:
	ScriptGiveMon(SPECIES_AGGRON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEDITITE:
	ScriptGiveMon(SPECIES_MEDITITE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEDICHAM:
	ScriptGiveMon(SPECIES_MEDICHAM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTRIKE:
	ScriptGiveMon(SPECIES_ELECTRIKE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANECTRIC:
	ScriptGiveMon(SPECIES_MANECTRIC,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PLUSLE:
	ScriptGiveMon(SPECIES_PLUSLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MINUN:
	ScriptGiveMon(SPECIES_MINUN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VOLBEAT:
	ScriptGiveMon(SPECIES_VOLBEAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ILLUMISE:
	ScriptGiveMon(SPECIES_ILLUMISE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROSELIA:
	ScriptGiveMon(SPECIES_ROSELIA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GULPIN:
	ScriptGiveMon(SPECIES_GULPIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWALOT:
	ScriptGiveMon(SPECIES_SWALOT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARVANHA:
	ScriptGiveMon(SPECIES_CARVANHA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHARPEDO:
	ScriptGiveMon(SPECIES_SHARPEDO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WAILMER:
	ScriptGiveMon(SPECIES_WAILMER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WAILORD:
	ScriptGiveMon(SPECIES_WAILORD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NUMEL:
	ScriptGiveMon(SPECIES_NUMEL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CAMERUPT:
	ScriptGiveMon(SPECIES_CAMERUPT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORKOAL:
	ScriptGiveMon(SPECIES_TORKOAL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPOINK:
	ScriptGiveMon(SPECIES_SPOINK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRUMPIG:
	ScriptGiveMon(SPECIES_GRUMPIG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPINDA:
	ScriptGiveMon(SPECIES_SPINDA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRAPINCH:
	ScriptGiveMon(SPECIES_TRAPINCH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIBRAVA:
	ScriptGiveMon(SPECIES_VIBRAVA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLYGON:
	ScriptGiveMon(SPECIES_FLYGON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CACNEA:
	ScriptGiveMon(SPECIES_CACNEA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CACTURNE:
	ScriptGiveMon(SPECIES_CACTURNE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWABLU:
	ScriptGiveMon(SPECIES_SWABLU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALTARIA:
	ScriptGiveMon(SPECIES_ALTARIA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZANGOOSE:
	ScriptGiveMon(SPECIES_ZANGOOSE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEVIPER:
	ScriptGiveMon(SPECIES_SEVIPER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUNATONE:
	ScriptGiveMon(SPECIES_LUNATONE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SOLROCK:
	ScriptGiveMon(SPECIES_SOLROCK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BARBOACH:
	ScriptGiveMon(SPECIES_BARBOACH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHISCASH:
	ScriptGiveMon(SPECIES_WHISCASH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORPHISH:
	ScriptGiveMon(SPECIES_CORPHISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRAWDAUNT:
	ScriptGiveMon(SPECIES_CRAWDAUNT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BALTOY:
	ScriptGiveMon(SPECIES_BALTOY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAYDOL:
	ScriptGiveMon(SPECIES_CLAYDOL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LILEEP:
	ScriptGiveMon(SPECIES_LILEEP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRADILY:
	ScriptGiveMon(SPECIES_CRADILY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ANORITH:
	ScriptGiveMon(SPECIES_ANORITH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARMALDO:
	ScriptGiveMon(SPECIES_ARMALDO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FEEBAS:
	ScriptGiveMon(SPECIES_FEEBAS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MILOTIC:
	ScriptGiveMon(SPECIES_MILOTIC,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CASTFORM:
	ScriptGiveMon(SPECIES_CASTFORM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KECLEON:
	ScriptGiveMon(SPECIES_KECLEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHUPPET:
	ScriptGiveMon(SPECIES_SHUPPET,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BANETTE:
	ScriptGiveMon(SPECIES_BANETTE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSKULL:
	ScriptGiveMon(SPECIES_DUSKULL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSCLOPS:
	ScriptGiveMon(SPECIES_DUSCLOPS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TROPIUS:
	ScriptGiveMon(SPECIES_TROPIUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHIMECHO:
	ScriptGiveMon(SPECIES_CHIMECHO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ABSOL:
	ScriptGiveMon(SPECIES_ABSOL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WYNAUT:
	ScriptGiveMon(SPECIES_WYNAUT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNORUNT:
	ScriptGiveMon(SPECIES_SNORUNT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLALIE:
	ScriptGiveMon(SPECIES_GLALIE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPHEAL:
	ScriptGiveMon(SPECIES_SPHEAL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEALEO:
	ScriptGiveMon(SPECIES_SEALEO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WALREIN:
	ScriptGiveMon(SPECIES_WALREIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAMPERL:
	ScriptGiveMon(SPECIES_CLAMPERL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HUNTAIL:
	ScriptGiveMon(SPECIES_HUNTAIL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOREBYSS:
	ScriptGiveMon(SPECIES_GOREBYSS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RELICANTH:
	ScriptGiveMon(SPECIES_RELICANTH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUVDISC:
	ScriptGiveMon(SPECIES_LUVDISC,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BAGON:
	ScriptGiveMon(SPECIES_BAGON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELGON:
	ScriptGiveMon(SPECIES_SHELGON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SALAMENCE:
	ScriptGiveMon(SPECIES_SALAMENCE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BELDUM:
	ScriptGiveMon(SPECIES_BELDUM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case METANG:
	ScriptGiveMon(SPECIES_METANG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case METAGROSS:
	ScriptGiveMon(SPECIES_METAGROSS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TURTWIG:
	ScriptGiveMon(SPECIES_TURTWIG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROTLE:
	ScriptGiveMon(SPECIES_GROTLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORTERRA:
	ScriptGiveMon(SPECIES_TORTERRA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHIMCHAR:
	ScriptGiveMon(SPECIES_CHIMCHAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MONFERNO:
	ScriptGiveMon(SPECIES_MONFERNO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INFERNAPE:
	ScriptGiveMon(SPECIES_INFERNAPE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIPLUP:
	ScriptGiveMon(SPECIES_PIPLUP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PRINPLUP:
	ScriptGiveMon(SPECIES_PRINPLUP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EMPOLEON:
	ScriptGiveMon(SPECIES_EMPOLEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARLY:
	ScriptGiveMon(SPECIES_STARLY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARAVIA:
	ScriptGiveMon(SPECIES_STARAVIA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARAPTOR:
	ScriptGiveMon(SPECIES_STARAPTOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BIDOOF:
	ScriptGiveMon(SPECIES_BIDOOF,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BIBAREL:
	ScriptGiveMon(SPECIES_BIBAREL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KRICKETOT:
	ScriptGiveMon(SPECIES_KRICKETOT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KRICKETUNE:
	ScriptGiveMon(SPECIES_KRICKETUNE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHINX:
	ScriptGiveMon(SPECIES_SHINX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUXIO:
	ScriptGiveMon(SPECIES_LUXIO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUXRAY:
	ScriptGiveMon(SPECIES_LUXRAY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUDEW:
	ScriptGiveMon(SPECIES_BUDEW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROSERADE:
	ScriptGiveMon(SPECIES_ROSERADE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRANIDOS:
	ScriptGiveMon(SPECIES_CRANIDOS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAMPARDOS:
	ScriptGiveMon(SPECIES_RAMPARDOS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHIELDON:
	ScriptGiveMon(SPECIES_SHIELDON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BASTIODON:
	ScriptGiveMon(SPECIES_BASTIODON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BURMY:
	ScriptGiveMon(SPECIES_BURMY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WORMADAM:
	ScriptGiveMon(SPECIES_WORMADAM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MOTHIM:
	ScriptGiveMon(SPECIES_MOTHIM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COMBEE:
	ScriptGiveMon(SPECIES_COMBEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VESPIQUEN:
	ScriptGiveMon(SPECIES_VESPIQUEN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PACHIRISU:
	ScriptGiveMon(SPECIES_PACHIRISU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUIZEL:
	ScriptGiveMon(SPECIES_BUIZEL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLOATZEL:
	ScriptGiveMon(SPECIES_FLOATZEL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHERUBI:
	ScriptGiveMon(SPECIES_CHERUBI,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHERRIM:
	ScriptGiveMon(SPECIES_CHERRIM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELLOS:
	ScriptGiveMon(SPECIES_SHELLOS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GASTRODON:
	ScriptGiveMon(SPECIES_GASTRODON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMBIPOM:
	ScriptGiveMon(SPECIES_AMBIPOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRIFLOON:
	ScriptGiveMon(SPECIES_DRIFLOON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRIFBLIM:
	ScriptGiveMon(SPECIES_DRIFBLIM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUNEARY:
	ScriptGiveMon(SPECIES_BUNEARY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOPUNNY:
	ScriptGiveMon(SPECIES_LOPUNNY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MISMAGIUS:
	ScriptGiveMon(SPECIES_MISMAGIUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HONCHKROW:
	ScriptGiveMon(SPECIES_HONCHKROW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLAMEOW:
	ScriptGiveMon(SPECIES_GLAMEOW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PURUGLY:
	ScriptGiveMon(SPECIES_PURUGLY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHINGLING:
	ScriptGiveMon(SPECIES_CHINGLING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STUNKY:
	ScriptGiveMon(SPECIES_STUNKY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKUNTANK:
	ScriptGiveMon(SPECIES_SKUNTANK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRONZOR:
	ScriptGiveMon(SPECIES_BRONZOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRONZONG:
	ScriptGiveMon(SPECIES_BRONZONG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BONSLY:
	ScriptGiveMon(SPECIES_BONSLY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIME_JR:
	ScriptGiveMon(SPECIES_MIME_JR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAPPINY:
	ScriptGiveMon(SPECIES_HAPPINY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHATOT:
	ScriptGiveMon(SPECIES_CHATOT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPIRITOMB:
	ScriptGiveMon(SPECIES_SPIRITOMB,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GIBLE:
	ScriptGiveMon(SPECIES_GIBLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GABITE:
	ScriptGiveMon(SPECIES_GABITE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GARCHOMP:
	ScriptGiveMon(SPECIES_GARCHOMP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUNCHLAX:
	ScriptGiveMon(SPECIES_MUNCHLAX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RIOLU:
	ScriptGiveMon(SPECIES_RIOLU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUCARIO:
	ScriptGiveMon(SPECIES_LUCARIO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HIPPOPOTAS:
	ScriptGiveMon(SPECIES_HIPPOPOTAS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HIPPOWDON:
	ScriptGiveMon(SPECIES_HIPPOWDON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKORUPI:
	ScriptGiveMon(SPECIES_SKORUPI,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAPION:
	ScriptGiveMon(SPECIES_DRAPION,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CROAGUNK:
	ScriptGiveMon(SPECIES_CROAGUNK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXICROAK:
	ScriptGiveMon(SPECIES_TOXICROAK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARNIVINE:
	ScriptGiveMon(SPECIES_CARNIVINE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FINNEON:
	ScriptGiveMon(SPECIES_FINNEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUMINEON:
	ScriptGiveMon(SPECIES_LUMINEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANTYKE:
	ScriptGiveMon(SPECIES_MANTYKE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNOVER:
	ScriptGiveMon(SPECIES_SNOVER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ABOMASNOW:
	ScriptGiveMon(SPECIES_ABOMASNOW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEAVILE:
	ScriptGiveMon(SPECIES_WEAVILE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGNEZONE:
	ScriptGiveMon(SPECIES_MAGNEZONE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LICKILICKY:
	ScriptGiveMon(SPECIES_LICKILICKY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RHYPERIOR:
	ScriptGiveMon(SPECIES_RHYPERIOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TANGROWTH:
	ScriptGiveMon(SPECIES_TANGROWTH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTIVIRE:
	ScriptGiveMon(SPECIES_ELECTIVIRE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGMORTAR:
	ScriptGiveMon(SPECIES_MAGMORTAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGEKISS:
	ScriptGiveMon(SPECIES_TOGEKISS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YANMEGA:
	ScriptGiveMon(SPECIES_YANMEGA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEAFEON:
	ScriptGiveMon(SPECIES_LEAFEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLACEON:
	ScriptGiveMon(SPECIES_GLACEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLISCOR:
	ScriptGiveMon(SPECIES_GLISCOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAMOSWINE:
	ScriptGiveMon(SPECIES_MAMOSWINE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PORYGON_Z:
	ScriptGiveMon(SPECIES_PORYGON_Z,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GALLADE:
	ScriptGiveMon(SPECIES_GALLADE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PROBOPASS:
	ScriptGiveMon(SPECIES_PROBOPASS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSKNOIR:
	ScriptGiveMon(SPECIES_DUSKNOIR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROSLASS:
	ScriptGiveMon(SPECIES_FROSLASS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROTOM:
	ScriptGiveMon(SPECIES_ROTOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNIVY:
	ScriptGiveMon(SPECIES_SNIVY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SERVINE:
	ScriptGiveMon(SPECIES_SERVINE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SERPERIOR:
	ScriptGiveMon(SPECIES_SERPERIOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TEPIG:
	ScriptGiveMon(SPECIES_TEPIG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIGNITE:
	ScriptGiveMon(SPECIES_PIGNITE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EMBOAR:
	ScriptGiveMon(SPECIES_EMBOAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OSHAWOTT:
	ScriptGiveMon(SPECIES_OSHAWOTT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEWOTT:
	ScriptGiveMon(SPECIES_DEWOTT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SAMUROTT:
	ScriptGiveMon(SPECIES_SAMUROTT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PATRAT:
	ScriptGiveMon(SPECIES_PATRAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WATCHOG:
	ScriptGiveMon(SPECIES_WATCHOG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LILLIPUP:
	ScriptGiveMon(SPECIES_LILLIPUP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HERDIER:
	ScriptGiveMon(SPECIES_HERDIER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STOUTLAND:
	ScriptGiveMon(SPECIES_STOUTLAND,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PURRLOIN:
	ScriptGiveMon(SPECIES_PURRLOIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LIEPARD:
	ScriptGiveMon(SPECIES_LIEPARD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANSAGE:
	ScriptGiveMon(SPECIES_PANSAGE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIMISAGE:
	ScriptGiveMon(SPECIES_SIMISAGE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANSEAR:
	ScriptGiveMon(SPECIES_PANSEAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIMISEAR:
	ScriptGiveMon(SPECIES_SIMISEAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANPOUR:
	ScriptGiveMon(SPECIES_PANPOUR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIMIPOUR:
	ScriptGiveMon(SPECIES_SIMIPOUR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUNNA:
	ScriptGiveMon(SPECIES_MUNNA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUSHARNA:
	ScriptGiveMon(SPECIES_MUSHARNA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDOVE:
	ScriptGiveMon(SPECIES_PIDOVE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRANQUILL:
	ScriptGiveMon(SPECIES_TRANQUILL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case UNFEZANT:
	ScriptGiveMon(SPECIES_UNFEZANT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLITZLE:
	ScriptGiveMon(SPECIES_BLITZLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZEBSTRIKA:
	ScriptGiveMon(SPECIES_ZEBSTRIKA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROGGENROLA:
	ScriptGiveMon(SPECIES_ROGGENROLA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOLDORE:
	ScriptGiveMon(SPECIES_BOLDORE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GIGALITH:
	ScriptGiveMon(SPECIES_GIGALITH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOOBAT:
	ScriptGiveMon(SPECIES_WOOBAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWOOBAT:
	ScriptGiveMon(SPECIES_SWOOBAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRILBUR:
	ScriptGiveMon(SPECIES_DRILBUR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXCADRILL:
	ScriptGiveMon(SPECIES_EXCADRILL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AUDINO:
	ScriptGiveMon(SPECIES_AUDINO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TIMBURR:
	ScriptGiveMon(SPECIES_TIMBURR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GURDURR:
	ScriptGiveMon(SPECIES_GURDURR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CONKELDURR:
	ScriptGiveMon(SPECIES_CONKELDURR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYMPOLE:
	ScriptGiveMon(SPECIES_TYMPOLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PALPITOAD:
	ScriptGiveMon(SPECIES_PALPITOAD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEISMITOAD:
	ScriptGiveMon(SPECIES_SEISMITOAD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case THROH:
	ScriptGiveMon(SPECIES_THROH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SAWK:
	ScriptGiveMon(SPECIES_SAWK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEWADDLE:
	ScriptGiveMon(SPECIES_SEWADDLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWADLOON:
	ScriptGiveMon(SPECIES_SWADLOON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEAVANNY:
	ScriptGiveMon(SPECIES_LEAVANNY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENIPEDE:
	ScriptGiveMon(SPECIES_VENIPEDE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHIRLIPEDE:
	ScriptGiveMon(SPECIES_WHIRLIPEDE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCOLIPEDE:
	ScriptGiveMon(SPECIES_SCOLIPEDE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COTTONEE:
	ScriptGiveMon(SPECIES_COTTONEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHIMSICOTT:
	ScriptGiveMon(SPECIES_WHIMSICOTT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PETILIL:
	ScriptGiveMon(SPECIES_PETILIL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LILLIGANT:
	ScriptGiveMon(SPECIES_LILLIGANT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BASCULIN:
	ScriptGiveMon(SPECIES_BASCULIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDILE:
	ScriptGiveMon(SPECIES_SANDILE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KROKOROK:
	ScriptGiveMon(SPECIES_KROKOROK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KROOKODILE:
	ScriptGiveMon(SPECIES_KROOKODILE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DARUMAKA:
	ScriptGiveMon(SPECIES_DARUMAKA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DARMANITAN:
	ScriptGiveMon(SPECIES_DARMANITAN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MARACTUS:
	ScriptGiveMon(SPECIES_MARACTUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DWEBBLE:
	ScriptGiveMon(SPECIES_DWEBBLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRUSTLE:
	ScriptGiveMon(SPECIES_CRUSTLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCRAGGY:
	ScriptGiveMon(SPECIES_SCRAGGY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCRAFTY:
	ScriptGiveMon(SPECIES_SCRAFTY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIGILYPH:
	ScriptGiveMon(SPECIES_SIGILYPH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YAMASK:
	ScriptGiveMon(SPECIES_YAMASK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COFAGRIGUS:
	ScriptGiveMon(SPECIES_COFAGRIGUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TIRTOUGA:
	ScriptGiveMon(SPECIES_TIRTOUGA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARRACOSTA:
	ScriptGiveMon(SPECIES_CARRACOSTA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCHEN:
	ScriptGiveMon(SPECIES_ARCHEN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCHEOPS:
	ScriptGiveMon(SPECIES_ARCHEOPS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRUBBISH:
	ScriptGiveMon(SPECIES_TRUBBISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GARBODOR:
	ScriptGiveMon(SPECIES_GARBODOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZORUA:
	ScriptGiveMon(SPECIES_ZORUA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZOROARK:
	ScriptGiveMon(SPECIES_ZOROARK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MINCCINO:
	ScriptGiveMon(SPECIES_MINCCINO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CINCCINO:
	ScriptGiveMon(SPECIES_CINCCINO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOTHITA:
	ScriptGiveMon(SPECIES_GOTHITA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOTHORITA:
	ScriptGiveMon(SPECIES_GOTHORITA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOTHITELLE:
	ScriptGiveMon(SPECIES_GOTHITELLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SOLOSIS:
	ScriptGiveMon(SPECIES_SOLOSIS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUOSION:
	ScriptGiveMon(SPECIES_DUOSION,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case REUNICLUS:
	ScriptGiveMon(SPECIES_REUNICLUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUCKLETT:
	ScriptGiveMon(SPECIES_DUCKLETT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWANNA:
	ScriptGiveMon(SPECIES_SWANNA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VANILLITE:
	ScriptGiveMon(SPECIES_VANILLITE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VANILLISH:
	ScriptGiveMon(SPECIES_VANILLISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VANILLUXE:
	ScriptGiveMon(SPECIES_VANILLUXE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEERLING:
	ScriptGiveMon(SPECIES_DEERLING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SAWSBUCK:
	ScriptGiveMon(SPECIES_SAWSBUCK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EMOLGA:
	ScriptGiveMon(SPECIES_EMOLGA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KARRABLAST:
	ScriptGiveMon(SPECIES_KARRABLAST,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ESCAVALIER:
	ScriptGiveMon(SPECIES_ESCAVALIER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FOONGUS:
	ScriptGiveMon(SPECIES_FOONGUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMOONGUSS:
	ScriptGiveMon(SPECIES_AMOONGUSS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FRILLISH:
	ScriptGiveMon(SPECIES_FRILLISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JELLICENT:
	ScriptGiveMon(SPECIES_JELLICENT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALOMOMOLA:
	ScriptGiveMon(SPECIES_ALOMOMOLA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JOLTIK:
	ScriptGiveMon(SPECIES_JOLTIK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GALVANTULA:
	ScriptGiveMon(SPECIES_GALVANTULA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FERROSEED:
	ScriptGiveMon(SPECIES_FERROSEED,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FERROTHORN:
	ScriptGiveMon(SPECIES_FERROTHORN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLINK:
	ScriptGiveMon(SPECIES_KLINK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLANG:
	ScriptGiveMon(SPECIES_KLANG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLINKLANG:
	ScriptGiveMon(SPECIES_KLINKLANG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYNAMO:
	ScriptGiveMon(SPECIES_TYNAMO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EELEKTRIK:
	ScriptGiveMon(SPECIES_EELEKTRIK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EELEKTROSS:
	ScriptGiveMon(SPECIES_EELEKTROSS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELGYEM:
	ScriptGiveMon(SPECIES_ELGYEM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEHEEYEM:
	ScriptGiveMon(SPECIES_BEHEEYEM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LITWICK:
	ScriptGiveMon(SPECIES_LITWICK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LAMPENT:
	ScriptGiveMon(SPECIES_LAMPENT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHANDELURE:
	ScriptGiveMon(SPECIES_CHANDELURE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AXEW:
	ScriptGiveMon(SPECIES_AXEW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FRAXURE:
	ScriptGiveMon(SPECIES_FRAXURE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAXORUS:
	ScriptGiveMon(SPECIES_HAXORUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUBCHOO:
	ScriptGiveMon(SPECIES_CUBCHOO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEARTIC:
	ScriptGiveMon(SPECIES_BEARTIC,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRYOGONAL:
	ScriptGiveMon(SPECIES_CRYOGONAL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELMET:
	ScriptGiveMon(SPECIES_SHELMET,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ACCELGOR:
	ScriptGiveMon(SPECIES_ACCELGOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STUNFISK:
	ScriptGiveMon(SPECIES_STUNFISK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIENFOO:
	ScriptGiveMon(SPECIES_MIENFOO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIENSHAO:
	ScriptGiveMon(SPECIES_MIENSHAO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRUDDIGON:
	ScriptGiveMon(SPECIES_DRUDDIGON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLETT:
	ScriptGiveMon(SPECIES_GOLETT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLURK:
	ScriptGiveMon(SPECIES_GOLURK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PAWNIARD:
	ScriptGiveMon(SPECIES_PAWNIARD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BISHARP:
	ScriptGiveMon(SPECIES_BISHARP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOUFFALANT:
	ScriptGiveMon(SPECIES_BOUFFALANT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RUFFLET:
	ScriptGiveMon(SPECIES_RUFFLET,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRAVIARY:
	ScriptGiveMon(SPECIES_BRAVIARY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VULLABY:
	ScriptGiveMon(SPECIES_VULLABY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANDIBUZZ:
	ScriptGiveMon(SPECIES_MANDIBUZZ,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HEATMOR:
	ScriptGiveMon(SPECIES_HEATMOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DURANT:
	ScriptGiveMon(SPECIES_DURANT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEINO:
	ScriptGiveMon(SPECIES_DEINO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZWEILOUS:
	ScriptGiveMon(SPECIES_ZWEILOUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HYDREIGON:
	ScriptGiveMon(SPECIES_HYDREIGON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LARVESTA:
	ScriptGiveMon(SPECIES_LARVESTA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VOLCARONA:
	ScriptGiveMon(SPECIES_VOLCARONA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHESPIN:
	ScriptGiveMon(SPECIES_CHESPIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QUILLADIN:
	ScriptGiveMon(SPECIES_QUILLADIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHESNAUGHT:
	ScriptGiveMon(SPECIES_CHESNAUGHT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FENNEKIN:
	ScriptGiveMon(SPECIES_FENNEKIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRAIXEN:
	ScriptGiveMon(SPECIES_BRAIXEN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DELPHOX:
	ScriptGiveMon(SPECIES_DELPHOX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROAKIE:
	ScriptGiveMon(SPECIES_FROAKIE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROGADIER:
	ScriptGiveMon(SPECIES_FROGADIER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRENINJA:
	ScriptGiveMon(SPECIES_GRENINJA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUNNELBY:
	ScriptGiveMon(SPECIES_BUNNELBY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DIGGERSBY:
	ScriptGiveMon(SPECIES_DIGGERSBY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLETCHLING:
	ScriptGiveMon(SPECIES_FLETCHLING,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLETCHINDER:
	ScriptGiveMon(SPECIES_FLETCHINDER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TALONFLAME:
	ScriptGiveMon(SPECIES_TALONFLAME,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCATTERBUG:
	ScriptGiveMon(SPECIES_SCATTERBUG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPEWPA:
	ScriptGiveMon(SPECIES_SPEWPA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIVILLON:
	ScriptGiveMon(SPECIES_VIVILLON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LITLEO:
	ScriptGiveMon(SPECIES_LITLEO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PYROAR:
	ScriptGiveMon(SPECIES_PYROAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLABEBE:
	ScriptGiveMon(SPECIES_FLABEBE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLOETTE:
	ScriptGiveMon(SPECIES_FLOETTE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLORGES:
	ScriptGiveMon(SPECIES_FLORGES,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKIDDO:
	ScriptGiveMon(SPECIES_SKIDDO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOGOAT:
	ScriptGiveMon(SPECIES_GOGOAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANCHAM:
	ScriptGiveMon(SPECIES_PANCHAM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANGORO:
	ScriptGiveMon(SPECIES_PANGORO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FURFROU:
	ScriptGiveMon(SPECIES_FURFROU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ESPURR:
	ScriptGiveMon(SPECIES_ESPURR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEOWSTIC:
	ScriptGiveMon(SPECIES_MEOWSTIC,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HONEDGE:
	ScriptGiveMon(SPECIES_HONEDGE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DOUBLADE:
	ScriptGiveMon(SPECIES_DOUBLADE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AEGISLASH:
	ScriptGiveMon(SPECIES_AEGISLASH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPRITZEE:
	ScriptGiveMon(SPECIES_SPRITZEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AROMATISSE:
	ScriptGiveMon(SPECIES_AROMATISSE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWIRLIX:
	ScriptGiveMon(SPECIES_SWIRLIX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLURPUFF:
	ScriptGiveMon(SPECIES_SLURPUFF,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INKAY:
	ScriptGiveMon(SPECIES_INKAY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MALAMAR:
	ScriptGiveMon(SPECIES_MALAMAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BINACLE:
	ScriptGiveMon(SPECIES_BINACLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BARBARACLE:
	ScriptGiveMon(SPECIES_BARBARACLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKRELP:
	ScriptGiveMon(SPECIES_SKRELP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGALGE:
	ScriptGiveMon(SPECIES_DRAGALGE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAUNCHER:
	ScriptGiveMon(SPECIES_CLAUNCHER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAWITZER:
	ScriptGiveMon(SPECIES_CLAWITZER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HELIOPTILE:
	ScriptGiveMon(SPECIES_HELIOPTILE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HELIOLISK:
	ScriptGiveMon(SPECIES_HELIOLISK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYRUNT:
	ScriptGiveMon(SPECIES_TYRUNT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYRANTRUM:
	ScriptGiveMon(SPECIES_TYRANTRUM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMAURA:
	ScriptGiveMon(SPECIES_AMAURA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AURORUS:
	ScriptGiveMon(SPECIES_AURORUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SYLVEON:
	ScriptGiveMon(SPECIES_SYLVEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAWLUCHA:
	ScriptGiveMon(SPECIES_HAWLUCHA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEDENNE:
	ScriptGiveMon(SPECIES_DEDENNE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARBINK:
	ScriptGiveMon(SPECIES_CARBINK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOOMY:
	ScriptGiveMon(SPECIES_GOOMY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLIGGOO:
	ScriptGiveMon(SPECIES_SLIGGOO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOODRA:
	ScriptGiveMon(SPECIES_GOODRA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLEFKI:
	ScriptGiveMon(SPECIES_KLEFKI,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PHANTUMP:
	ScriptGiveMon(SPECIES_PHANTUMP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TREVENANT:
	ScriptGiveMon(SPECIES_TREVENANT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PUMPKABOO:
	ScriptGiveMon(SPECIES_PUMPKABOO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOURGEIST:
	ScriptGiveMon(SPECIES_GOURGEIST,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BERGMITE:
	ScriptGiveMon(SPECIES_BERGMITE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AVALUGG:
	ScriptGiveMon(SPECIES_AVALUGG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOIBAT:
	ScriptGiveMon(SPECIES_NOIBAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOIVERN:
	ScriptGiveMon(SPECIES_NOIVERN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROWLET:
	ScriptGiveMon(SPECIES_ROWLET,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DARTRIX:
	ScriptGiveMon(SPECIES_DARTRIX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DECIDUEYE:
	ScriptGiveMon(SPECIES_DECIDUEYE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LITTEN:
	ScriptGiveMon(SPECIES_LITTEN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORRACAT:
	ScriptGiveMon(SPECIES_TORRACAT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INCINEROAR:
	ScriptGiveMon(SPECIES_INCINEROAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POPPLIO:
	ScriptGiveMon(SPECIES_POPPLIO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRIONNE:
	ScriptGiveMon(SPECIES_BRIONNE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PRIMARINA:
	ScriptGiveMon(SPECIES_PRIMARINA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIKIPEK:
	ScriptGiveMon(SPECIES_PIKIPEK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRUMBEAK:
	ScriptGiveMon(SPECIES_TRUMBEAK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOUCANNON:
	ScriptGiveMon(SPECIES_TOUCANNON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YUNGOOS:
	ScriptGiveMon(SPECIES_YUNGOOS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GUMSHOOS:
	ScriptGiveMon(SPECIES_GUMSHOOS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRUBBIN:
	ScriptGiveMon(SPECIES_GRUBBIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARJABUG:
	ScriptGiveMon(SPECIES_CHARJABUG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIKAVOLT:
	ScriptGiveMon(SPECIES_VIKAVOLT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRABRAWLER:
	ScriptGiveMon(SPECIES_CRABRAWLER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRABOMINABLE:
	ScriptGiveMon(SPECIES_CRABOMINABLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ORICORIO:
	ScriptGiveMon(SPECIES_ORICORIO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUTIEFLY:
	ScriptGiveMon(SPECIES_CUTIEFLY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RIBOMBEE:
	ScriptGiveMon(SPECIES_RIBOMBEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROCKRUFF:
	ScriptGiveMon(SPECIES_ROCKRUFF,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LYCANROC:
	ScriptGiveMon(SPECIES_LYCANROC,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WISHIWASHI:
	ScriptGiveMon(SPECIES_WISHIWASHI,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAREANIE:
	ScriptGiveMon(SPECIES_MAREANIE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXAPEX:
	ScriptGiveMon(SPECIES_TOXAPEX,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUDBRAY:
	ScriptGiveMon(SPECIES_MUDBRAY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUDSDALE:
	ScriptGiveMon(SPECIES_MUDSDALE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEWPIDER:
	ScriptGiveMon(SPECIES_DEWPIDER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARAQUANID:
	ScriptGiveMon(SPECIES_ARAQUANID,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FOMANTIS:
	ScriptGiveMon(SPECIES_FOMANTIS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LURANTIS:
	ScriptGiveMon(SPECIES_LURANTIS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MORELULL:
	ScriptGiveMon(SPECIES_MORELULL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHIINOTIC:
	ScriptGiveMon(SPECIES_SHIINOTIC,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SALANDIT:
	ScriptGiveMon(SPECIES_SALANDIT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SALAZZLE:
	ScriptGiveMon(SPECIES_SALAZZLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STUFFUL:
	ScriptGiveMon(SPECIES_STUFFUL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEWEAR:
	ScriptGiveMon(SPECIES_BEWEAR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOUNSWEET:
	ScriptGiveMon(SPECIES_BOUNSWEET,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STEENEE:
	ScriptGiveMon(SPECIES_STEENEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TSAREENA:
	ScriptGiveMon(SPECIES_TSAREENA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COMFEY:
	ScriptGiveMon(SPECIES_COMFEY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ORANGURU:
	ScriptGiveMon(SPECIES_ORANGURU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PASSIMIAN:
	ScriptGiveMon(SPECIES_PASSIMIAN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WIMPOD:
	ScriptGiveMon(SPECIES_WIMPOD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLISOPOD:
	ScriptGiveMon(SPECIES_GOLISOPOD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDYGAST:
	ScriptGiveMon(SPECIES_SANDYGAST,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PALOSSAND:
	ScriptGiveMon(SPECIES_PALOSSAND,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PYUKUMUKU:
	ScriptGiveMon(SPECIES_PYUKUMUKU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYPE_NULL:
	ScriptGiveMon(SPECIES_TYPE_NULL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SILVALLY:
	ScriptGiveMon(SPECIES_SILVALLY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MINIOR:
	ScriptGiveMon(SPECIES_MINIOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KOMALA:
	ScriptGiveMon(SPECIES_KOMALA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TURTONATOR:
	ScriptGiveMon(SPECIES_TURTONATOR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGEDEMARU:
	ScriptGiveMon(SPECIES_TOGEDEMARU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIMIKYU:
	ScriptGiveMon(SPECIES_MIMIKYU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRUXISH:
	ScriptGiveMon(SPECIES_BRUXISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAMPA:
	ScriptGiveMon(SPECIES_DRAMPA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DHELMISE:
	ScriptGiveMon(SPECIES_DHELMISE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JANGMO_O:
	ScriptGiveMon(SPECIES_JANGMO_O,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAKAMO_O:
	ScriptGiveMon(SPECIES_HAKAMO_O,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KOMMO_O:
	ScriptGiveMon(SPECIES_KOMMO_O,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_KOKO:
	ScriptGiveMon(SPECIES_TAPU_KOKO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_LELE:
	ScriptGiveMon(SPECIES_TAPU_LELE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_BULU:
	ScriptGiveMon(SPECIES_TAPU_BULU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_FINI:
	ScriptGiveMon(SPECIES_TAPU_FINI,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COSMOG:
	ScriptGiveMon(SPECIES_COSMOG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COSMOEM:
	ScriptGiveMon(SPECIES_COSMOEM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROOKEY:
	ScriptGiveMon(SPECIES_GROOKEY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case THWACKEY:
	ScriptGiveMon(SPECIES_THWACKEY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RILLABOOM:
	ScriptGiveMon(SPECIES_RILLABOOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCORBUNNY:
	ScriptGiveMon(SPECIES_SCORBUNNY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RABOOT:
	ScriptGiveMon(SPECIES_RABOOT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CINDERACE:
	ScriptGiveMon(SPECIES_CINDERACE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SOBBLE:
	ScriptGiveMon(SPECIES_SOBBLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRIZZILE:
	ScriptGiveMon(SPECIES_DRIZZILE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INTELEON:
	ScriptGiveMon(SPECIES_INTELEON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKWOVET:
	ScriptGiveMon(SPECIES_SKWOVET,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GREEDENT:
	ScriptGiveMon(SPECIES_GREEDENT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROOKIDEE:
	ScriptGiveMon(SPECIES_ROOKIDEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORVISQUIRE:
	ScriptGiveMon(SPECIES_CORVISQUIRE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORVIKNIGHT:
	ScriptGiveMon(SPECIES_CORVIKNIGHT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLIPBUG:
	ScriptGiveMon(SPECIES_BLIPBUG,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DOTTLER:
	ScriptGiveMon(SPECIES_DOTTLER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ORBEETLE:
	ScriptGiveMon(SPECIES_ORBEETLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NICKIT:
	ScriptGiveMon(SPECIES_NICKIT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case THIEVUL:
	ScriptGiveMon(SPECIES_THIEVUL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOSSIFLEUR:
	ScriptGiveMon(SPECIES_GOSSIFLEUR,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELDEGOSS:
	ScriptGiveMon(SPECIES_ELDEGOSS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOOLOO:
	ScriptGiveMon(SPECIES_WOOLOO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUBWOOL:
	ScriptGiveMon(SPECIES_DUBWOOL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHEWTLE:
	ScriptGiveMon(SPECIES_CHEWTLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DREDNAW:
	ScriptGiveMon(SPECIES_DREDNAW,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YAMPER:
	ScriptGiveMon(SPECIES_YAMPER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOLTUND:
	ScriptGiveMon(SPECIES_BOLTUND,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROLYCOLY:
	ScriptGiveMon(SPECIES_ROLYCOLY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARKOL:
	ScriptGiveMon(SPECIES_CARKOL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COALOSSAL:
	ScriptGiveMon(SPECIES_COALOSSAL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case APPLIN:
	ScriptGiveMon(SPECIES_APPLIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLAPPLE:
	ScriptGiveMon(SPECIES_FLAPPLE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case APPLETUN:
	ScriptGiveMon(SPECIES_APPLETUN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SILICOBRA:
	ScriptGiveMon(SPECIES_SILICOBRA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDACONDA:
	ScriptGiveMon(SPECIES_SANDACONDA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRAMORANT:
	ScriptGiveMon(SPECIES_CRAMORANT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARROKUDA:
	ScriptGiveMon(SPECIES_ARROKUDA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BARRASKEWDA:
	ScriptGiveMon(SPECIES_BARRASKEWDA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXEL:
	ScriptGiveMon(SPECIES_TOXEL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXTRICITY:
	ScriptGiveMon(SPECIES_TOXTRICITY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIZZLIPEDE:
	ScriptGiveMon(SPECIES_SIZZLIPEDE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CENTISKORCH:
	ScriptGiveMon(SPECIES_CENTISKORCH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLOBBOPUS:
	ScriptGiveMon(SPECIES_CLOBBOPUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRAPPLOCT:
	ScriptGiveMon(SPECIES_GRAPPLOCT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SINISTEA:
	ScriptGiveMon(SPECIES_SINISTEA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLTEAGEIST:
	ScriptGiveMon(SPECIES_POLTEAGEIST,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HATENNA:
	ScriptGiveMon(SPECIES_HATENNA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HATTREM:
	ScriptGiveMon(SPECIES_HATTREM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HATTERENE:
	ScriptGiveMon(SPECIES_HATTERENE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case IMPIDIMP:
	ScriptGiveMon(SPECIES_IMPIDIMP,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MORGREM:
	ScriptGiveMon(SPECIES_MORGREM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRIMMSNARL:
	ScriptGiveMon(SPECIES_GRIMMSNARL,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OBSTAGOON:
	ScriptGiveMon(SPECIES_OBSTAGOON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PERRSERKER:
	ScriptGiveMon(SPECIES_PERRSERKER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CURSOLA:
	ScriptGiveMon(SPECIES_CURSOLA,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIRFETCHD:
	ScriptGiveMon(SPECIES_SIRFETCHD,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MR_RIME:
	ScriptGiveMon(SPECIES_MR_RIME,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RUNERIGUS:
	ScriptGiveMon(SPECIES_RUNERIGUS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MILCERY:
	ScriptGiveMon(SPECIES_MILCERY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALCREMIE:
	ScriptGiveMon(SPECIES_ALCREMIE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FALINKS:
	ScriptGiveMon(SPECIES_FALINKS,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PINCURCHIN:
	ScriptGiveMon(SPECIES_PINCURCHIN,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNOM:
	ScriptGiveMon(SPECIES_SNOM,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROSMOTH:
	ScriptGiveMon(SPECIES_FROSMOTH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STONJOURNER:
	ScriptGiveMon(SPECIES_STONJOURNER,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EISCUE:
	ScriptGiveMon(SPECIES_EISCUE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INDEEDEE:
	ScriptGiveMon(SPECIES_INDEEDEE,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MORPEKO:
	ScriptGiveMon(SPECIES_MORPEKO,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUFANT:
	ScriptGiveMon(SPECIES_CUFANT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COPPERAJAH:
	ScriptGiveMon(SPECIES_COPPERAJAH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRACOZOLT:
	ScriptGiveMon(SPECIES_DRACOZOLT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCTOZOLT:
	ScriptGiveMon(SPECIES_ARCTOZOLT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRACOVISH:
	ScriptGiveMon(SPECIES_DRACOVISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCTOVISH:
	ScriptGiveMon(SPECIES_ARCTOVISH,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DURALUDON:
	ScriptGiveMon(SPECIES_DURALUDON,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DREEPY:
	ScriptGiveMon(SPECIES_DREEPY,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAKLOAK:
	ScriptGiveMon(SPECIES_DRAKLOAK,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGAPULT:
	ScriptGiveMon(SPECIES_DRAGAPULT,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRXATU:
	ScriptGiveMon(SPECIES_TRXATU,77,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;
			}
	}
	break;
	case MG_MYTEAM_JOHTO:
	{
	ClearTextWindow();
	if (VarGet(VAR_HAS_ENTERED_BATTLE_FRONTIER) == 10) {
		data->state = PRUEBA6;
		break;
	}
			 switch(MenuPersonalizado2())
			{
				case BULBASAUR:
	ScriptGiveMon(SPECIES_BULBASAUR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case IVYSAUR:
	ScriptGiveMon(SPECIES_IVYSAUR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENUSAUR:
	ScriptGiveMon(SPECIES_VENUSAUR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARMANDER:
	ScriptGiveMon(SPECIES_CHARMANDER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARMELEON:
	ScriptGiveMon(SPECIES_CHARMELEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARIZARD:
	ScriptGiveMon(SPECIES_CHARIZARD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SQUIRTLE:
	ScriptGiveMon(SPECIES_SQUIRTLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WARTORTLE:
	ScriptGiveMon(SPECIES_WARTORTLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLASTOISE:
	ScriptGiveMon(SPECIES_BLASTOISE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CATERPIE:
	ScriptGiveMon(SPECIES_CATERPIE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case METAPOD:
	ScriptGiveMon(SPECIES_METAPOD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUTTERFREE:
	ScriptGiveMon(SPECIES_BUTTERFREE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEEDLE:
	ScriptGiveMon(SPECIES_WEEDLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KAKUNA:
	ScriptGiveMon(SPECIES_KAKUNA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEEDRILL:
	ScriptGiveMon(SPECIES_BEEDRILL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDGEY:
	ScriptGiveMon(SPECIES_PIDGEY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDGEOTTO:
	ScriptGiveMon(SPECIES_PIDGEOTTO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDGEOT:
	ScriptGiveMon(SPECIES_PIDGEOT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RATTATA:
	ScriptGiveMon(SPECIES_RATTATA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RATICATE:
	ScriptGiveMon(SPECIES_RATICATE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPEAROW:
	ScriptGiveMon(SPECIES_SPEAROW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FEAROW:
	ScriptGiveMon(SPECIES_FEAROW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EKANS:
	ScriptGiveMon(SPECIES_EKANS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARBOK:
	ScriptGiveMon(SPECIES_ARBOK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIKACHU:
	ScriptGiveMon(SPECIES_PIKACHU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAICHU:
	ScriptGiveMon(SPECIES_RAICHU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDSHREW:
	ScriptGiveMon(SPECIES_SANDSHREW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDSLASH:
	ScriptGiveMon(SPECIES_SANDSLASH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORAN_F:
	ScriptGiveMon(SPECIES_NIDORAN_F,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORINA:
	ScriptGiveMon(SPECIES_NIDORINA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDOQUEEN:
	ScriptGiveMon(SPECIES_NIDOQUEEN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORAN_M:
	ScriptGiveMon(SPECIES_NIDORAN_M,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDORINO:
	ScriptGiveMon(SPECIES_NIDORINO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NIDOKING:
	ScriptGiveMon(SPECIES_NIDOKING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLEFAIRY:
	ScriptGiveMon(SPECIES_CLEFAIRY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLEFABLE:
	ScriptGiveMon(SPECIES_CLEFABLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VULPIX:
	ScriptGiveMon(SPECIES_VULPIX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NINETALES:
	ScriptGiveMon(SPECIES_NINETALES,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JIGGLYPUFF:
	ScriptGiveMon(SPECIES_JIGGLYPUFF,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WIGGLYTUFF:
	ScriptGiveMon(SPECIES_WIGGLYTUFF,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZUBAT:
	ScriptGiveMon(SPECIES_ZUBAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLBAT:
	ScriptGiveMon(SPECIES_GOLBAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ODDISH:
	ScriptGiveMon(SPECIES_ODDISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLOOM:
	ScriptGiveMon(SPECIES_GLOOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VILEPLUME:
	ScriptGiveMon(SPECIES_VILEPLUME,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PARAS:
	ScriptGiveMon(SPECIES_PARAS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PARASECT:
	ScriptGiveMon(SPECIES_PARASECT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENONAT:
	ScriptGiveMon(SPECIES_VENONAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENOMOTH:
	ScriptGiveMon(SPECIES_VENOMOTH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DIGLETT:
	ScriptGiveMon(SPECIES_DIGLETT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUGTRIO:
	ScriptGiveMon(SPECIES_DUGTRIO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEOWTH:
	ScriptGiveMon(SPECIES_MEOWTH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PERSIAN:
	ScriptGiveMon(SPECIES_PERSIAN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PSYDUCK:
	ScriptGiveMon(SPECIES_PSYDUCK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLDUCK:
	ScriptGiveMon(SPECIES_GOLDUCK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANKEY:
	ScriptGiveMon(SPECIES_MANKEY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PRIMEAPE:
	ScriptGiveMon(SPECIES_PRIMEAPE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROWLITHE:
	ScriptGiveMon(SPECIES_GROWLITHE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCANINE:
	ScriptGiveMon(SPECIES_ARCANINE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLIWAG:
	ScriptGiveMon(SPECIES_POLIWAG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLIWHIRL:
	ScriptGiveMon(SPECIES_POLIWHIRL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLIWRATH:
	ScriptGiveMon(SPECIES_POLIWRATH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ABRA:
	ScriptGiveMon(SPECIES_ABRA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KADABRA:
	ScriptGiveMon(SPECIES_KADABRA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALAKAZAM:
	ScriptGiveMon(SPECIES_ALAKAZAM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MACHOP:
	ScriptGiveMon(SPECIES_MACHOP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MACHOKE:
	ScriptGiveMon(SPECIES_MACHOKE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MACHAMP:
	ScriptGiveMon(SPECIES_MACHAMP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BELLSPROUT:
	ScriptGiveMon(SPECIES_BELLSPROUT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEEPINBELL:
	ScriptGiveMon(SPECIES_WEEPINBELL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VICTREEBEL:
	ScriptGiveMon(SPECIES_VICTREEBEL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TENTACOOL:
	ScriptGiveMon(SPECIES_TENTACOOL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TENTACRUEL:
	ScriptGiveMon(SPECIES_TENTACRUEL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GEODUDE:
	ScriptGiveMon(SPECIES_GEODUDE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRAVELER:
	ScriptGiveMon(SPECIES_GRAVELER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLEM:
	ScriptGiveMon(SPECIES_GOLEM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PONYTA:
	ScriptGiveMon(SPECIES_PONYTA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAPIDASH:
	ScriptGiveMon(SPECIES_RAPIDASH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLOWPOKE:
	ScriptGiveMon(SPECIES_SLOWPOKE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLOWBRO:
	ScriptGiveMon(SPECIES_SLOWBRO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGNEMITE:
	ScriptGiveMon(SPECIES_MAGNEMITE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGNETON:
	ScriptGiveMon(SPECIES_MAGNETON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FARFETCHD:
	ScriptGiveMon(SPECIES_FARFETCHD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DODUO:
	ScriptGiveMon(SPECIES_DODUO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DODRIO:
	ScriptGiveMon(SPECIES_DODRIO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEEL:
	ScriptGiveMon(SPECIES_SEEL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEWGONG:
	ScriptGiveMon(SPECIES_DEWGONG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRIMER:
	ScriptGiveMon(SPECIES_GRIMER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUK:
	ScriptGiveMon(SPECIES_MUK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELLDER:
	ScriptGiveMon(SPECIES_SHELLDER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLOYSTER:
	ScriptGiveMon(SPECIES_CLOYSTER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GASTLY:
	ScriptGiveMon(SPECIES_GASTLY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAUNTER:
	ScriptGiveMon(SPECIES_HAUNTER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GENGAR:
	ScriptGiveMon(SPECIES_GENGAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ONIX:
	ScriptGiveMon(SPECIES_ONIX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DROWZEE:
	ScriptGiveMon(SPECIES_DROWZEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HYPNO:
	ScriptGiveMon(SPECIES_HYPNO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KRABBY:
	ScriptGiveMon(SPECIES_KRABBY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KINGLER:
	ScriptGiveMon(SPECIES_KINGLER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VOLTORB:
	ScriptGiveMon(SPECIES_VOLTORB,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTRODE:
	ScriptGiveMon(SPECIES_ELECTRODE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXEGGCUTE:
	ScriptGiveMon(SPECIES_EXEGGCUTE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXEGGUTOR:
	ScriptGiveMon(SPECIES_EXEGGUTOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUBONE:
	ScriptGiveMon(SPECIES_CUBONE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAROWAK:
	ScriptGiveMon(SPECIES_MAROWAK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HITMONLEE:
	ScriptGiveMon(SPECIES_HITMONLEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HITMONCHAN:
	ScriptGiveMon(SPECIES_HITMONCHAN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LICKITUNG:
	ScriptGiveMon(SPECIES_LICKITUNG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KOFFING:
	ScriptGiveMon(SPECIES_KOFFING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEEZING:
	ScriptGiveMon(SPECIES_WEEZING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RHYHORN:
	ScriptGiveMon(SPECIES_RHYHORN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RHYDON:
	ScriptGiveMon(SPECIES_RHYDON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHANSEY:
	ScriptGiveMon(SPECIES_CHANSEY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TANGELA:
	ScriptGiveMon(SPECIES_TANGELA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KANGASKHAN:
	ScriptGiveMon(SPECIES_KANGASKHAN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HORSEA:
	ScriptGiveMon(SPECIES_HORSEA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEADRA:
	ScriptGiveMon(SPECIES_SEADRA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLDEEN:
	ScriptGiveMon(SPECIES_GOLDEEN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEAKING:
	ScriptGiveMon(SPECIES_SEAKING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARYU:
	ScriptGiveMon(SPECIES_STARYU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARMIE:
	ScriptGiveMon(SPECIES_STARMIE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MR_MIME:
	ScriptGiveMon(SPECIES_MR_MIME,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCYTHER:
	ScriptGiveMon(SPECIES_SCYTHER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JYNX:
	ScriptGiveMon(SPECIES_JYNX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTABUZZ:
	ScriptGiveMon(SPECIES_ELECTABUZZ,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGMAR:
	ScriptGiveMon(SPECIES_MAGMAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PINSIR:
	ScriptGiveMon(SPECIES_PINSIR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAUROS:
	ScriptGiveMon(SPECIES_TAUROS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGIKARP:
	ScriptGiveMon(SPECIES_MAGIKARP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GYARADOS:
	ScriptGiveMon(SPECIES_GYARADOS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LAPRAS:
	ScriptGiveMon(SPECIES_LAPRAS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DITTO:
	ScriptGiveMon(SPECIES_DITTO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EEVEE:
	ScriptGiveMon(SPECIES_EEVEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VAPOREON:
	ScriptGiveMon(SPECIES_VAPOREON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JOLTEON:
	ScriptGiveMon(SPECIES_JOLTEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLAREON:
	ScriptGiveMon(SPECIES_FLAREON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PORYGON:
	ScriptGiveMon(SPECIES_PORYGON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OMANYTE:
	ScriptGiveMon(SPECIES_OMANYTE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OMASTAR:
	ScriptGiveMon(SPECIES_OMASTAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KABUTO:
	ScriptGiveMon(SPECIES_KABUTO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KABUTOPS:
	ScriptGiveMon(SPECIES_KABUTOPS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AERODACTYL:
	ScriptGiveMon(SPECIES_AERODACTYL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNORLAX:
	ScriptGiveMon(SPECIES_SNORLAX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRATINI:
	ScriptGiveMon(SPECIES_DRATINI,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGONAIR:
	ScriptGiveMon(SPECIES_DRAGONAIR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGONITE:
	ScriptGiveMon(SPECIES_DRAGONITE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHIKORITA:
	ScriptGiveMon(SPECIES_CHIKORITA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BAYLEEF:
	ScriptGiveMon(SPECIES_BAYLEEF,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEGANIUM:
	ScriptGiveMon(SPECIES_MEGANIUM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CYNDAQUIL:
	ScriptGiveMon(SPECIES_CYNDAQUIL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QUILAVA:
	ScriptGiveMon(SPECIES_QUILAVA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYPHLOSION:
	ScriptGiveMon(SPECIES_TYPHLOSION,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOTODILE:
	ScriptGiveMon(SPECIES_TOTODILE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CROCONAW:
	ScriptGiveMon(SPECIES_CROCONAW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FERALIGATR:
	ScriptGiveMon(SPECIES_FERALIGATR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SENTRET:
	ScriptGiveMon(SPECIES_SENTRET,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FURRET:
	ScriptGiveMon(SPECIES_FURRET,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOOTHOOT:
	ScriptGiveMon(SPECIES_HOOTHOOT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOCTOWL:
	ScriptGiveMon(SPECIES_NOCTOWL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEDYBA:
	ScriptGiveMon(SPECIES_LEDYBA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEDIAN:
	ScriptGiveMon(SPECIES_LEDIAN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPINARAK:
	ScriptGiveMon(SPECIES_SPINARAK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARIADOS:
	ScriptGiveMon(SPECIES_ARIADOS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CROBAT:
	ScriptGiveMon(SPECIES_CROBAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHINCHOU:
	ScriptGiveMon(SPECIES_CHINCHOU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LANTURN:
	ScriptGiveMon(SPECIES_LANTURN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PICHU:
	ScriptGiveMon(SPECIES_PICHU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLEFFA:
	ScriptGiveMon(SPECIES_CLEFFA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case IGGLYBUFF:
	ScriptGiveMon(SPECIES_IGGLYBUFF,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGEPI:
	ScriptGiveMon(SPECIES_TOGEPI,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGETIC:
	ScriptGiveMon(SPECIES_TOGETIC,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NATU:
	ScriptGiveMon(SPECIES_NATU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case XATU:
	ScriptGiveMon(SPECIES_XATU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAREEP:
	ScriptGiveMon(SPECIES_MAREEP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLAAFFY:
	ScriptGiveMon(SPECIES_FLAAFFY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMPHAROS:
	ScriptGiveMon(SPECIES_AMPHAROS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BELLOSSOM:
	ScriptGiveMon(SPECIES_BELLOSSOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MARILL:
	ScriptGiveMon(SPECIES_MARILL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AZUMARILL:
	ScriptGiveMon(SPECIES_AZUMARILL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUDOWOODO:
	ScriptGiveMon(SPECIES_SUDOWOODO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLITOED:
	ScriptGiveMon(SPECIES_POLITOED,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOPPIP:
	ScriptGiveMon(SPECIES_HOPPIP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKIPLOOM:
	ScriptGiveMon(SPECIES_SKIPLOOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JUMPLUFF:
	ScriptGiveMon(SPECIES_JUMPLUFF,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AIPOM:
	ScriptGiveMon(SPECIES_AIPOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUNKERN:
	ScriptGiveMon(SPECIES_SUNKERN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUNFLORA:
	ScriptGiveMon(SPECIES_SUNFLORA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YANMA:
	ScriptGiveMon(SPECIES_YANMA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOOPER:
	ScriptGiveMon(SPECIES_WOOPER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QUAGSIRE:
	ScriptGiveMon(SPECIES_QUAGSIRE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ESPEON:
	ScriptGiveMon(SPECIES_ESPEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case UMBREON:
	ScriptGiveMon(SPECIES_UMBREON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MURKROW:
	ScriptGiveMon(SPECIES_MURKROW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLOWKING:
	ScriptGiveMon(SPECIES_SLOWKING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MISDREAVUS:
	ScriptGiveMon(SPECIES_MISDREAVUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case UNOWN:
	ScriptGiveMon(SPECIES_UNOWN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOBBUFFET:
	ScriptGiveMon(SPECIES_WOBBUFFET,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GIRAFARIG:
	ScriptGiveMon(SPECIES_GIRAFARIG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PINECO:
	ScriptGiveMon(SPECIES_PINECO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FORRETRESS:
	ScriptGiveMon(SPECIES_FORRETRESS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUNSPARCE:
	ScriptGiveMon(SPECIES_DUNSPARCE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLIGAR:
	ScriptGiveMon(SPECIES_GLIGAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STEELIX:
	ScriptGiveMon(SPECIES_STEELIX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNUBBULL:
	ScriptGiveMon(SPECIES_SNUBBULL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRANBULL:
	ScriptGiveMon(SPECIES_GRANBULL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QWILFISH:
	ScriptGiveMon(SPECIES_QWILFISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCIZOR:
	ScriptGiveMon(SPECIES_SCIZOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHUCKLE:
	ScriptGiveMon(SPECIES_SHUCKLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HERACROSS:
	ScriptGiveMon(SPECIES_HERACROSS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNEASEL:
	ScriptGiveMon(SPECIES_SNEASEL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TEDDIURSA:
	ScriptGiveMon(SPECIES_TEDDIURSA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case URSARING:
	ScriptGiveMon(SPECIES_URSARING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLUGMA:
	ScriptGiveMon(SPECIES_SLUGMA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGCARGO:
	ScriptGiveMon(SPECIES_MAGCARGO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWINUB:
	ScriptGiveMon(SPECIES_SWINUB,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PILOSWINE:
	ScriptGiveMon(SPECIES_PILOSWINE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORSOLA:
	ScriptGiveMon(SPECIES_CORSOLA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case REMORAID:
	ScriptGiveMon(SPECIES_REMORAID,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OCTILLERY:
	ScriptGiveMon(SPECIES_OCTILLERY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DELIBIRD:
	ScriptGiveMon(SPECIES_DELIBIRD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANTINE:
	ScriptGiveMon(SPECIES_MANTINE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKARMORY:
	ScriptGiveMon(SPECIES_SKARMORY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOUNDOUR:
	ScriptGiveMon(SPECIES_HOUNDOUR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HOUNDOOM:
	ScriptGiveMon(SPECIES_HOUNDOOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KINGDRA:
	ScriptGiveMon(SPECIES_KINGDRA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PHANPY:
	ScriptGiveMon(SPECIES_PHANPY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DONPHAN:
	ScriptGiveMon(SPECIES_DONPHAN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PORYGON2:
	ScriptGiveMon(SPECIES_PORYGON2,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STANTLER:
	ScriptGiveMon(SPECIES_STANTLER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SMEARGLE:
	ScriptGiveMon(SPECIES_SMEARGLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYROGUE:
	ScriptGiveMon(SPECIES_TYROGUE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HITMONTOP:
	ScriptGiveMon(SPECIES_HITMONTOP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SMOOCHUM:
	ScriptGiveMon(SPECIES_SMOOCHUM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELEKID:
	ScriptGiveMon(SPECIES_ELEKID,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGBY:
	ScriptGiveMon(SPECIES_MAGBY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MILTANK:
	ScriptGiveMon(SPECIES_MILTANK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLISSEY:
	ScriptGiveMon(SPECIES_BLISSEY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAIKOU:
	ScriptGiveMon(SPECIES_RAIKOU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ENTEI:
	ScriptGiveMon(SPECIES_ENTEI,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SUICUNE:
	ScriptGiveMon(SPECIES_SUICUNE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LARVITAR:
	ScriptGiveMon(SPECIES_LARVITAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PUPITAR:
	ScriptGiveMon(SPECIES_PUPITAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYRANITAR:
	ScriptGiveMon(SPECIES_TYRANITAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TREECKO:
	ScriptGiveMon(SPECIES_TREECKO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROVYLE:
	ScriptGiveMon(SPECIES_GROVYLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCEPTILE:
	ScriptGiveMon(SPECIES_SCEPTILE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORCHIC:
	ScriptGiveMon(SPECIES_TORCHIC,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COMBUSKEN:
	ScriptGiveMon(SPECIES_COMBUSKEN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLAZIKEN:
	ScriptGiveMon(SPECIES_BLAZIKEN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUDKIP:
	ScriptGiveMon(SPECIES_MUDKIP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MARSHTOMP:
	ScriptGiveMon(SPECIES_MARSHTOMP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWAMPERT:
	ScriptGiveMon(SPECIES_SWAMPERT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POOCHYENA:
	ScriptGiveMon(SPECIES_POOCHYENA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIGHTYENA:
	ScriptGiveMon(SPECIES_MIGHTYENA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZIGZAGOON:
	ScriptGiveMon(SPECIES_ZIGZAGOON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LINOONE:
	ScriptGiveMon(SPECIES_LINOONE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WURMPLE:
	ScriptGiveMon(SPECIES_WURMPLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SILCOON:
	ScriptGiveMon(SPECIES_SILCOON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEAUTIFLY:
	ScriptGiveMon(SPECIES_BEAUTIFLY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CASCOON:
	ScriptGiveMon(SPECIES_CASCOON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSTOX:
	ScriptGiveMon(SPECIES_DUSTOX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOTAD:
	ScriptGiveMon(SPECIES_LOTAD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOMBRE:
	ScriptGiveMon(SPECIES_LOMBRE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUDICOLO:
	ScriptGiveMon(SPECIES_LUDICOLO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEEDOT:
	ScriptGiveMon(SPECIES_SEEDOT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NUZLEAF:
	ScriptGiveMon(SPECIES_NUZLEAF,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHIFTRY:
	ScriptGiveMon(SPECIES_SHIFTRY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAILLOW:
	ScriptGiveMon(SPECIES_TAILLOW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWELLOW:
	ScriptGiveMon(SPECIES_SWELLOW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WINGULL:
	ScriptGiveMon(SPECIES_WINGULL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PELIPPER:
	ScriptGiveMon(SPECIES_PELIPPER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RALTS:
	ScriptGiveMon(SPECIES_RALTS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KIRLIA:
	ScriptGiveMon(SPECIES_KIRLIA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GARDEVOIR:
	ScriptGiveMon(SPECIES_GARDEVOIR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SURSKIT:
	ScriptGiveMon(SPECIES_SURSKIT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MASQUERAIN:
	ScriptGiveMon(SPECIES_MASQUERAIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHROOMISH:
	ScriptGiveMon(SPECIES_SHROOMISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRELOOM:
	ScriptGiveMon(SPECIES_BRELOOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLAKOTH:
	ScriptGiveMon(SPECIES_SLAKOTH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIGOROTH:
	ScriptGiveMon(SPECIES_VIGOROTH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLAKING:
	ScriptGiveMon(SPECIES_SLAKING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NINCADA:
	ScriptGiveMon(SPECIES_NINCADA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NINJASK:
	ScriptGiveMon(SPECIES_NINJASK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHEDINJA:
	ScriptGiveMon(SPECIES_SHEDINJA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHISMUR:
	ScriptGiveMon(SPECIES_WHISMUR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOUDRED:
	ScriptGiveMon(SPECIES_LOUDRED,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXPLOUD:
	ScriptGiveMon(SPECIES_EXPLOUD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAKUHITA:
	ScriptGiveMon(SPECIES_MAKUHITA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HARIYAMA:
	ScriptGiveMon(SPECIES_HARIYAMA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AZURILL:
	ScriptGiveMon(SPECIES_AZURILL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOSEPASS:
	ScriptGiveMon(SPECIES_NOSEPASS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKITTY:
	ScriptGiveMon(SPECIES_SKITTY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DELCATTY:
	ScriptGiveMon(SPECIES_DELCATTY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SABLEYE:
	ScriptGiveMon(SPECIES_SABLEYE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAWILE:
	ScriptGiveMon(SPECIES_MAWILE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARON:
	ScriptGiveMon(SPECIES_ARON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LAIRON:
	ScriptGiveMon(SPECIES_LAIRON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AGGRON:
	ScriptGiveMon(SPECIES_AGGRON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEDITITE:
	ScriptGiveMon(SPECIES_MEDITITE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEDICHAM:
	ScriptGiveMon(SPECIES_MEDICHAM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTRIKE:
	ScriptGiveMon(SPECIES_ELECTRIKE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANECTRIC:
	ScriptGiveMon(SPECIES_MANECTRIC,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PLUSLE:
	ScriptGiveMon(SPECIES_PLUSLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MINUN:
	ScriptGiveMon(SPECIES_MINUN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VOLBEAT:
	ScriptGiveMon(SPECIES_VOLBEAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ILLUMISE:
	ScriptGiveMon(SPECIES_ILLUMISE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROSELIA:
	ScriptGiveMon(SPECIES_ROSELIA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GULPIN:
	ScriptGiveMon(SPECIES_GULPIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWALOT:
	ScriptGiveMon(SPECIES_SWALOT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARVANHA:
	ScriptGiveMon(SPECIES_CARVANHA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHARPEDO:
	ScriptGiveMon(SPECIES_SHARPEDO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WAILMER:
	ScriptGiveMon(SPECIES_WAILMER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WAILORD:
	ScriptGiveMon(SPECIES_WAILORD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NUMEL:
	ScriptGiveMon(SPECIES_NUMEL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CAMERUPT:
	ScriptGiveMon(SPECIES_CAMERUPT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORKOAL:
	ScriptGiveMon(SPECIES_TORKOAL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPOINK:
	ScriptGiveMon(SPECIES_SPOINK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRUMPIG:
	ScriptGiveMon(SPECIES_GRUMPIG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPINDA:
	ScriptGiveMon(SPECIES_SPINDA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRAPINCH:
	ScriptGiveMon(SPECIES_TRAPINCH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIBRAVA:
	ScriptGiveMon(SPECIES_VIBRAVA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLYGON:
	ScriptGiveMon(SPECIES_FLYGON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CACNEA:
	ScriptGiveMon(SPECIES_CACNEA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CACTURNE:
	ScriptGiveMon(SPECIES_CACTURNE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWABLU:
	ScriptGiveMon(SPECIES_SWABLU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALTARIA:
	ScriptGiveMon(SPECIES_ALTARIA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZANGOOSE:
	ScriptGiveMon(SPECIES_ZANGOOSE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEVIPER:
	ScriptGiveMon(SPECIES_SEVIPER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUNATONE:
	ScriptGiveMon(SPECIES_LUNATONE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SOLROCK:
	ScriptGiveMon(SPECIES_SOLROCK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BARBOACH:
	ScriptGiveMon(SPECIES_BARBOACH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHISCASH:
	ScriptGiveMon(SPECIES_WHISCASH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORPHISH:
	ScriptGiveMon(SPECIES_CORPHISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRAWDAUNT:
	ScriptGiveMon(SPECIES_CRAWDAUNT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BALTOY:
	ScriptGiveMon(SPECIES_BALTOY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAYDOL:
	ScriptGiveMon(SPECIES_CLAYDOL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LILEEP:
	ScriptGiveMon(SPECIES_LILEEP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRADILY:
	ScriptGiveMon(SPECIES_CRADILY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ANORITH:
	ScriptGiveMon(SPECIES_ANORITH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARMALDO:
	ScriptGiveMon(SPECIES_ARMALDO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FEEBAS:
	ScriptGiveMon(SPECIES_FEEBAS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MILOTIC:
	ScriptGiveMon(SPECIES_MILOTIC,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CASTFORM:
	ScriptGiveMon(SPECIES_CASTFORM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KECLEON:
	ScriptGiveMon(SPECIES_KECLEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHUPPET:
	ScriptGiveMon(SPECIES_SHUPPET,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BANETTE:
	ScriptGiveMon(SPECIES_BANETTE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSKULL:
	ScriptGiveMon(SPECIES_DUSKULL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSCLOPS:
	ScriptGiveMon(SPECIES_DUSCLOPS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TROPIUS:
	ScriptGiveMon(SPECIES_TROPIUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHIMECHO:
	ScriptGiveMon(SPECIES_CHIMECHO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ABSOL:
	ScriptGiveMon(SPECIES_ABSOL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WYNAUT:
	ScriptGiveMon(SPECIES_WYNAUT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNORUNT:
	ScriptGiveMon(SPECIES_SNORUNT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLALIE:
	ScriptGiveMon(SPECIES_GLALIE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPHEAL:
	ScriptGiveMon(SPECIES_SPHEAL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEALEO:
	ScriptGiveMon(SPECIES_SEALEO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WALREIN:
	ScriptGiveMon(SPECIES_WALREIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAMPERL:
	ScriptGiveMon(SPECIES_CLAMPERL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HUNTAIL:
	ScriptGiveMon(SPECIES_HUNTAIL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOREBYSS:
	ScriptGiveMon(SPECIES_GOREBYSS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RELICANTH:
	ScriptGiveMon(SPECIES_RELICANTH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUVDISC:
	ScriptGiveMon(SPECIES_LUVDISC,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BAGON:
	ScriptGiveMon(SPECIES_BAGON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELGON:
	ScriptGiveMon(SPECIES_SHELGON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SALAMENCE:
	ScriptGiveMon(SPECIES_SALAMENCE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BELDUM:
	ScriptGiveMon(SPECIES_BELDUM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case METANG:
	ScriptGiveMon(SPECIES_METANG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case METAGROSS:
	ScriptGiveMon(SPECIES_METAGROSS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TURTWIG:
	ScriptGiveMon(SPECIES_TURTWIG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROTLE:
	ScriptGiveMon(SPECIES_GROTLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORTERRA:
	ScriptGiveMon(SPECIES_TORTERRA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHIMCHAR:
	ScriptGiveMon(SPECIES_CHIMCHAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MONFERNO:
	ScriptGiveMon(SPECIES_MONFERNO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INFERNAPE:
	ScriptGiveMon(SPECIES_INFERNAPE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIPLUP:
	ScriptGiveMon(SPECIES_PIPLUP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PRINPLUP:
	ScriptGiveMon(SPECIES_PRINPLUP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EMPOLEON:
	ScriptGiveMon(SPECIES_EMPOLEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARLY:
	ScriptGiveMon(SPECIES_STARLY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARAVIA:
	ScriptGiveMon(SPECIES_STARAVIA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STARAPTOR:
	ScriptGiveMon(SPECIES_STARAPTOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BIDOOF:
	ScriptGiveMon(SPECIES_BIDOOF,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BIBAREL:
	ScriptGiveMon(SPECIES_BIBAREL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KRICKETOT:
	ScriptGiveMon(SPECIES_KRICKETOT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KRICKETUNE:
	ScriptGiveMon(SPECIES_KRICKETUNE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHINX:
	ScriptGiveMon(SPECIES_SHINX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUXIO:
	ScriptGiveMon(SPECIES_LUXIO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUXRAY:
	ScriptGiveMon(SPECIES_LUXRAY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUDEW:
	ScriptGiveMon(SPECIES_BUDEW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROSERADE:
	ScriptGiveMon(SPECIES_ROSERADE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRANIDOS:
	ScriptGiveMon(SPECIES_CRANIDOS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RAMPARDOS:
	ScriptGiveMon(SPECIES_RAMPARDOS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHIELDON:
	ScriptGiveMon(SPECIES_SHIELDON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BASTIODON:
	ScriptGiveMon(SPECIES_BASTIODON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BURMY:
	ScriptGiveMon(SPECIES_BURMY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WORMADAM:
	ScriptGiveMon(SPECIES_WORMADAM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MOTHIM:
	ScriptGiveMon(SPECIES_MOTHIM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COMBEE:
	ScriptGiveMon(SPECIES_COMBEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VESPIQUEN:
	ScriptGiveMon(SPECIES_VESPIQUEN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PACHIRISU:
	ScriptGiveMon(SPECIES_PACHIRISU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUIZEL:
	ScriptGiveMon(SPECIES_BUIZEL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLOATZEL:
	ScriptGiveMon(SPECIES_FLOATZEL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHERUBI:
	ScriptGiveMon(SPECIES_CHERUBI,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHERRIM:
	ScriptGiveMon(SPECIES_CHERRIM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELLOS:
	ScriptGiveMon(SPECIES_SHELLOS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GASTRODON:
	ScriptGiveMon(SPECIES_GASTRODON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMBIPOM:
	ScriptGiveMon(SPECIES_AMBIPOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRIFLOON:
	ScriptGiveMon(SPECIES_DRIFLOON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRIFBLIM:
	ScriptGiveMon(SPECIES_DRIFBLIM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUNEARY:
	ScriptGiveMon(SPECIES_BUNEARY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LOPUNNY:
	ScriptGiveMon(SPECIES_LOPUNNY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MISMAGIUS:
	ScriptGiveMon(SPECIES_MISMAGIUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HONCHKROW:
	ScriptGiveMon(SPECIES_HONCHKROW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLAMEOW:
	ScriptGiveMon(SPECIES_GLAMEOW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PURUGLY:
	ScriptGiveMon(SPECIES_PURUGLY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHINGLING:
	ScriptGiveMon(SPECIES_CHINGLING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STUNKY:
	ScriptGiveMon(SPECIES_STUNKY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKUNTANK:
	ScriptGiveMon(SPECIES_SKUNTANK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRONZOR:
	ScriptGiveMon(SPECIES_BRONZOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRONZONG:
	ScriptGiveMon(SPECIES_BRONZONG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BONSLY:
	ScriptGiveMon(SPECIES_BONSLY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIME_JR:
	ScriptGiveMon(SPECIES_MIME_JR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAPPINY:
	ScriptGiveMon(SPECIES_HAPPINY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHATOT:
	ScriptGiveMon(SPECIES_CHATOT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPIRITOMB:
	ScriptGiveMon(SPECIES_SPIRITOMB,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GIBLE:
	ScriptGiveMon(SPECIES_GIBLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GABITE:
	ScriptGiveMon(SPECIES_GABITE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GARCHOMP:
	ScriptGiveMon(SPECIES_GARCHOMP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUNCHLAX:
	ScriptGiveMon(SPECIES_MUNCHLAX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RIOLU:
	ScriptGiveMon(SPECIES_RIOLU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUCARIO:
	ScriptGiveMon(SPECIES_LUCARIO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HIPPOPOTAS:
	ScriptGiveMon(SPECIES_HIPPOPOTAS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HIPPOWDON:
	ScriptGiveMon(SPECIES_HIPPOWDON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKORUPI:
	ScriptGiveMon(SPECIES_SKORUPI,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAPION:
	ScriptGiveMon(SPECIES_DRAPION,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CROAGUNK:
	ScriptGiveMon(SPECIES_CROAGUNK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXICROAK:
	ScriptGiveMon(SPECIES_TOXICROAK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARNIVINE:
	ScriptGiveMon(SPECIES_CARNIVINE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FINNEON:
	ScriptGiveMon(SPECIES_FINNEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LUMINEON:
	ScriptGiveMon(SPECIES_LUMINEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANTYKE:
	ScriptGiveMon(SPECIES_MANTYKE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNOVER:
	ScriptGiveMon(SPECIES_SNOVER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ABOMASNOW:
	ScriptGiveMon(SPECIES_ABOMASNOW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WEAVILE:
	ScriptGiveMon(SPECIES_WEAVILE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGNEZONE:
	ScriptGiveMon(SPECIES_MAGNEZONE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LICKILICKY:
	ScriptGiveMon(SPECIES_LICKILICKY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RHYPERIOR:
	ScriptGiveMon(SPECIES_RHYPERIOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TANGROWTH:
	ScriptGiveMon(SPECIES_TANGROWTH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELECTIVIRE:
	ScriptGiveMon(SPECIES_ELECTIVIRE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAGMORTAR:
	ScriptGiveMon(SPECIES_MAGMORTAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGEKISS:
	ScriptGiveMon(SPECIES_TOGEKISS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YANMEGA:
	ScriptGiveMon(SPECIES_YANMEGA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEAFEON:
	ScriptGiveMon(SPECIES_LEAFEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLACEON:
	ScriptGiveMon(SPECIES_GLACEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GLISCOR:
	ScriptGiveMon(SPECIES_GLISCOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAMOSWINE:
	ScriptGiveMon(SPECIES_MAMOSWINE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PORYGON_Z:
	ScriptGiveMon(SPECIES_PORYGON_Z,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GALLADE:
	ScriptGiveMon(SPECIES_GALLADE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PROBOPASS:
	ScriptGiveMon(SPECIES_PROBOPASS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUSKNOIR:
	ScriptGiveMon(SPECIES_DUSKNOIR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROSLASS:
	ScriptGiveMon(SPECIES_FROSLASS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROTOM:
	ScriptGiveMon(SPECIES_ROTOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNIVY:
	ScriptGiveMon(SPECIES_SNIVY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SERVINE:
	ScriptGiveMon(SPECIES_SERVINE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SERPERIOR:
	ScriptGiveMon(SPECIES_SERPERIOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TEPIG:
	ScriptGiveMon(SPECIES_TEPIG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIGNITE:
	ScriptGiveMon(SPECIES_PIGNITE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EMBOAR:
	ScriptGiveMon(SPECIES_EMBOAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OSHAWOTT:
	ScriptGiveMon(SPECIES_OSHAWOTT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEWOTT:
	ScriptGiveMon(SPECIES_DEWOTT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SAMUROTT:
	ScriptGiveMon(SPECIES_SAMUROTT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PATRAT:
	ScriptGiveMon(SPECIES_PATRAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WATCHOG:
	ScriptGiveMon(SPECIES_WATCHOG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LILLIPUP:
	ScriptGiveMon(SPECIES_LILLIPUP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HERDIER:
	ScriptGiveMon(SPECIES_HERDIER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STOUTLAND:
	ScriptGiveMon(SPECIES_STOUTLAND,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PURRLOIN:
	ScriptGiveMon(SPECIES_PURRLOIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LIEPARD:
	ScriptGiveMon(SPECIES_LIEPARD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANSAGE:
	ScriptGiveMon(SPECIES_PANSAGE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIMISAGE:
	ScriptGiveMon(SPECIES_SIMISAGE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANSEAR:
	ScriptGiveMon(SPECIES_PANSEAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIMISEAR:
	ScriptGiveMon(SPECIES_SIMISEAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANPOUR:
	ScriptGiveMon(SPECIES_PANPOUR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIMIPOUR:
	ScriptGiveMon(SPECIES_SIMIPOUR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUNNA:
	ScriptGiveMon(SPECIES_MUNNA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUSHARNA:
	ScriptGiveMon(SPECIES_MUSHARNA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIDOVE:
	ScriptGiveMon(SPECIES_PIDOVE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRANQUILL:
	ScriptGiveMon(SPECIES_TRANQUILL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case UNFEZANT:
	ScriptGiveMon(SPECIES_UNFEZANT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLITZLE:
	ScriptGiveMon(SPECIES_BLITZLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZEBSTRIKA:
	ScriptGiveMon(SPECIES_ZEBSTRIKA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROGGENROLA:
	ScriptGiveMon(SPECIES_ROGGENROLA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOLDORE:
	ScriptGiveMon(SPECIES_BOLDORE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GIGALITH:
	ScriptGiveMon(SPECIES_GIGALITH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOOBAT:
	ScriptGiveMon(SPECIES_WOOBAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWOOBAT:
	ScriptGiveMon(SPECIES_SWOOBAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRILBUR:
	ScriptGiveMon(SPECIES_DRILBUR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EXCADRILL:
	ScriptGiveMon(SPECIES_EXCADRILL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AUDINO:
	ScriptGiveMon(SPECIES_AUDINO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TIMBURR:
	ScriptGiveMon(SPECIES_TIMBURR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GURDURR:
	ScriptGiveMon(SPECIES_GURDURR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CONKELDURR:
	ScriptGiveMon(SPECIES_CONKELDURR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYMPOLE:
	ScriptGiveMon(SPECIES_TYMPOLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PALPITOAD:
	ScriptGiveMon(SPECIES_PALPITOAD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEISMITOAD:
	ScriptGiveMon(SPECIES_SEISMITOAD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case THROH:
	ScriptGiveMon(SPECIES_THROH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SAWK:
	ScriptGiveMon(SPECIES_SAWK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SEWADDLE:
	ScriptGiveMon(SPECIES_SEWADDLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWADLOON:
	ScriptGiveMon(SPECIES_SWADLOON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LEAVANNY:
	ScriptGiveMon(SPECIES_LEAVANNY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VENIPEDE:
	ScriptGiveMon(SPECIES_VENIPEDE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHIRLIPEDE:
	ScriptGiveMon(SPECIES_WHIRLIPEDE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCOLIPEDE:
	ScriptGiveMon(SPECIES_SCOLIPEDE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COTTONEE:
	ScriptGiveMon(SPECIES_COTTONEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WHIMSICOTT:
	ScriptGiveMon(SPECIES_WHIMSICOTT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PETILIL:
	ScriptGiveMon(SPECIES_PETILIL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LILLIGANT:
	ScriptGiveMon(SPECIES_LILLIGANT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BASCULIN:
	ScriptGiveMon(SPECIES_BASCULIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDILE:
	ScriptGiveMon(SPECIES_SANDILE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KROKOROK:
	ScriptGiveMon(SPECIES_KROKOROK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KROOKODILE:
	ScriptGiveMon(SPECIES_KROOKODILE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DARUMAKA:
	ScriptGiveMon(SPECIES_DARUMAKA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DARMANITAN:
	ScriptGiveMon(SPECIES_DARMANITAN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MARACTUS:
	ScriptGiveMon(SPECIES_MARACTUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DWEBBLE:
	ScriptGiveMon(SPECIES_DWEBBLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRUSTLE:
	ScriptGiveMon(SPECIES_CRUSTLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCRAGGY:
	ScriptGiveMon(SPECIES_SCRAGGY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCRAFTY:
	ScriptGiveMon(SPECIES_SCRAFTY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIGILYPH:
	ScriptGiveMon(SPECIES_SIGILYPH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YAMASK:
	ScriptGiveMon(SPECIES_YAMASK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COFAGRIGUS:
	ScriptGiveMon(SPECIES_COFAGRIGUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TIRTOUGA:
	ScriptGiveMon(SPECIES_TIRTOUGA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARRACOSTA:
	ScriptGiveMon(SPECIES_CARRACOSTA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCHEN:
	ScriptGiveMon(SPECIES_ARCHEN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCHEOPS:
	ScriptGiveMon(SPECIES_ARCHEOPS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRUBBISH:
	ScriptGiveMon(SPECIES_TRUBBISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GARBODOR:
	ScriptGiveMon(SPECIES_GARBODOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZORUA:
	ScriptGiveMon(SPECIES_ZORUA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZOROARK:
	ScriptGiveMon(SPECIES_ZOROARK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MINCCINO:
	ScriptGiveMon(SPECIES_MINCCINO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CINCCINO:
	ScriptGiveMon(SPECIES_CINCCINO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOTHITA:
	ScriptGiveMon(SPECIES_GOTHITA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOTHORITA:
	ScriptGiveMon(SPECIES_GOTHORITA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOTHITELLE:
	ScriptGiveMon(SPECIES_GOTHITELLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SOLOSIS:
	ScriptGiveMon(SPECIES_SOLOSIS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUOSION:
	ScriptGiveMon(SPECIES_DUOSION,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case REUNICLUS:
	ScriptGiveMon(SPECIES_REUNICLUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUCKLETT:
	ScriptGiveMon(SPECIES_DUCKLETT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWANNA:
	ScriptGiveMon(SPECIES_SWANNA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VANILLITE:
	ScriptGiveMon(SPECIES_VANILLITE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VANILLISH:
	ScriptGiveMon(SPECIES_VANILLISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VANILLUXE:
	ScriptGiveMon(SPECIES_VANILLUXE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEERLING:
	ScriptGiveMon(SPECIES_DEERLING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SAWSBUCK:
	ScriptGiveMon(SPECIES_SAWSBUCK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EMOLGA:
	ScriptGiveMon(SPECIES_EMOLGA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KARRABLAST:
	ScriptGiveMon(SPECIES_KARRABLAST,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ESCAVALIER:
	ScriptGiveMon(SPECIES_ESCAVALIER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FOONGUS:
	ScriptGiveMon(SPECIES_FOONGUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMOONGUSS:
	ScriptGiveMon(SPECIES_AMOONGUSS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FRILLISH:
	ScriptGiveMon(SPECIES_FRILLISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JELLICENT:
	ScriptGiveMon(SPECIES_JELLICENT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALOMOMOLA:
	ScriptGiveMon(SPECIES_ALOMOMOLA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JOLTIK:
	ScriptGiveMon(SPECIES_JOLTIK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GALVANTULA:
	ScriptGiveMon(SPECIES_GALVANTULA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FERROSEED:
	ScriptGiveMon(SPECIES_FERROSEED,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FERROTHORN:
	ScriptGiveMon(SPECIES_FERROTHORN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLINK:
	ScriptGiveMon(SPECIES_KLINK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLANG:
	ScriptGiveMon(SPECIES_KLANG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLINKLANG:
	ScriptGiveMon(SPECIES_KLINKLANG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYNAMO:
	ScriptGiveMon(SPECIES_TYNAMO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EELEKTRIK:
	ScriptGiveMon(SPECIES_EELEKTRIK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EELEKTROSS:
	ScriptGiveMon(SPECIES_EELEKTROSS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELGYEM:
	ScriptGiveMon(SPECIES_ELGYEM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEHEEYEM:
	ScriptGiveMon(SPECIES_BEHEEYEM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LITWICK:
	ScriptGiveMon(SPECIES_LITWICK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LAMPENT:
	ScriptGiveMon(SPECIES_LAMPENT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHANDELURE:
	ScriptGiveMon(SPECIES_CHANDELURE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AXEW:
	ScriptGiveMon(SPECIES_AXEW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FRAXURE:
	ScriptGiveMon(SPECIES_FRAXURE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAXORUS:
	ScriptGiveMon(SPECIES_HAXORUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUBCHOO:
	ScriptGiveMon(SPECIES_CUBCHOO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEARTIC:
	ScriptGiveMon(SPECIES_BEARTIC,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRYOGONAL:
	ScriptGiveMon(SPECIES_CRYOGONAL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHELMET:
	ScriptGiveMon(SPECIES_SHELMET,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ACCELGOR:
	ScriptGiveMon(SPECIES_ACCELGOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STUNFISK:
	ScriptGiveMon(SPECIES_STUNFISK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIENFOO:
	ScriptGiveMon(SPECIES_MIENFOO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIENSHAO:
	ScriptGiveMon(SPECIES_MIENSHAO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRUDDIGON:
	ScriptGiveMon(SPECIES_DRUDDIGON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLETT:
	ScriptGiveMon(SPECIES_GOLETT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLURK:
	ScriptGiveMon(SPECIES_GOLURK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PAWNIARD:
	ScriptGiveMon(SPECIES_PAWNIARD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BISHARP:
	ScriptGiveMon(SPECIES_BISHARP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOUFFALANT:
	ScriptGiveMon(SPECIES_BOUFFALANT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RUFFLET:
	ScriptGiveMon(SPECIES_RUFFLET,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRAVIARY:
	ScriptGiveMon(SPECIES_BRAVIARY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VULLABY:
	ScriptGiveMon(SPECIES_VULLABY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MANDIBUZZ:
	ScriptGiveMon(SPECIES_MANDIBUZZ,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HEATMOR:
	ScriptGiveMon(SPECIES_HEATMOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DURANT:
	ScriptGiveMon(SPECIES_DURANT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEINO:
	ScriptGiveMon(SPECIES_DEINO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ZWEILOUS:
	ScriptGiveMon(SPECIES_ZWEILOUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HYDREIGON:
	ScriptGiveMon(SPECIES_HYDREIGON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LARVESTA:
	ScriptGiveMon(SPECIES_LARVESTA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VOLCARONA:
	ScriptGiveMon(SPECIES_VOLCARONA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHESPIN:
	ScriptGiveMon(SPECIES_CHESPIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case QUILLADIN:
	ScriptGiveMon(SPECIES_QUILLADIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHESNAUGHT:
	ScriptGiveMon(SPECIES_CHESNAUGHT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FENNEKIN:
	ScriptGiveMon(SPECIES_FENNEKIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRAIXEN:
	ScriptGiveMon(SPECIES_BRAIXEN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DELPHOX:
	ScriptGiveMon(SPECIES_DELPHOX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROAKIE:
	ScriptGiveMon(SPECIES_FROAKIE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROGADIER:
	ScriptGiveMon(SPECIES_FROGADIER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRENINJA:
	ScriptGiveMon(SPECIES_GRENINJA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BUNNELBY:
	ScriptGiveMon(SPECIES_BUNNELBY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DIGGERSBY:
	ScriptGiveMon(SPECIES_DIGGERSBY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLETCHLING:
	ScriptGiveMon(SPECIES_FLETCHLING,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLETCHINDER:
	ScriptGiveMon(SPECIES_FLETCHINDER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TALONFLAME:
	ScriptGiveMon(SPECIES_TALONFLAME,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCATTERBUG:
	ScriptGiveMon(SPECIES_SCATTERBUG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPEWPA:
	ScriptGiveMon(SPECIES_SPEWPA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIVILLON:
	ScriptGiveMon(SPECIES_VIVILLON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LITLEO:
	ScriptGiveMon(SPECIES_LITLEO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PYROAR:
	ScriptGiveMon(SPECIES_PYROAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLABEBE:
	ScriptGiveMon(SPECIES_FLABEBE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLOETTE:
	ScriptGiveMon(SPECIES_FLOETTE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLORGES:
	ScriptGiveMon(SPECIES_FLORGES,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKIDDO:
	ScriptGiveMon(SPECIES_SKIDDO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOGOAT:
	ScriptGiveMon(SPECIES_GOGOAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANCHAM:
	ScriptGiveMon(SPECIES_PANCHAM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PANGORO:
	ScriptGiveMon(SPECIES_PANGORO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FURFROU:
	ScriptGiveMon(SPECIES_FURFROU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ESPURR:
	ScriptGiveMon(SPECIES_ESPURR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MEOWSTIC:
	ScriptGiveMon(SPECIES_MEOWSTIC,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HONEDGE:
	ScriptGiveMon(SPECIES_HONEDGE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DOUBLADE:
	ScriptGiveMon(SPECIES_DOUBLADE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AEGISLASH:
	ScriptGiveMon(SPECIES_AEGISLASH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SPRITZEE:
	ScriptGiveMon(SPECIES_SPRITZEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AROMATISSE:
	ScriptGiveMon(SPECIES_AROMATISSE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SWIRLIX:
	ScriptGiveMon(SPECIES_SWIRLIX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLURPUFF:
	ScriptGiveMon(SPECIES_SLURPUFF,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INKAY:
	ScriptGiveMon(SPECIES_INKAY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MALAMAR:
	ScriptGiveMon(SPECIES_MALAMAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BINACLE:
	ScriptGiveMon(SPECIES_BINACLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BARBARACLE:
	ScriptGiveMon(SPECIES_BARBARACLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKRELP:
	ScriptGiveMon(SPECIES_SKRELP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGALGE:
	ScriptGiveMon(SPECIES_DRAGALGE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAUNCHER:
	ScriptGiveMon(SPECIES_CLAUNCHER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLAWITZER:
	ScriptGiveMon(SPECIES_CLAWITZER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HELIOPTILE:
	ScriptGiveMon(SPECIES_HELIOPTILE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HELIOLISK:
	ScriptGiveMon(SPECIES_HELIOLISK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYRUNT:
	ScriptGiveMon(SPECIES_TYRUNT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYRANTRUM:
	ScriptGiveMon(SPECIES_TYRANTRUM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AMAURA:
	ScriptGiveMon(SPECIES_AMAURA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AURORUS:
	ScriptGiveMon(SPECIES_AURORUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SYLVEON:
	ScriptGiveMon(SPECIES_SYLVEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAWLUCHA:
	ScriptGiveMon(SPECIES_HAWLUCHA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEDENNE:
	ScriptGiveMon(SPECIES_DEDENNE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARBINK:
	ScriptGiveMon(SPECIES_CARBINK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOOMY:
	ScriptGiveMon(SPECIES_GOOMY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SLIGGOO:
	ScriptGiveMon(SPECIES_SLIGGOO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOODRA:
	ScriptGiveMon(SPECIES_GOODRA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KLEFKI:
	ScriptGiveMon(SPECIES_KLEFKI,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PHANTUMP:
	ScriptGiveMon(SPECIES_PHANTUMP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TREVENANT:
	ScriptGiveMon(SPECIES_TREVENANT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PUMPKABOO:
	ScriptGiveMon(SPECIES_PUMPKABOO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOURGEIST:
	ScriptGiveMon(SPECIES_GOURGEIST,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BERGMITE:
	ScriptGiveMon(SPECIES_BERGMITE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case AVALUGG:
	ScriptGiveMon(SPECIES_AVALUGG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOIBAT:
	ScriptGiveMon(SPECIES_NOIBAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NOIVERN:
	ScriptGiveMon(SPECIES_NOIVERN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROWLET:
	ScriptGiveMon(SPECIES_ROWLET,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DARTRIX:
	ScriptGiveMon(SPECIES_DARTRIX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DECIDUEYE:
	ScriptGiveMon(SPECIES_DECIDUEYE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LITTEN:
	ScriptGiveMon(SPECIES_LITTEN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TORRACAT:
	ScriptGiveMon(SPECIES_TORRACAT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INCINEROAR:
	ScriptGiveMon(SPECIES_INCINEROAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POPPLIO:
	ScriptGiveMon(SPECIES_POPPLIO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRIONNE:
	ScriptGiveMon(SPECIES_BRIONNE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PRIMARINA:
	ScriptGiveMon(SPECIES_PRIMARINA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PIKIPEK:
	ScriptGiveMon(SPECIES_PIKIPEK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRUMBEAK:
	ScriptGiveMon(SPECIES_TRUMBEAK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOUCANNON:
	ScriptGiveMon(SPECIES_TOUCANNON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YUNGOOS:
	ScriptGiveMon(SPECIES_YUNGOOS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GUMSHOOS:
	ScriptGiveMon(SPECIES_GUMSHOOS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRUBBIN:
	ScriptGiveMon(SPECIES_GRUBBIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHARJABUG:
	ScriptGiveMon(SPECIES_CHARJABUG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case VIKAVOLT:
	ScriptGiveMon(SPECIES_VIKAVOLT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRABRAWLER:
	ScriptGiveMon(SPECIES_CRABRAWLER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRABOMINABLE:
	ScriptGiveMon(SPECIES_CRABOMINABLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ORICORIO:
	ScriptGiveMon(SPECIES_ORICORIO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUTIEFLY:
	ScriptGiveMon(SPECIES_CUTIEFLY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RIBOMBEE:
	ScriptGiveMon(SPECIES_RIBOMBEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROCKRUFF:
	ScriptGiveMon(SPECIES_ROCKRUFF,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LYCANROC:
	ScriptGiveMon(SPECIES_LYCANROC,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WISHIWASHI:
	ScriptGiveMon(SPECIES_WISHIWASHI,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MAREANIE:
	ScriptGiveMon(SPECIES_MAREANIE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXAPEX:
	ScriptGiveMon(SPECIES_TOXAPEX,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUDBRAY:
	ScriptGiveMon(SPECIES_MUDBRAY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MUDSDALE:
	ScriptGiveMon(SPECIES_MUDSDALE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DEWPIDER:
	ScriptGiveMon(SPECIES_DEWPIDER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARAQUANID:
	ScriptGiveMon(SPECIES_ARAQUANID,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FOMANTIS:
	ScriptGiveMon(SPECIES_FOMANTIS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case LURANTIS:
	ScriptGiveMon(SPECIES_LURANTIS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MORELULL:
	ScriptGiveMon(SPECIES_MORELULL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SHIINOTIC:
	ScriptGiveMon(SPECIES_SHIINOTIC,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SALANDIT:
	ScriptGiveMon(SPECIES_SALANDIT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SALAZZLE:
	ScriptGiveMon(SPECIES_SALAZZLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STUFFUL:
	ScriptGiveMon(SPECIES_STUFFUL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BEWEAR:
	ScriptGiveMon(SPECIES_BEWEAR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOUNSWEET:
	ScriptGiveMon(SPECIES_BOUNSWEET,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STEENEE:
	ScriptGiveMon(SPECIES_STEENEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TSAREENA:
	ScriptGiveMon(SPECIES_TSAREENA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COMFEY:
	ScriptGiveMon(SPECIES_COMFEY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ORANGURU:
	ScriptGiveMon(SPECIES_ORANGURU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PASSIMIAN:
	ScriptGiveMon(SPECIES_PASSIMIAN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WIMPOD:
	ScriptGiveMon(SPECIES_WIMPOD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOLISOPOD:
	ScriptGiveMon(SPECIES_GOLISOPOD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDYGAST:
	ScriptGiveMon(SPECIES_SANDYGAST,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PALOSSAND:
	ScriptGiveMon(SPECIES_PALOSSAND,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PYUKUMUKU:
	ScriptGiveMon(SPECIES_PYUKUMUKU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TYPE_NULL:
	ScriptGiveMon(SPECIES_TYPE_NULL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SILVALLY:
	ScriptGiveMon(SPECIES_SILVALLY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MINIOR:
	ScriptGiveMon(SPECIES_MINIOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KOMALA:
	ScriptGiveMon(SPECIES_KOMALA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TURTONATOR:
	ScriptGiveMon(SPECIES_TURTONATOR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOGEDEMARU:
	ScriptGiveMon(SPECIES_TOGEDEMARU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MIMIKYU:
	ScriptGiveMon(SPECIES_MIMIKYU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BRUXISH:
	ScriptGiveMon(SPECIES_BRUXISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAMPA:
	ScriptGiveMon(SPECIES_DRAMPA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DHELMISE:
	ScriptGiveMon(SPECIES_DHELMISE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case JANGMO_O:
	ScriptGiveMon(SPECIES_JANGMO_O,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HAKAMO_O:
	ScriptGiveMon(SPECIES_HAKAMO_O,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case KOMMO_O:
	ScriptGiveMon(SPECIES_KOMMO_O,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_KOKO:
	ScriptGiveMon(SPECIES_TAPU_KOKO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_LELE:
	ScriptGiveMon(SPECIES_TAPU_LELE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_BULU:
	ScriptGiveMon(SPECIES_TAPU_BULU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TAPU_FINI:
	ScriptGiveMon(SPECIES_TAPU_FINI,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COSMOG:
	ScriptGiveMon(SPECIES_COSMOG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COSMOEM:
	ScriptGiveMon(SPECIES_COSMOEM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GROOKEY:
	ScriptGiveMon(SPECIES_GROOKEY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case THWACKEY:
	ScriptGiveMon(SPECIES_THWACKEY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RILLABOOM:
	ScriptGiveMon(SPECIES_RILLABOOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SCORBUNNY:
	ScriptGiveMon(SPECIES_SCORBUNNY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RABOOT:
	ScriptGiveMon(SPECIES_RABOOT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CINDERACE:
	ScriptGiveMon(SPECIES_CINDERACE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SOBBLE:
	ScriptGiveMon(SPECIES_SOBBLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRIZZILE:
	ScriptGiveMon(SPECIES_DRIZZILE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INTELEON:
	ScriptGiveMon(SPECIES_INTELEON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SKWOVET:
	ScriptGiveMon(SPECIES_SKWOVET,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GREEDENT:
	ScriptGiveMon(SPECIES_GREEDENT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROOKIDEE:
	ScriptGiveMon(SPECIES_ROOKIDEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORVISQUIRE:
	ScriptGiveMon(SPECIES_CORVISQUIRE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CORVIKNIGHT:
	ScriptGiveMon(SPECIES_CORVIKNIGHT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BLIPBUG:
	ScriptGiveMon(SPECIES_BLIPBUG,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DOTTLER:
	ScriptGiveMon(SPECIES_DOTTLER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ORBEETLE:
	ScriptGiveMon(SPECIES_ORBEETLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case NICKIT:
	ScriptGiveMon(SPECIES_NICKIT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case THIEVUL:
	ScriptGiveMon(SPECIES_THIEVUL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GOSSIFLEUR:
	ScriptGiveMon(SPECIES_GOSSIFLEUR,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ELDEGOSS:
	ScriptGiveMon(SPECIES_ELDEGOSS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case WOOLOO:
	ScriptGiveMon(SPECIES_WOOLOO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DUBWOOL:
	ScriptGiveMon(SPECIES_DUBWOOL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CHEWTLE:
	ScriptGiveMon(SPECIES_CHEWTLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DREDNAW:
	ScriptGiveMon(SPECIES_DREDNAW,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case YAMPER:
	ScriptGiveMon(SPECIES_YAMPER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BOLTUND:
	ScriptGiveMon(SPECIES_BOLTUND,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ROLYCOLY:
	ScriptGiveMon(SPECIES_ROLYCOLY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CARKOL:
	ScriptGiveMon(SPECIES_CARKOL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COALOSSAL:
	ScriptGiveMon(SPECIES_COALOSSAL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case APPLIN:
	ScriptGiveMon(SPECIES_APPLIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FLAPPLE:
	ScriptGiveMon(SPECIES_FLAPPLE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case APPLETUN:
	ScriptGiveMon(SPECIES_APPLETUN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SILICOBRA:
	ScriptGiveMon(SPECIES_SILICOBRA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SANDACONDA:
	ScriptGiveMon(SPECIES_SANDACONDA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CRAMORANT:
	ScriptGiveMon(SPECIES_CRAMORANT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARROKUDA:
	ScriptGiveMon(SPECIES_ARROKUDA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case BARRASKEWDA:
	ScriptGiveMon(SPECIES_BARRASKEWDA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXEL:
	ScriptGiveMon(SPECIES_TOXEL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TOXTRICITY:
	ScriptGiveMon(SPECIES_TOXTRICITY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIZZLIPEDE:
	ScriptGiveMon(SPECIES_SIZZLIPEDE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CENTISKORCH:
	ScriptGiveMon(SPECIES_CENTISKORCH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CLOBBOPUS:
	ScriptGiveMon(SPECIES_CLOBBOPUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRAPPLOCT:
	ScriptGiveMon(SPECIES_GRAPPLOCT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SINISTEA:
	ScriptGiveMon(SPECIES_SINISTEA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case POLTEAGEIST:
	ScriptGiveMon(SPECIES_POLTEAGEIST,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HATENNA:
	ScriptGiveMon(SPECIES_HATENNA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HATTREM:
	ScriptGiveMon(SPECIES_HATTREM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case HATTERENE:
	ScriptGiveMon(SPECIES_HATTERENE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case IMPIDIMP:
	ScriptGiveMon(SPECIES_IMPIDIMP,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MORGREM:
	ScriptGiveMon(SPECIES_MORGREM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case GRIMMSNARL:
	ScriptGiveMon(SPECIES_GRIMMSNARL,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case OBSTAGOON:
	ScriptGiveMon(SPECIES_OBSTAGOON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PERRSERKER:
	ScriptGiveMon(SPECIES_PERRSERKER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CURSOLA:
	ScriptGiveMon(SPECIES_CURSOLA,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SIRFETCHD:
	ScriptGiveMon(SPECIES_SIRFETCHD,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MR_RIME:
	ScriptGiveMon(SPECIES_MR_RIME,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case RUNERIGUS:
	ScriptGiveMon(SPECIES_RUNERIGUS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MILCERY:
	ScriptGiveMon(SPECIES_MILCERY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ALCREMIE:
	ScriptGiveMon(SPECIES_ALCREMIE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FALINKS:
	ScriptGiveMon(SPECIES_FALINKS,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case PINCURCHIN:
	ScriptGiveMon(SPECIES_PINCURCHIN,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case SNOM:
	ScriptGiveMon(SPECIES_SNOM,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case FROSMOTH:
	ScriptGiveMon(SPECIES_FROSMOTH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case STONJOURNER:
	ScriptGiveMon(SPECIES_STONJOURNER,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case EISCUE:
	ScriptGiveMon(SPECIES_EISCUE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case INDEEDEE:
	ScriptGiveMon(SPECIES_INDEEDEE,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case MORPEKO:
	ScriptGiveMon(SPECIES_MORPEKO,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case CUFANT:
	ScriptGiveMon(SPECIES_CUFANT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case COPPERAJAH:
	ScriptGiveMon(SPECIES_COPPERAJAH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRACOZOLT:
	ScriptGiveMon(SPECIES_DRACOZOLT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCTOZOLT:
	ScriptGiveMon(SPECIES_ARCTOZOLT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRACOVISH:
	ScriptGiveMon(SPECIES_DRACOVISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case ARCTOVISH:
	ScriptGiveMon(SPECIES_ARCTOVISH,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DURALUDON:
	ScriptGiveMon(SPECIES_DURALUDON,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DREEPY:
	ScriptGiveMon(SPECIES_DREEPY,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAKLOAK:
	ScriptGiveMon(SPECIES_DRAKLOAK,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case DRAGAPULT:
	ScriptGiveMon(SPECIES_DRAGAPULT,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;

case TRXATU:
	ScriptGiveMon(SPECIES_TRXATU,98,ITEM_NONE,0,0,0);
	VarAdd(VAR_HAS_ENTERED_BATTLE_FRONTIER,1);
	data->state = MG_MYTEAM_KANTO;
	break;
			}
	}
	break;
	case PRUEBA6:
	{
		if(PrintMysteryGiftMenuMessage2(&data->textState, gText_Final)){
				 SetWarpDestination(MAP_GROUP(CELADON_CITY), MAP_NUM(CELADON_CITY), WARP_ID_NONE, 2, 6);
				 WarpIntoMap();
				 ScriptContext2_RunNewScript(EventScript_SetHealLocation);
				 SetMainCallback2(CB2_WhiteOut);
				 data->state = MG_STATE_EXIT;
		}	
	}
	break;
    case MG_STATE_DONT_HAVE_ANY:
    {
        // Player doesn't have any Wonder Card/News
        // Start prompt to ask where to read one from
        if (!data->isWonderNews)
        {
            if (PrintMysteryGiftMenuMessage(&data->textState, gText_DontHaveCardNewOneInput))
            {
                data->state = MG_STATE_MAIN_MENU;
                PrintMysteryGiftOrEReaderTopMenu(FALSE, TRUE);
            }
        }
        else
        {
            if (PrintMysteryGiftMenuMessage(&data->textState, gText_DontHaveNewsNewOneInput))
            {
                data->state = MG_STATE_SOURCE_PROMPT;
                PrintMysteryGiftOrEReaderTopMenu(FALSE, TRUE);
            }
        }
        break;
    }
    case MG_STATE_SOURCE_PROMPT:
        if (!data->isWonderNews)
            AddTextPrinterToWindow1(gText_WhereShouldCardBeAccessed);
        else
            AddTextPrinterToWindow1(gText_WhereShouldNewsBeAccessed);
        data->state = MG_STATE_SOURCE_PROMPT_INPUT;
        break;
    case MG_STATE_SOURCE_PROMPT_INPUT:
        // Choose where to access the Wonder Card/News from
        switch (MysteryGift_HandleThreeOptionMenu(&data->textState, &data->var, TRUE))
        {
        case 0: // "Wireless Communication"
            ClearTextWindow();
            data->state = MG_STATE_CLIENT_LINK_START;
            data->sourceIsFriend = FALSE;
            break;
        case 1: // "Friend"
            ClearTextWindow();
            data->state = MG_STATE_CLIENT_LINK_START;
            data->sourceIsFriend = TRUE;
            break;
        case LIST_CANCEL:
            ClearTextWindow();
            if (ValidateCardOrNews(data->isWonderNews))
            {
                data->state = MG_STATE_LOAD_GIFT;
            }
            else
            {
                data->state = MG_STATE_TO_MAIN_MENU;
                PrintMysteryGiftOrEReaderTopMenu(FALSE, FALSE);
            }
            break;
        }
        break;
    case MG_STATE_CLIENT_LINK_START:
        *gStringVar1 = EOS;
        *gStringVar2 = EOS;
        *gStringVar3 = EOS;

        switch (data->isWonderNews)
        {
        case FALSE:
            if (data->sourceIsFriend == TRUE)
                CreateTask_LinkMysteryGiftWithFriend(ACTIVITY_WONDER_CARD);
            else if (data->sourceIsFriend == FALSE)
                CreateTask_LinkMysteryGiftOverWireless(ACTIVITY_WONDER_CARD);
            break;
        case TRUE:
            if (data->sourceIsFriend == TRUE)
                CreateTask_LinkMysteryGiftWithFriend(ACTIVITY_WONDER_NEWS);
            else if (data->sourceIsFriend == FALSE)
                CreateTask_LinkMysteryGiftOverWireless(ACTIVITY_WONDER_NEWS);
            break;
        }
        data->state = MG_STATE_CLIENT_LINK_WAIT;
        break;
    case MG_STATE_CLIENT_LINK_WAIT:
        if (gReceivedRemoteLinkPlayers != 0)
        {
            ClearScreenInBg0(TRUE);
            data->state = MG_STATE_CLIENT_COMMUNICATING;
            MysteryGiftClient_Create(data->isWonderNews);
        }
        else if (gSpecialVar_Result == LINKUP_FAILED)
        {
            // Link failed, return to link start menu 
            ClearScreenInBg0(TRUE);
            data->state = MG_STATE_SOURCE_PROMPT;
        }
        break;
    case MG_STATE_CLIENT_COMMUNICATING:
        AddTextPrinterToWindow1(gText_Communicating);
        data->state = MG_STATE_CLIENT_LINK;
        break;
    case MG_STATE_CLIENT_LINK:
        switch (MysteryGiftClient_Run(&data->var))
        {
        case CLI_RET_END:
            Rfu_SetCloseLinkCallback();
            data->msgId = data->var;
            data->state = MG_STATE_CLIENT_LINK_END;
            break;
        case CLI_RET_COPY_MSG:
            memcpy(data->clientMsg, MysteryGiftClient_GetMsg(), 0x40);
            MysteryGiftClient_AdvanceState();
            break;
        case CLI_RET_PRINT_MSG:
            data->state = MG_STATE_CLIENT_MESSAGE;
            break;
        case CLI_RET_YES_NO:
            data->state = MG_STATE_CLIENT_YES_NO;
            break;
        case CLI_RET_ASK_TOSS:
            data->state = MG_STATE_CLIENT_ASK_TOSS;
            StringCopy(gStringVar1, gLinkPlayers[0].name);
            break;
        }
        break;
    case MG_STATE_CLIENT_YES_NO:
        input = DoMysteryGiftYesNo(&data->textState, &data->var, FALSE, MysteryGiftClient_GetMsg());
        switch (input)
        {
        case 0: // Yes
            MysteryGiftClient_SetParam(FALSE);
            MysteryGiftClient_AdvanceState();
            data->state = MG_STATE_CLIENT_COMMUNICATING;
            break;
        case 1: // No
        case MENU_B_PRESSED:
            MysteryGiftClient_SetParam(TRUE);
            MysteryGiftClient_AdvanceState();
            data->state = MG_STATE_CLIENT_COMMUNICATING;
            break;
        }
        break;
    case MG_STATE_CLIENT_MESSAGE:
        if (PrintMysteryGiftMenuMessage(&data->textState, MysteryGiftClient_GetMsg()))
        {
            MysteryGiftClient_AdvanceState();
            data->state = MG_STATE_CLIENT_COMMUNICATING;
        }
        break;
    case MG_STATE_CLIENT_ASK_TOSS:
        // Player is receiving a new Wonder Card/News but needs to toss an existing one to make room.
        // Ask for confirmation.
        input = DoMysteryGiftYesNo(&data->textState, &data->var, FALSE, gText_ThrowAwayWonderCard);
        switch (input)
        {
        case 0: // Yes
            if (IsSavedWonderCardGiftNotReceived() == TRUE)
            {
                data->state = MG_STATE_CLIENT_ASK_TOSS_UNRECEIVED;
            }
            else
            {
                MysteryGiftClient_SetParam(FALSE);
                MysteryGiftClient_AdvanceState();
                data->state = MG_STATE_CLIENT_COMMUNICATING;
            }
            break;
        case 1: // No
        case MENU_B_PRESSED:
            MysteryGiftClient_SetParam(TRUE);
            MysteryGiftClient_AdvanceState();
            data->state = MG_STATE_CLIENT_COMMUNICATING;
            break;
        }
        break;
    case MG_STATE_CLIENT_ASK_TOSS_UNRECEIVED:
        // Player has selected to toss a Wonder Card that they haven't received the gift for.
        // Ask for confirmation again.
        input = DoMysteryGiftYesNo(&data->textState, &data->var, FALSE, gText_HaventReceivedCardsGift);
        switch (input)
        {
        case 0: // Yes
            MysteryGiftClient_SetParam(FALSE);
            MysteryGiftClient_AdvanceState();
            data->state = MG_STATE_CLIENT_COMMUNICATING;
            break;
        case 1: // No
        case MENU_B_PRESSED:
            MysteryGiftClient_SetParam(TRUE);
            MysteryGiftClient_AdvanceState();
            data->state = MG_STATE_CLIENT_COMMUNICATING;
            break;
        }
        break;
    case MG_STATE_CLIENT_LINK_END:
        if (gReceivedRemoteLinkPlayers == 0)
        {
            DestroyWirelessStatusIndicatorSprite();
            data->state = MG_STATE_CLIENT_COMM_COMPLETED;
        }
        break;
    case MG_STATE_CLIENT_COMM_COMPLETED:
        if (PrintStringAndWait2Seconds(&data->textState, gText_CommunicationCompleted))
        {
            if (data->sourceIsFriend == TRUE)
                StringCopy(gStringVar1, gLinkPlayers[0].name);
            data->state = MG_STATE_CLIENT_RESULT_MSG;
        }
        break;
    case MG_STATE_CLIENT_RESULT_MSG:
        msg = GetClientResultMessage(&successMsg, data->isWonderNews, data->sourceIsFriend, data->msgId);
        if (msg == NULL)
            msg = data->clientMsg;
        if (successMsg)
            input = PrintSuccessMessage(&data->textState, msg, &data->var);
        else
            input = PrintMysteryGiftMenuMessage(&data->textState, msg);
        // input var re-used, here it is TRUE if the message is finished
        if (input)
        {
            if (data->msgId == CLI_MSG_NEWS_RECEIVED)
            {
                if (data->sourceIsFriend == TRUE)
                    GenerateRandomWonderNews(WONDER_NEWS_RECV_FRIEND);
                else
                    GenerateRandomWonderNews(WONDER_NEWS_RECV_WIRELESS);
            }
            if (!successMsg)
            {
                // Did not receive card/news, return to main menu
                data->state = MG_STATE_TO_MAIN_MENU;
                PrintMysteryGiftOrEReaderTopMenu(FALSE, FALSE);
            }
            else
            {
                data->state = MG_STATE_SAVE_LOAD_GIFT;
            }
        }
        break;
    case MG_STATE_SAVE_LOAD_GIFT:
        if (SaveOnMysteryGiftMenu(&data->textState))
            data->state = MG_STATE_LOAD_GIFT;
        break;
    case MG_STATE_LOAD_GIFT:
        if (HandleLoadWonderCardOrNews(&data->textState, data->isWonderNews))
            data->state = MG_STATE_HANDLE_GIFT_INPUT;
        break;
    case MG_STATE_HANDLE_GIFT_INPUT:
        if (!data->isWonderNews)
        {
            // Handle Wonder Card input
            if (JOY_NEW(A_BUTTON))
                data->state = MG_STATE_HANDLE_GIFT_SELECT;
            if (JOY_NEW(B_BUTTON))
                data->state = MG_STATE_GIFT_INPUT_EXIT;
        }
        else
        {
            switch (WonderNews_GetInput(gMain.newKeys))
            {
            case NEWS_INPUT_A:
                WonderNews_RemoveScrollIndicatorArrowPair();
                data->state = MG_STATE_HANDLE_GIFT_SELECT;
                break;
            case NEWS_INPUT_B:
                data->state = MG_STATE_GIFT_INPUT_EXIT;
                break;
            }
        }
        break;
    case MG_STATE_HANDLE_GIFT_SELECT:
    {
        // A Wonder Card/News has been selected, handle its menu
        u32 result;
        if (!data->isWonderNews)
        {
            if (IsSendingSavedWonderCardAllowed())
                result = HandleGiftSelectMenu(&data->textState, &data->var, data->isWonderNews, FALSE);
            else
                result = HandleGiftSelectMenu(&data->textState, &data->var, data->isWonderNews, TRUE);
        }
        else
        {
            if (IsSendingSavedWonderNewsAllowed())
                result = HandleGiftSelectMenu(&data->textState, &data->var, data->isWonderNews, FALSE);
            else
                result = HandleGiftSelectMenu(&data->textState, &data->var, data->isWonderNews, TRUE);
        }
        switch (result)
        {
        case 0: // Receive
            data->state = MG_STATE_RECEIVE;
            break;
        case 1: // Send
            data->state = MG_STATE_SEND;
            break;
        case 2: // Toss
            data->state = MG_STATE_ASK_TOSS;
            break;
        case LIST_CANCEL:
            if (data->isWonderNews == TRUE)
                WonderNews_AddScrollIndicatorArrowPair();
            data->state = MG_STATE_HANDLE_GIFT_INPUT;
            break;
        }
        break;
    }
    case MG_STATE_ASK_TOSS:
        // Player is attempting to discard a saved Wonder Card/News
        switch (AskDiscardGift(&data->textState, &data->var, data->isWonderNews))
        {
        case 0: // Yes
            if (!data->isWonderNews && IsSavedWonderCardGiftNotReceived() == TRUE)
                data->state = MG_STATE_ASK_TOSS_UNRECEIVED;
            else
                data->state = MG_STATE_TOSS;
            break;
        case 1: // No
        case MENU_B_PRESSED:
            data->state = MG_STATE_HANDLE_GIFT_SELECT;
            break;
        }
        break;
    case MG_STATE_ASK_TOSS_UNRECEIVED:
        // Player has selected to toss a Wonder Card that they haven't received the gift for.
        // Ask for confirmation again.
        switch ((u32)DoMysteryGiftYesNo(&data->textState, &data->var, TRUE, gText_HaventReceivedGiftOkayToDiscard))
        {
        case 0: // Yes
            data->state = MG_STATE_TOSS;
            break;
        case 1: // No
        case MENU_B_PRESSED:
            data->state = MG_STATE_HANDLE_GIFT_SELECT;
            break;
        }
        break;
    case MG_STATE_TOSS:
        if (ExitWonderCardOrNews(data->isWonderNews, TRUE))
        {
            ClearSavedNewsOrCard(data->isWonderNews);
            data->state = MG_STATE_TOSS_SAVE;
        }
        break;
    case MG_STATE_TOSS_SAVE:
        if (SaveOnMysteryGiftMenu(&data->textState))
            data->state = MG_STATE_TOSSED;
        break;
    case MG_STATE_TOSSED:
        if (PrintThrownAway(&data->textState, data->isWonderNews))
        {
            data->state = MG_STATE_TO_MAIN_MENU;
            PrintMysteryGiftOrEReaderTopMenu(FALSE, FALSE);
        }
        break;
    case MG_STATE_GIFT_INPUT_EXIT:
        if (ExitWonderCardOrNews(data->isWonderNews, FALSE))
            data->state = MG_STATE_TO_MAIN_MENU;
        break;
    case MG_STATE_RECEIVE:
        if (ExitWonderCardOrNews(data->isWonderNews, TRUE))
            data->state = MG_STATE_SOURCE_PROMPT;
        break;
    case MG_STATE_SEND:
        if (ExitWonderCardOrNews(data->isWonderNews, TRUE))
        {
            switch (data->isWonderNews)
            {
            case FALSE:
                CreateTask_SendMysteryGift(ACTIVITY_WONDER_CARD);
                break;
            case TRUE:
                CreateTask_SendMysteryGift(ACTIVITY_WONDER_NEWS);
                break;
            }
            data->sourceIsFriend = TRUE;
            data->state = MG_STATE_SERVER_LINK_WAIT;
        }
        break;
    case MG_STATE_SERVER_LINK_WAIT:
        if (gReceivedRemoteLinkPlayers != 0)
        {
            ClearScreenInBg0(TRUE);
            data->state = MG_STATE_SERVER_LINK_START;
        }
        else if (gSpecialVar_Result == LINKUP_FAILED)
        {
            ClearScreenInBg0(TRUE);
            data->state = MG_STATE_LOAD_GIFT;
        }
        break;
    case MG_STATE_SERVER_LINK_START:
        *gStringVar1 = EOS;
        *gStringVar2 = EOS;
        *gStringVar3 = EOS;

        if (!data->isWonderNews)
        {
            AddTextPrinterToWindow1(gText_SendingWonderCard);
            MysterGiftServer_CreateForCard();
        }
        else
        {
            AddTextPrinterToWindow1(gText_SendingWonderNews);
            MysterGiftServer_CreateForNews();
        }
        data->state = MG_STATE_SERVER_LINK;
        break;
    case MG_STATE_SERVER_LINK:
        if (MysterGiftServer_Run(&data->var) == SVR_RET_END)
        {
            data->msgId = data->var;
            data->state = MG_STATE_SERVER_LINK_END;
        }
        break;
    case MG_STATE_SERVER_LINK_END:
        Rfu_SetCloseLinkCallback();
        StringCopy(gStringVar1, gLinkPlayers[1].name);
        data->state = MG_STATE_SERVER_LINK_END_WAIT;
        break;
    case MG_STATE_SERVER_LINK_END_WAIT:
        if (gReceivedRemoteLinkPlayers == 0)
        {
            DestroyWirelessStatusIndicatorSprite();
            data->state = MG_STATE_SERVER_RESULT_MSG;
        }
        break;
    case MG_STATE_SERVER_RESULT_MSG:
        if (PrintServerResultMessage(&data->textState, &data->var, data->sourceIsFriend, data->msgId))
        {
            if (data->sourceIsFriend == TRUE && data->msgId == SVR_MSG_NEWS_SENT)
            {
                GenerateRandomWonderNews(WONDER_NEWS_SENT);
                data->state = MG_STATE_SAVE_LOAD_GIFT;
            }
            else
            {
                data->state = MG_STATE_TO_MAIN_MENU;
                PrintMysteryGiftOrEReaderTopMenu(FALSE, FALSE);
            }
        }
        break;
    case MG_STATE_CLIENT_ERROR:
    case MG_STATE_SERVER_ERROR:
        if (PrintMysteryGiftMenuMessage(&data->textState, gText_CommunicationError))
        {
            data->state = MG_STATE_TO_MAIN_MENU;
            PrintMysteryGiftOrEReaderTopMenu(FALSE, FALSE);
        }
        break;
    case MG_STATE_EXIT:
        CloseLink();
        Free(data->clientMsg);
        DestroyTask(taskId);
        SetMainCallback2(MainCB_FreeAllBuffersAndReturnToInitTitleScreen);
        break;
    }
}

u16 GetMysteryGiftBaseBlock(void)
{
    return 0x1A9;
}

static void LoadMysteryGiftTextboxBorder(u8 bgId)
{
    DecompressAndLoadBgGfxUsingHeap(bgId, sTextboxBorder_Gfx, 0x100, 0, 0);
}
