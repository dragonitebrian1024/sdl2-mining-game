#pragma once
#define SDL_MAIN_HANDLED
#include "SDL.h"
#include "SDL_image.h"
#include <string>
#include <random>
//make 480 blocks somehow

class Blocks
{
public:
	Blocks();
	~Blocks();
	SDL_Texture* block_1; SDL_Texture* block_2; SDL_Texture* block_3; SDL_Texture* block_4; SDL_Texture* block_5; SDL_Texture* block_6; SDL_Texture* block_7; SDL_Texture* block_8; SDL_Texture* block_9; SDL_Texture* block_10; SDL_Texture* block_11; SDL_Texture* block_12; SDL_Texture* block_13; SDL_Texture* block_14; SDL_Texture* block_15; SDL_Texture* block_16; SDL_Texture* block_17; SDL_Texture* block_18; SDL_Texture* block_19; SDL_Texture* block_20; SDL_Texture* block_21; SDL_Texture* block_22; SDL_Texture* block_23; SDL_Texture* block_24; SDL_Texture* block_25; SDL_Texture* block_26; SDL_Texture* block_27; SDL_Texture* block_28; SDL_Texture* block_29; SDL_Texture* block_30; SDL_Texture* block_31; SDL_Texture* block_32; SDL_Texture* block_33; SDL_Texture* block_34; SDL_Texture* block_35; SDL_Texture* block_36; SDL_Texture* block_37; SDL_Texture* block_38; SDL_Texture* block_39; SDL_Texture* block_40; SDL_Texture* block_41; SDL_Texture* block_42; SDL_Texture* block_43; SDL_Texture* block_44; SDL_Texture* block_45; SDL_Texture* block_46; SDL_Texture* block_47; SDL_Texture* block_48; SDL_Texture* block_49; SDL_Texture* block_50; SDL_Texture* block_51; SDL_Texture* block_52; SDL_Texture* block_53; SDL_Texture* block_54; SDL_Texture* block_55; SDL_Texture* block_56; SDL_Texture* block_57; SDL_Texture* block_58; SDL_Texture* block_59; SDL_Texture* block_60; SDL_Texture* block_61; SDL_Texture* block_62; SDL_Texture* block_63; SDL_Texture* block_64; SDL_Texture* block_65; SDL_Texture* block_66; SDL_Texture* block_67; SDL_Texture* block_68; SDL_Texture* block_69; SDL_Texture* block_70; SDL_Texture* block_71; SDL_Texture* block_72; SDL_Texture* block_73; SDL_Texture* block_74; SDL_Texture* block_75; SDL_Texture* block_76; SDL_Texture* block_77; SDL_Texture* block_78; SDL_Texture* block_79; SDL_Texture* block_80; SDL_Texture* block_81; SDL_Texture* block_82; SDL_Texture* block_83; SDL_Texture* block_84; SDL_Texture* block_85; SDL_Texture* block_86; SDL_Texture* block_87; SDL_Texture* block_88; SDL_Texture* block_89; SDL_Texture* block_90; SDL_Texture* block_91; SDL_Texture* block_92; SDL_Texture* block_93; SDL_Texture* block_94; SDL_Texture* block_95; SDL_Texture* block_96; SDL_Texture* block_97; SDL_Texture* block_98;

	
	SDL_Rect block;

	const char* blocks[11] = { "dirt.png", "stone.png", "diamond.png", "gold.png", "iron.png", "coal.png", "ruby.png", "gold.png", "iron.png", "coal.png", "gold.png"};

