VerdanturfTown_FriendshipRatersHouse_MapScripts::
	.byte 0

VerdanturfTown_FriendshipRatersHouse_EventScript_FriendshipRater::
	lock
	faceplayer
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	switch VAR_RESULT
	case 0, VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou
	case 1, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary
	case 2, VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou
	case 3, VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou
	case 4, VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot
	case 5, VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy
	case 6, VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_DetestsYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_VeryWary::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryWary, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_NotUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_GettingUsedToYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_LikesYouQuiteALot::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_VeryHappy::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_AdoresYou::
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox VerdanturfTown_FriendshipRatersHouse_Text_Pikachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

VerdanturfTown_FriendshipRatersHouse_Text_SeeHowMuchPokemonLikesYou:
	.string "Let me see your POKÉMON.\n"
	.string "I'll check to see how much it likes you.\p"
	.string "Oh.\n"
	.string "Your POKÉMON…$"

VerdanturfTown_FriendshipRatersHouse_Text_AdoresYou:
	.string	"te adora.\n"
	.string	"Es que no te puede querer más.\l"
	.string	"Tanto amor me conmueve hasta a mí.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryHappy:
	.string	"parece muy feliz.\n"
	.string	"Es obvio que te quiere un montón.$"

VerdanturfTown_FriendshipRatersHouse_Text_LikesYouQuiteALot:
	.string	"te quiere mucho.\n"
	.string	"Parece que necesita algo más de cariño.$"

VerdanturfTown_FriendshipRatersHouse_Text_GettingUsedToYou:
	.string	"se está acostumbrando a ti.\n"
	.string	"Parece que tiene confianza en ti.$"

VerdanturfTown_FriendshipRatersHouse_Text_NotUsedToYou:
	.string	"todavía debe acostumbrarse a ti.\n"
	.string	"Le traes un poco al fresco.$"

VerdanturfTown_FriendshipRatersHouse_Text_VeryWary:
	.string	"desconfía mucho de ti.\n"
	.string	"Los ojos le brillan de forma extraña…\l"
	.string	"Parece que no le gustas ni un pelo.$"

VerdanturfTown_FriendshipRatersHouse_Text_DetestsYou:
	.string "This is a little hard for me to say…\p"
	.string "Your POKÉMON simply detests you.\n"
	.string "Doesn't that make you uncomfortable?$"

VerdanturfTown_FriendshipRatersHouse_Text_Pikachu:
	.string	"PIKACHU: ¡Pika, pika!$"