	void block_generation();
	void block_rendering();
	SDL_Rect block1;
	SDL_Rect block2;
	SDL_Rect block3;
	SDL_Rect block4;
	SDL_Rect block5;
	SDL_Rect block6;
	SDL_Rect block7;
	SDL_Rect block8;
	SDL_Rect block9;
	SDL_Rect block10;
	SDL_Rect block11;
	SDL_Rect block12;
	SDL_Rect block13;
	SDL_Rect block14;
	SDL_Rect block15;
	SDL_Rect block16;
	SDL_Rect block17;
	SDL_Rect block18;
	SDL_Rect block19;
	SDL_Rect block20;
	SDL_Rect block21;
	SDL_Rect block22;
	SDL_Rect block23;
	SDL_Rect block24;
	SDL_Rect block25;
	SDL_Rect block26;
	SDL_Rect block27;
	SDL_Rect block28;
	SDL_Rect block29;
	SDL_Rect block30;
	SDL_Rect block31;
	SDL_Rect block32;
	SDL_Rect block33;
	SDL_Rect block34;
	SDL_Rect block35;
	SDL_Rect block36;
	SDL_Rect block37;
	SDL_Rect block38;
	SDL_Rect block39;
	SDL_Rect block40;
	SDL_Rect block41;
	SDL_Rect block42;
	SDL_Rect block43;
	SDL_Rect block44;
	SDL_Rect block45;
	SDL_Rect block46;
	SDL_Rect block47;
	SDL_Rect block48;
	SDL_Rect block49;
	SDL_Rect block50;
	SDL_Rect block51;
	SDL_Rect block52;
	SDL_Rect block53;
	SDL_Rect block54;
	SDL_Rect block55;
	SDL_Rect block56;
	SDL_Rect block57;
	SDL_Rect block58;
	SDL_Rect block59;
	SDL_Rect block60;
	SDL_Rect block61;
	SDL_Rect block62;
	SDL_Rect block63;
	SDL_Rect block64;
	SDL_Rect block65;
	SDL_Rect block66;
	SDL_Rect block67;
	SDL_Rect block68;
	SDL_Rect block69;
	SDL_Rect block70;
	SDL_Rect block71;
	SDL_Rect block72;
	SDL_Rect block73;
	SDL_Rect block74;
	SDL_Rect block75;
	SDL_Rect block76;
	SDL_Rect block77;
	SDL_Rect block78;
	SDL_Rect block79;
	SDL_Rect block80;
	SDL_Rect block81;
	SDL_Rect block82;//tommorrow, drilling logic by measuring which data means which like dirt = 0x09747h747 or something
	SDL_Rect block83;
	SDL_Rect block84;
	SDL_Rect block85;
	SDL_Rect block86;
	SDL_Rect block87;
	SDL_Rect block88;
	SDL_Rect block89;
	SDL_Rect block90;
	SDL_Rect block91;
	SDL_Rect block92;
	SDL_Rect block93;
	SDL_Rect block94;
	SDL_Rect block95;
	SDL_Rect block96;
	SDL_Rect block97;
	SDL_Rect block98;
	int blocknum1 = 0;
	int blocknum2;
	int blocknum3;
	int blocknum4;
	int blocknum5;
	int blocknum6;
	int blocknum7;
	int blocknum8;
	int blocknum9;
	int blocknum10;
	int blocknum11;
	int blocknum12;
	int blocknum13;
	int blocknum14;
	int blocknum15;
	int blocknum16;
	int blocknum17;
	int blocknum18;
	int blocknum19;
	int blocknum20;
	int blocknum21;
	int blocknum22;
	int blocknum23;
	int blocknum24;
	int blocknum25;
	int blocknum26;
	int blocknum27;
	int blocknum28;
	int blocknum29;
	int blocknum30;
	int blocknum31;
	int blocknum32;
	int blocknum33;
	int blocknum34;
	int blocknum35;
	int blocknum36;
	int blocknum37;
	int blocknum38;
	int blocknum39;
	int blocknum40;
	int blocknum41;
	int blocknum42;
	int blocknum43;
	int blocknum44;
	int blocknum45;
	int blocknum46;
	int blocknum47;
	int blocknum48;
	int blocknum49;
	int blocknum50;
	int blocknum51;
	int blocknum52;
	int blocknum53;
	int blocknum54;
	int blocknum55;
	int blocknum56;
	int blocknum57;
	int blocknum58;
	int blocknum59;
	int blocknum60;
	int blocknum61;
	int blocknum62;
	int blocknum63;
	int blocknum64;
	int blocknum65;
	int blocknum66;
	int blocknum67;
	int blocknum68;
	int blocknum69;
	int blocknum70;
	int blocknum71;
	int blocknum72;
	int blocknum73;
	int blocknum74;
	int blocknum75;
	int blocknum76;
	int blocknum77;
	int blocknum78;
	int blocknum79;
	int blocknum80;
	int blocknum81;
	int blocknum82;
	int blocknum83;
	int blocknum84;
	int blocknum85;
	int blocknum86;
	int blocknum87;
	int blocknum88;
	int blocknum89;
	int blocknum90;
	int blocknum91;
	int blocknum92;
	int blocknum93;
	int blocknum94;
	int blocknum95;
	int blocknum96;
	int blocknum97;
};

