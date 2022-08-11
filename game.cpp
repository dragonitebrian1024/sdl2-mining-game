#include "game.h"
#include "textureManager.h"
Game* gamme = new Game;
Blocks* blocks = new Blocks;
Game::Game()
{

}
Game::~Game()
{

}

Blocks::Blocks()
{

}

Blocks::~Blocks()
{

}

void Blocks::block_generation()
{ 
	int somefin;
	std::cout << "enter seed:" << std::endl;
	std::cin >> somefin;
	blocknum2 = rand() & 2;
	somefin += 1;
	srand(somefin);
	blocknum3 = rand() & 3;
	somefin += 1;
	srand(somefin);
	blocknum4 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum5 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum6 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum7 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum8 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum9 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum10 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum11 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum12 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum13 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum14 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum15 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum16 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum17 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum18 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum19 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum20 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum21 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum22 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum23 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum24 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum25 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum26 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum27 = rand() & 4;
	somefin += 1;
	srand(somefin);
	blocknum28 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum29 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum30 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum31 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum32 = rand() & 5;
	somefin += 1;
	srand(somefin);
	blocknum33 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum34 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum35 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum36 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum37 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum38 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum39 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum40 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum41= rand() & 5;
	somefin += 1;
	srand(somefin);
	blocknum42 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum43 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum44 = rand() & 9;
	somefin += 1;
	blocknum45 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum46 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum47 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum48 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum49 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum50 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum51 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum52 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum53 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum54 = rand() & 6;
	somefin += 1;
	srand(somefin);
	blocknum55 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum56 = rand() & 5;
	somefin += 1;
	srand(somefin);
	blocknum57 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum58 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum59 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum60 = rand() & 6;
	somefin += 1;
	srand(somefin);
	blocknum61 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum62 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum63 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum64 = rand() & 4;
	somefin += 1;
	srand(somefin);
	blocknum65 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum66 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum67 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum68 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum69 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum70 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum71 = rand() & 6;
	somefin += 1;
	srand(somefin);
	blocknum72 = rand() & 8;
	somefin += 1;
	srand(somefin);
	blocknum73 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum74 = rand() & 7;
	somefin += 1;
	srand(somefin);
	blocknum75 = rand() & 2;
	somefin += 1;
	srand(somefin);
	blocknum76 = rand() & 2;
	somefin += 1;
	srand(somefin);
	blocknum77 = rand() & 2;
	somefin += 1;
	srand(somefin);
	blocknum78 = rand() & 4;
	somefin += 1;
	srand(somefin);
	blocknum79 = rand() & 4;
	somefin += 1;
	srand(somefin);
	blocknum80 = rand() & 2;
	somefin += 1;
	srand(somefin);
	blocknum81 = rand() & 2;
	somefin += 1;
	srand(somefin);
	blocknum82 = rand() & 8;
	somefin += 1;
	srand(somefin);
	blocknum83 = rand() & 2;
	somefin += 1;
	srand(somefin);
	blocknum84 = rand() & 2;
	somefin += 1;
	srand(somefin);
	blocknum85 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum86 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum87 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum88 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum89 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum90 = rand() & 9;
	somefin += 1;
	srand(somefin);
	blocknum91 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum92 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum93 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum94 = rand() & 6;
	somefin += 1;
	srand(somefin);
	blocknum95 = rand() & 10;
	somefin += 1;
	blocknum96 = rand() & 10;
	somefin += 1;
	srand(somefin);
	blocknum97 = rand() & 10;
	Blocks::block_1 = TextureManager::LoadTexture(Blocks::blocks[blocknum1], renderer);
	Blocks::block_2 = TextureManager::LoadTexture(Blocks::blocks[blocknum2], renderer);
	Blocks::block_3 = TextureManager::LoadTexture(Blocks::blocks[blocknum3], renderer);
	Blocks::block_4 = TextureManager::LoadTexture(Blocks::blocks[blocknum4], renderer);
	Blocks::block_5 = TextureManager::LoadTexture(Blocks::blocks[blocknum5], renderer);
	Blocks::block_6 = TextureManager::LoadTexture(Blocks::blocks[blocknum6], renderer);
	Blocks::block_7 = TextureManager::LoadTexture(Blocks::blocks[blocknum7], renderer);
	Blocks::block_8 = TextureManager::LoadTexture(Blocks::blocks[blocknum8], renderer);
	Blocks::block_9 = TextureManager::LoadTexture(Blocks::blocks[blocknum9], renderer);
	Blocks::block_10 = TextureManager::LoadTexture(Blocks::blocks[blocknum10], renderer);
	Blocks::block_11 = TextureManager::LoadTexture(Blocks::blocks[blocknum11], renderer);
	Blocks::block_12 = TextureManager::LoadTexture(Blocks::blocks[blocknum12], renderer);
	Blocks::block_13 = TextureManager::LoadTexture(Blocks::blocks[blocknum13], renderer);
	Blocks::block_14 = TextureManager::LoadTexture(Blocks::blocks[blocknum14], renderer);
	Blocks::block_15 = TextureManager::LoadTexture(Blocks::blocks[blocknum15], renderer);
	Blocks::block_16 = TextureManager::LoadTexture(Blocks::blocks[blocknum16], renderer);
	Blocks::block_17 = TextureManager::LoadTexture(Blocks::blocks[blocknum17], renderer);
	Blocks::block_18 = TextureManager::LoadTexture(Blocks::blocks[blocknum18], renderer);
	Blocks::block_19 = TextureManager::LoadTexture(Blocks::blocks[blocknum19], renderer);
	Blocks::block_20 = TextureManager::LoadTexture(Blocks::blocks[blocknum20], renderer);
	Blocks::block_21 = TextureManager::LoadTexture(Blocks::blocks[blocknum21], renderer);
	Blocks::block_22 = TextureManager::LoadTexture(Blocks::blocks[blocknum22], renderer);
	Blocks::block_23 = TextureManager::LoadTexture(Blocks::blocks[blocknum23], renderer);
	Blocks::block_24 = TextureManager::LoadTexture(Blocks::blocks[blocknum24], renderer);
	Blocks::block_25 = TextureManager::LoadTexture(Blocks::blocks[blocknum25], renderer);
	Blocks::block_26 = TextureManager::LoadTexture(Blocks::blocks[blocknum26], renderer);
	Blocks::block_27 = TextureManager::LoadTexture(Blocks::blocks[blocknum27], renderer);
	Blocks::block_28 = TextureManager::LoadTexture(Blocks::blocks[blocknum28], renderer);
	Blocks::block_29 = TextureManager::LoadTexture(Blocks::blocks[blocknum29], renderer);
	Blocks::block_30 = TextureManager::LoadTexture(Blocks::blocks[blocknum30], renderer);
	Blocks::block_31 = TextureManager::LoadTexture(Blocks::blocks[blocknum31], renderer);
	Blocks::block_32 = TextureManager::LoadTexture(Blocks::blocks[blocknum32], renderer);
	Blocks::block_33 = TextureManager::LoadTexture(Blocks::blocks[blocknum33], renderer);
	Blocks::block_34 = TextureManager::LoadTexture(Blocks::blocks[blocknum34], renderer);
	Blocks::block_35 = TextureManager::LoadTexture(Blocks::blocks[blocknum35], renderer);
	Blocks::block_36 = TextureManager::LoadTexture(Blocks::blocks[blocknum36], renderer);
	Blocks::block_37 = TextureManager::LoadTexture(Blocks::blocks[blocknum37], renderer);
	Blocks::block_38 = TextureManager::LoadTexture(Blocks::blocks[blocknum38], renderer);
	Blocks::block_39 = TextureManager::LoadTexture(Blocks::blocks[blocknum39], renderer);
	Blocks::block_40 = TextureManager::LoadTexture(Blocks::blocks[blocknum40], renderer);
	Blocks::block_41 = TextureManager::LoadTexture(Blocks::blocks[blocknum41], renderer);
	Blocks::block_42 = TextureManager::LoadTexture(Blocks::blocks[blocknum42], renderer);
	Blocks::block_43 = TextureManager::LoadTexture(Blocks::blocks[blocknum43], renderer);
	Blocks::block_44 = TextureManager::LoadTexture(Blocks::blocks[blocknum44], renderer);
	Blocks::block_45 = TextureManager::LoadTexture(Blocks::blocks[blocknum45], renderer);
	Blocks::block_46 = TextureManager::LoadTexture(Blocks::blocks[blocknum46], renderer);
	Blocks::block_47 = TextureManager::LoadTexture(Blocks::blocks[blocknum47], renderer);
	Blocks::block_48 = TextureManager::LoadTexture(Blocks::blocks[blocknum48], renderer);
	Blocks::block_49 = TextureManager::LoadTexture(Blocks::blocks[blocknum49], renderer);
	Blocks::block_50 = TextureManager::LoadTexture(Blocks::blocks[blocknum50], renderer);
	Blocks::block_51 = TextureManager::LoadTexture(Blocks::blocks[blocknum51], renderer);
	Blocks::block_52 = TextureManager::LoadTexture(Blocks::blocks[blocknum52], renderer);
	Blocks::block_53 = TextureManager::LoadTexture(Blocks::blocks[blocknum53], renderer);
	Blocks::block_54 = TextureManager::LoadTexture(Blocks::blocks[blocknum54], renderer);
	Blocks::block_55 = TextureManager::LoadTexture(Blocks::blocks[blocknum55], renderer);
	Blocks::block_56 = TextureManager::LoadTexture(Blocks::blocks[blocknum56], renderer);
	Blocks::block_57 = TextureManager::LoadTexture(Blocks::blocks[blocknum57], renderer);
	Blocks::block_58 = TextureManager::LoadTexture(Blocks::blocks[blocknum58], renderer);
	Blocks::block_59 = TextureManager::LoadTexture(Blocks::blocks[blocknum59], renderer);
	Blocks::block_60 = TextureManager::LoadTexture(Blocks::blocks[blocknum60], renderer);
	Blocks::block_61 = TextureManager::LoadTexture(Blocks::blocks[blocknum61], renderer);
	Blocks::block_62 = TextureManager::LoadTexture(Blocks::blocks[blocknum62], renderer);
	Blocks::block_63 = TextureManager::LoadTexture(Blocks::blocks[blocknum63], renderer);
	Blocks::block_64 = TextureManager::LoadTexture(Blocks::blocks[blocknum64], renderer);
	Blocks::block_65 = TextureManager::LoadTexture(Blocks::blocks[blocknum65], renderer);
	Blocks::block_66 = TextureManager::LoadTexture(Blocks::blocks[blocknum66], renderer);
	Blocks::block_67 = TextureManager::LoadTexture(Blocks::blocks[blocknum67], renderer);
	Blocks::block_68 = TextureManager::LoadTexture(Blocks::blocks[blocknum68], renderer);
	Blocks::block_69 = TextureManager::LoadTexture(Blocks::blocks[blocknum69], renderer);
	Blocks::block_70 = TextureManager::LoadTexture(Blocks::blocks[blocknum70], renderer);
	Blocks::block_71 = TextureManager::LoadTexture(Blocks::blocks[blocknum71], renderer);
	Blocks::block_72 = TextureManager::LoadTexture(Blocks::blocks[blocknum72], renderer);
	Blocks::block_73 = TextureManager::LoadTexture(Blocks::blocks[blocknum73], renderer);
	Blocks::block_74 = TextureManager::LoadTexture(Blocks::blocks[blocknum74], renderer);
	Blocks::block_75 = TextureManager::LoadTexture(Blocks::blocks[blocknum75], renderer);
	Blocks::block_76 = TextureManager::LoadTexture(Blocks::blocks[blocknum76], renderer);
	Blocks::block_77 = TextureManager::LoadTexture(Blocks::blocks[blocknum77], renderer);
	Blocks::block_78 = TextureManager::LoadTexture(Blocks::blocks[blocknum78], renderer);
	Blocks::block_79 = TextureManager::LoadTexture(Blocks::blocks[blocknum79], renderer);
	Blocks::block_80 = TextureManager::LoadTexture(Blocks::blocks[blocknum80], renderer);
	Blocks::block_81 = TextureManager::LoadTexture(Blocks::blocks[blocknum81], renderer);
	Blocks::block_82 = TextureManager::LoadTexture(Blocks::blocks[blocknum82], renderer);
	Blocks::block_83 = TextureManager::LoadTexture(Blocks::blocks[blocknum83], renderer);
	Blocks::block_84 = TextureManager::LoadTexture(Blocks::blocks[blocknum84], renderer);
	Blocks::block_85 = TextureManager::LoadTexture(Blocks::blocks[blocknum85], renderer);
	Blocks::block_86 = TextureManager::LoadTexture(Blocks::blocks[blocknum86], renderer);
	Blocks::block_87 = TextureManager::LoadTexture(Blocks::blocks[blocknum87], renderer);
	Blocks::block_88 = TextureManager::LoadTexture(Blocks::blocks[blocknum88], renderer);
	Blocks::block_89 = TextureManager::LoadTexture(Blocks::blocks[blocknum89], renderer);
	Blocks::block_90 = TextureManager::LoadTexture(Blocks::blocks[blocknum90], renderer);
	Blocks::block_91 = TextureManager::LoadTexture(Blocks::blocks[blocknum91], renderer);
	Blocks::block_92 = TextureManager::LoadTexture(Blocks::blocks[blocknum92], renderer);
	Blocks::block_93 = TextureManager::LoadTexture(Blocks::blocks[blocknum93], renderer);
	Blocks::block_94 = TextureManager::LoadTexture(Blocks::blocks[blocknum94], renderer);
	Blocks::block_95 = TextureManager::LoadTexture(Blocks::blocks[blocknum95], renderer);
	Blocks::block_96 = TextureManager::LoadTexture(Blocks::blocks[blocknum96], renderer);
	Blocks::block_97 = TextureManager::LoadTexture(Blocks::blocks[blocknum97], renderer);

	Blocks::block1 = { 0, 0, 100, 100 };
	Blocks::block2 = { 100, 0, 100, 100 };
	Blocks::block3 = { 200, 0, 100, 100 };
	Blocks::block4 = { 300, 0, 100, 100 };
	Blocks::block5 = { 400, 0, 100, 100 };
	Blocks::block6 = { 500, 0, 100, 100 };
	Blocks::block7 = { 600, 0, 100, 100 };
	Blocks::block8 = { 700, 0, 100, 100 };
	Blocks::block9 = { 800, 0, 100, 100 };
	Blocks::block10 = { 900, 0, 100, 100 };
	Blocks::block11 = { 1000, 0, 100, 100 };
	Blocks::block12 = { 0, 100, 100, 100 };
	Blocks::block13 = { 100, 100, 100, 100 };
	Blocks::block14 = { 200, 100, 100, 100 };
	Blocks::block15 = { 300, 100, 100, 100 };
	Blocks::block16 = { 400, 100, 100, 100 };
	Blocks::block17 = { 500, 100, 100, 100 };
	Blocks::block18 = { 600, 100, 100, 100 };
	Blocks::block19 = { 700, 100, 100, 100 };
	Blocks::block20 = { 800, 100, 100, 100 };
	Blocks::block21 = { 900, 100, 100, 100 };
	Blocks::block22 = { 1000, 100, 100, 100 };
	Blocks::block23 = { 0, 200, 100, 100 };
	Blocks::block24 = { 100, 200, 100, 100 };
	Blocks::block25 = { 200, 200, 100, 100 };
	Blocks::block26 = { 300, 200, 100, 100 };
	Blocks::block27 = { 400, 200, 100, 100 };
	Blocks::block28 = { 500, 200, 100, 100 };
	Blocks::block29 = { 600, 200, 100, 100 };
	Blocks::block30 = { 700, 200, 100, 100 };
	Blocks::block31 = { 800, 200, 100, 100 };
	Blocks::block32 = { 900, 200, 100, 100 };
	Blocks::block33 = { 1000, 200, 100, 100 };
	Blocks::block34 = { 0, 300, 100, 100 };
	Blocks::block35 = { 100, 300, 100, 100 };
	Blocks::block36 = { 200, 300, 100, 100 };
	Blocks::block37 = { 300, 300, 100, 100 };
	Blocks::block38 = { 400, 300, 100, 100 };
	Blocks::block39 = { 500, 300, 100, 100 };
	Blocks::block40 = { 600, 300, 100, 100 };
	Blocks::block41 = { 700, 300, 100, 100 };
	Blocks::block42 = { 800, 300, 100, 100 };
	Blocks::block43 = { 900, 300, 100, 100 };
	Blocks::block44 = { 1000, 300, 100, 100 };
	Blocks::block45 = { 0, 400, 100, 100 };
	Blocks::block46 = { 100, 400, 100, 100 };
	Blocks::block47 = { 200, 400, 100, 100 };
	Blocks::block48 = { 300, 400, 100, 100 };
	Blocks::block49 = { 400, 400, 100, 100 };
	Blocks::block50 = { 500, 400, 100, 100 };
	Blocks::block51 = { 600, 400, 100, 100 };
	Blocks::block52 = { 700, 400, 100, 100 };
	Blocks::block53 = { 800, 400, 100, 100 };
	Blocks::block54 = { 900, 400, 100, 100 };
	Blocks::block55 = { 1000, 400, 100, 100 };
	Blocks::block56 = { 0, 500, 100, 100 };
	Blocks::block57 = { 100, 500, 100, 100 };
	Blocks::block58 = { 200, 500, 100, 100 };
	Blocks::block59 = { 300, 500, 100, 100 };
	Blocks::block60 = { 400, 500, 100, 100 };
	Blocks::block61 = { 500, 500, 100, 100 };
	Blocks::block62 = { 600, 500, 100, 100 };
	Blocks::block63 = { 700, 500, 100, 100 };
	Blocks::block64 = { 800, 500, 100, 100 };
	Blocks::block65 = { 900, 500, 100, 100 };
	Blocks::block66 = { 1000, 500, 100, 100 };
	Blocks::block67 = { 0, 600, 100, 100 };
	Blocks::block68 = { 100, 600, 100, 100 };
	Blocks::block69 = { 200, 600, 100, 100 };
	Blocks::block70 = { 300, 600, 100, 100 };
	Blocks::block71 = { 400, 600, 100, 100 };
	Blocks::block72 = { 500, 600, 100, 100 };
	Blocks::block73 = { 600, 600, 100, 100 };
	Blocks::block74 = { 700, 600, 100, 100 };
	Blocks::block75 = { 800, 600, 100, 100 };
	Blocks::block76 = { 900, 600, 100, 100 };
	Blocks::block77 = { 1000, 600, 100, 100 };
	Blocks::block78 = { 0, 700, 100, 100 };
	Blocks::block79 = { 100, 700, 100, 100 };
	Blocks::block80 = { 200, 700, 100, 100 };
	Blocks::block81 = { 300, 700, 100, 100 };
	Blocks::block82 = { 400, 700, 100, 100 };
	Blocks::block83 = { 500, 700, 100, 100 };
	Blocks::block84 = { 600, 700, 100, 100 };
	Blocks::block85 = { 700, 700, 100, 100 };
	Blocks::block86 = { 800, 700, 100, 100 };
	Blocks::block87 = { 900, 700, 100, 100 };
	Blocks::block88 = { 1000, 700, 100, 100 };
	Blocks::block89 = { 1100, 0, 100, 100 };
	Blocks::block90 = { 1100, 100, 100, 100 };
	Blocks::block91 = { 1100, 200, 100, 100 };
	Blocks::block92 = { 1100, 300, 100, 100 };
	Blocks::block93 = { 1100, 400, 100, 100 };
	Blocks::block94 = { 1100, 500, 100, 100 };
	Blocks::block95 = { 1100, 600, 100, 100 };
	Blocks::block96 = { 1100, 700, 100, 100 };
	Blocks::block97 = { 1100, 800, 100, 100 };

};

void Game::block_logic(SDL_Texture* blocktex, int blocknumber, SDL_Rect block)//fix this by making a bool thing where the drillequip will turn into bools
{
	SDL_bool touched = SDL_HasIntersection(&block, &drillhitterbox);
	bool drill;
	bool shovel;
	bool goldpick;
	bool coalpick;
	bool ironpick;
	bool diamondpick;
	bool rubypick;
	if (drill1equip == 1 || drill2equip == 1) {
		drill = true;
		shovel = false;
		goldpick = false;
		coalpick = false;
		ironpick = false;
		diamondpick = false;
	}
	else if (drill1equip == 2 || drill2equip == 2) {
		shovel = true;
		drill = false;
		goldpick = false;
		coalpick = false;
		ironpick = false;
		diamondpick = false;
	}
	else if (drill1equip == 4 || drill2equip == 4) {
		goldpick = true;
		drill = false;
		shovel = false;
		coalpick = false;
		ironpick = false;
		diamondpick = false;
	}
	else if (drill1equip == 3 || drill2equip == 3) {
		coalpick = true;
		goldpick = false;
		drill = false;
		shovel = false;
		ironpick = false;
		diamondpick = false;
	}
	else if (drill1equip == 5 || drill2equip == 5) {
		ironpick = true;
		goldpick = false;
		drill = false;
		shovel = false;
		coalpick = false;
		diamondpick = false;
		
	}
	else if (drill1equip == 6) {
		diamondpick = true;
		goldpick = false;
		drill = false;
		shovel = false;
		coalpick = false;
		goldpick = false;
		ironpick = false;
	}
	if (drill2equip == 1) {
		drill = true;
		shovel = false;
		goldpick = false;
		coalpick = false;
		ironpick = false;
		rubypick = false;
	}
	else if (drill2equip == 2) {
		shovel = true;
		drill = false;
		goldpick = false;
		coalpick = false;
		ironpick = false;
		rubypick = false;
	}
	else if (drill2equip == 4) {
		goldpick = true;
		drill = false;
		shovel = false;
		coalpick = false;
		ironpick = false;
		rubypick = false;
	}
	else if (drill2equip == 3) {
		coalpick = true;
		goldpick = false;
		drill = false;
		shovel = false;
		ironpick = false;
		rubypick = false;
	}
	else if (drill2equip == 5) {
		ironpick = true;
		goldpick = false;
		drill = false;
		shovel = false;
		coalpick = false;
		rubypick = false;

	}
	else if (drill2equip == 6) {
		rubypick = true;
		goldpick = false;
		drill = false;
		shovel = false;
		coalpick = false;
		goldpick = false;
		ironpick = false;
	}
	if (blocknumber == 0 && shovel == true && touched) {
		SDL_DestroyTexture(blocktex);
		howmanybroken += 1;
	}
	else if (blocknumber == 1 && drill == true && touched)
	{
		SDL_DestroyTexture(blocktex);
		howmanybroken += 1;
	}
	else if (blocknumber == 2 && diamondpick == true)
	{
		SDL_DestroyTexture(blocktex);
		howmanybroken += 1;
	}
	else if (blocknumber == 3 || blocknumber == 7 || blocknumber == 10 && goldpick == true)
	{
		SDL_DestroyTexture(blocktex);
		howmanybroken += 1;
	}
	else if (blocknumber == 4 || blocknumber == 8 && ironpick == true)
	{
		SDL_DestroyTexture(blocktex);
		howmanybroken += 1;
	}
	else if (blocknumber == 5 || blocknumber == 9 && coalpick == true)
	{
		SDL_DestroyTexture(blocktex);
		howmanybroken += 1;
	}
	else if (blocknumber == 6 && rubypick == true)
	{
		SDL_DestroyTexture(blocktex);
		howmanybroken += 1;
	}
}

void Blocks::block_rendering()
{
	SDL_RenderCopy(renderer, block_1, NULL, &block1);
	SDL_RenderCopy(renderer, block_2, NULL, &block2);
	SDL_RenderCopy(renderer, block_3, NULL, &block3);
	SDL_RenderCopy(renderer, block_4, NULL, &block4);
	SDL_RenderCopy(renderer, block_5, NULL, &block5);
	SDL_RenderCopy(renderer, block_6, NULL, &block6);
	SDL_RenderCopy(renderer, block_7, NULL, &block7);
	SDL_RenderCopy(renderer, block_8, NULL, &block8);
	SDL_RenderCopy(renderer, block_9, NULL, &block9);
	SDL_RenderCopy(renderer, block_10, NULL, &block10);
	SDL_RenderCopy(renderer, block_11, NULL, &block11);
	SDL_RenderCopy(renderer, block_12, NULL, &block12);
	SDL_RenderCopy(renderer, block_13, NULL, &block13);
	SDL_RenderCopy(renderer, block_14, NULL, &block14);
	SDL_RenderCopy(renderer, block_15, NULL, &block15);
	SDL_RenderCopy(renderer, block_16, NULL, &block16);
	SDL_RenderCopy(renderer, block_17, NULL, &block17);
	SDL_RenderCopy(renderer, block_18, NULL, &block18);
	SDL_RenderCopy(renderer, block_19, NULL, &block19);
	SDL_RenderCopy(renderer, block_20, NULL, &block20);
	SDL_RenderCopy(renderer, block_21, NULL, &block21);
	SDL_RenderCopy(renderer, block_22, NULL, &block22);
	SDL_RenderCopy(renderer, block_23, NULL, &block23);
	SDL_RenderCopy(renderer, block_24, NULL, &block24);
	SDL_RenderCopy(renderer, block_25, NULL, &block25);
	SDL_RenderCopy(renderer, block_26, NULL, &block26);
	SDL_RenderCopy(renderer, block_27, NULL, &block27);
	SDL_RenderCopy(renderer, block_28, NULL, &block28);
	SDL_RenderCopy(renderer, block_29, NULL, &block29);
	SDL_RenderCopy(renderer, block_30, NULL, &block30);
	SDL_RenderCopy(renderer, block_31, NULL, &block31);
	SDL_RenderCopy(renderer, block_32, NULL, &block32);
	SDL_RenderCopy(renderer, block_33, NULL, &block33);
	SDL_RenderCopy(renderer, block_34, NULL, &block34);
	SDL_RenderCopy(renderer, block_35, NULL, &block35);
	SDL_RenderCopy(renderer, block_36, NULL, &block36);
	SDL_RenderCopy(renderer, block_37, NULL, &block37);
	SDL_RenderCopy(renderer, block_38, NULL, &block38);
	SDL_RenderCopy(renderer, block_39, NULL, &block39);
	SDL_RenderCopy(renderer, block_40, NULL, &block40);
	SDL_RenderCopy(renderer, block_41, NULL, &block41);
	SDL_RenderCopy(renderer, block_42, NULL, &block42);
	SDL_RenderCopy(renderer, block_43, NULL, &block43);
	SDL_RenderCopy(renderer, block_44, NULL, &block44);
	SDL_RenderCopy(renderer, block_45, NULL, &block45);
	SDL_RenderCopy(renderer, block_46, NULL, &block46);
	SDL_RenderCopy(renderer, block_47, NULL, &block47);
	SDL_RenderCopy(renderer, block_48, NULL, &block48);
	SDL_RenderCopy(renderer, block_49, NULL, &block49);
	SDL_RenderCopy(renderer, block_50, NULL, &block50);
	SDL_RenderCopy(renderer, block_51, NULL, &block51);
	SDL_RenderCopy(renderer, block_52, NULL, &block52);
	SDL_RenderCopy(renderer, block_53, NULL, &block53);
	SDL_RenderCopy(renderer, block_54, NULL, &block54);
	SDL_RenderCopy(renderer, block_55, NULL, &block55);
	SDL_RenderCopy(renderer, block_56, NULL, &block56);
	SDL_RenderCopy(renderer, block_57, NULL, &block57);
	SDL_RenderCopy(renderer, block_58, NULL, &block58);
	SDL_RenderCopy(renderer, block_59, NULL, &block59);
	SDL_RenderCopy(renderer, block_60, NULL, &block60);
	SDL_RenderCopy(renderer, block_61, NULL, &block61);
	SDL_RenderCopy(renderer, block_62, NULL, &block62);
	SDL_RenderCopy(renderer, block_63, NULL, &block63);
	SDL_RenderCopy(renderer, block_64, NULL, &block64);
	SDL_RenderCopy(renderer, block_65, NULL, &block65);
	SDL_RenderCopy(renderer, block_66, NULL, &block66);
	SDL_RenderCopy(renderer, block_67, NULL, &block67);
	SDL_RenderCopy(renderer, block_68, NULL, &block68);
	SDL_RenderCopy(renderer, block_69, NULL, &block69);
	SDL_RenderCopy(renderer, block_70, NULL, &block70);
	SDL_RenderCopy(renderer, block_71, NULL, &block71);
	SDL_RenderCopy(renderer, block_72, NULL, &block72);
	SDL_RenderCopy(renderer, block_73, NULL, &block73);
	SDL_RenderCopy(renderer, block_74, NULL, &block74);
	SDL_RenderCopy(renderer, block_75, NULL, &block75);
	SDL_RenderCopy(renderer, block_76, NULL, &block76);
	SDL_RenderCopy(renderer, block_77, NULL, &block77);
	SDL_RenderCopy(renderer, block_78, NULL, &block78);
	SDL_RenderCopy(renderer, block_79, NULL, &block79);
	SDL_RenderCopy(renderer, block_80, NULL, &block80);
	SDL_RenderCopy(renderer, block_81, NULL, &block81);
	SDL_RenderCopy(renderer, block_82, NULL, &block82);
	SDL_RenderCopy(renderer, block_83, NULL, &block83);
	SDL_RenderCopy(renderer, block_84, NULL, &block84);
	SDL_RenderCopy(renderer, block_85, NULL, &block85);
	SDL_RenderCopy(renderer, block_86, NULL, &block86);
	SDL_RenderCopy(renderer, block_87, NULL, &block87);
	SDL_RenderCopy(renderer, block_88, NULL, &block88);
	SDL_RenderCopy(renderer, block_89, NULL, &block89);
	SDL_RenderCopy(renderer, block_90, NULL, &block90);
	SDL_RenderCopy(renderer, block_91, NULL, &block91);
	SDL_RenderCopy(renderer, block_92, NULL, &block92);
	SDL_RenderCopy(renderer, block_93, NULL, &block93);
	SDL_RenderCopy(renderer, block_94, NULL, &block94);
	SDL_RenderCopy(renderer, block_95, NULL, &block95);
	SDL_RenderCopy(renderer, block_96, NULL, &block96);
	SDL_RenderCopy(renderer, block_97, NULL, &block97);
}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
	int flags = 0;
	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		//std::cout << "Subsystems Initialised..." << std::endl;

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		if (window)
		{
			//std::cout << "window created" << std::endl;
		}
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 50, 40, 233, 100);
			//std::cout << "renderer created" << std::endl;
		}
		isRunning = true;
	}
	else {
		isRunning = false;
	}

	drill = TextureManager::LoadTexture("drill.png", renderer);

	inputmanager = InputManager::Instance();
	blocks->block_generation();
	drilll.x = 0;
	drilll.y = 0;
	drilll.w = 30;
	drilll.h = 30;
	drilll1.x = 1199;
	drilll1.y = 798;
	drilll1.w = 30;
	drilll1.h = 30;
	time = 1260;
	drill1equip = 1;
	drill2equip = 1;
	lost = false;
	wins = false;
	player1wins = false;
	player2wins = false;
	howmanybroken = 0;
	Mix_OpenAudio(22050, MIX_DEFAULT_FORMAT, 2, 4096);
	background = Mix_LoadMUS("mining game theme.wav");
	hit = Mix_LoadWAV("Hit.wav");
	win = Mix_LoadWAV("winning.wav");
	lose = Mix_LoadWAV("Explosionlose.wav");
	Mix_PlayMusic(background, -1);
	blocktouched1 = false; blocktouched2 = false; blocktouched3 = false; blocktouched4 = false; blocktouched5 = false; blocktouched6 = false; blocktouched7 = false; blocktouched8 = false; blocktouched9 = false; blocktouched10 = false; blocktouched11 = false; blocktouched12 = false; blocktouched13 = false; blocktouched14 = false; blocktouched15 = false; blocktouched16 = false; blocktouched17 = false; blocktouched18 = false; blocktouched19 = false; blocktouched20 = false; blocktouched21 = false; blocktouched22 = false; blocktouched23 = false; blocktouched24 = false; blocktouched25 = false; blocktouched26 = false; blocktouched27 = false; blocktouched28 = false; blocktouched29 = false; blocktouched30 = false; blocktouched31 = false; blocktouched32 = false; blocktouched33 = false; blocktouched34 = false; blocktouched35 = false; blocktouched36 = false; blocktouched37 = false; blocktouched38 = false; blocktouched39 = false; blocktouched40 = false; blocktouched41 = false; blocktouched42 = false; blocktouched43 = false; blocktouched44 = false; blocktouched45 = false; blocktouched46 = false; blocktouched47 = false; blocktouched48 = false; blocktouched49 = false; blocktouched50 = false; blocktouched51 = false; blocktouched52 = false; blocktouched53 = false; blocktouched54 = false; blocktouched55 = false; blocktouched56 = false; blocktouched57 = false; blocktouched58 = false; blocktouched59 = false; blocktouched60 = false; blocktouched61 = false; blocktouched62 = false; blocktouched63 = false; blocktouched64 = false; blocktouched65 = false; blocktouched66 = false; blocktouched67 = false; blocktouched68 = false; blocktouched69 = false; blocktouched70 = false; blocktouched71 = false; blocktouched72 = false; blocktouched73 = false; blocktouched74 = false; blocktouched75 = false; blocktouched76 = false; blocktouched77 = false; blocktouched78 = false; blocktouched79 = false; blocktouched80 = false; blocktouched81 = false; blocktouched82 = false; blocktouched83 = false; blocktouched84 = false; blocktouched85 = false; blocktouched86 = false; blocktouched87 = false; blocktouched88 = false; blocktouched89 = false; blocktouched90 = false; blocktouched91 = false; blocktouched92 = false; blocktouched93 = false; blocktouched94 = false; blocktouched95 = false; blocktouched96 = false; blocktouched97 = false;
}

void Game::handleevents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;
	default:
		break;
	}
}

void Game::update()
{
	SDL_bool lostcause = SDL_HasIntersection(&drill1hitterbox, &drillhitterbox);
	SDL_bool player2wincause = SDL_HasIntersection(&drill1hitterbox, &drillhitbox);
	SDL_bool player1wincause = SDL_HasIntersection(&drillhitterbox, &drill1hitbox);
	inputmanager->Update();
	if (inputmanager->KeyDown(SDL_SCANCODE_A) && drill1equip == 1) {
		drilll.x = drilll.x - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("drillleft.png", renderer);
		drillhitbox = { drilll.x - 25, drilll.y, 5, drilll.h };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_D) && drill1equip == 1) {
		drilll.x = drilll.x + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("drillright.png", renderer);
		drillhitbox = { drilll.x + 25, drilll.y, 5, drilll.h };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_W) && drill1equip == 1) {
		drilll.y = drilll.y - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("drillup.png", renderer);
		drillhitbox = { drilll.x, drilll.y - 25, drilll.w, 5 };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_S) && drill1equip == 1) {
		drilll.y = drilll.y + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("drill.png", renderer);
		drillhitbox = { drilll.x, drilll.y + 25, drilll.w, 5 };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_A) && drill1equip == 2) {
		drilll.x = drilll.x - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("shovel left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_D) && drill1equip == 2) {
		drilll.x = drilll.x + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("shovel right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_W) && drill1equip == 2) {
		drilll.y = drilll.y - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("shovel up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_S) && drill1equip == 2) {
		drilll.y = drilll.y + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("shovel down.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_A) && drill1equip == 3) {
		drilll.x = drilll.x - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("coal pick left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_D) && drill1equip == 3) {
		drilll.x = drilll.x + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("coal pick right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_W) && drill1equip == 3) {
		drilll.y = drilll.y - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("coal pick up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_S) && drill1equip == 3) {
		drilll.y = drilll.y + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("coal pick down.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_A) && drill1equip == 4) {
		drilll.x = drilll.x - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("gold pick left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_D) && drill1equip == 4) {
		drilll.x = drilll.x + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("gold pick right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_W) && drill1equip == 4) {
		drilll.y = drilll.y - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("gold pick up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_S) && drill1equip == 4) {
		drilll.y = drilll.y + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("gold pick down.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_A) && drill1equip == 5) {
		drilll.x = drilll.x - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("iron pick left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_D) && drill1equip == 5) {
		drilll.x = drilll.x + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("iron pick right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_W) && drill1equip == 5) {
		drilll.y = drilll.y - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("iron pick up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_S) && drill1equip == 5) {
		drilll.y = drilll.y + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("iron pick down.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_A) && drill1equip == 6) {
		drilll.x = drilll.x - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("diamond pick left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_D) && drill1equip == 6) {
		drilll.x = drilll.x + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("diamond pick right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_W) && drill1equip == 6) {
		drilll.y = drilll.y - (unsigned int)5.5;
		drill = TextureManager::LoadTexture("diamond pick up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_S) && drill1equip == 6) {
		drilll.y = drilll.y + (unsigned int)5.5;
		drill = TextureManager::LoadTexture("diamond pick down.png", renderer);
	}
	if (inputmanager->KeyDown(SDL_SCANCODE_LEFT) && drill2equip == 1) {
		drilll1.x = drilll1.x - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("drillleft.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_RIGHT) && drill2equip == 1) {
		drilll1.x = drilll1.x + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("drillright.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_UP) && drill2equip == 1) {
		drilll1.y = drilll1.y - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("drillup.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_DOWN) && drill2equip == 1) {
		drilll1.y = drilll1.y + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("drill.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_LEFT) && drill2equip == 2) {
		drilll1.x = drilll1.x - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("shovel left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_RIGHT) && drill2equip == 2) {
		drilll1.x = drilll1.x + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("shovel right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_UP) && drill2equip == 2) {
		drilll1.y = drilll1.y - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("shovel up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_DOWN) && drill2equip == 2) {
		drilll1.y = drilll1.y + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("shovel down.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_LEFT) && drill2equip == 3) {
		drilll1.x = drilll1.x - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("coal pick left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_RIGHT) && drill2equip == 3) {
		drilll1.x = drilll1.x + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("coal pick right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_UP) && drill2equip == 3) {
		drilll1.y = drilll1.y - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("coal pick up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_DOWN) && drill2equip == 3) {
		drilll1.y = drilll1.y + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("coal pick down.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_LEFT) && drill2equip == 4) {
		drilll1.x = drilll1.x - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("gold pick left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_RIGHT) && drill2equip == 4) {
		drilll1.x = drilll1.x + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("gold pick right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_UP) && drill2equip == 4) {
		drilll1.y = drilll1.y - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("gold pick up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_DOWN) && drill2equip == 4) {
		drilll1.y = drilll1.y + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("gold pick down.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_LEFT) && drill2equip == 5) {
		drilll1.x = drilll1.x - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("iron pick left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_RIGHT) && drill2equip == 5) {
		drilll1.x = drilll1.x + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("iron pick right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_UP) && drill2equip == 5) {
		drilll1.y = drilll1.y - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("iron pick up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_DOWN) && drill2equip == 5) {
		drilll1.y = drilll1.y + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("iron pick down.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_LEFT) && drill2equip == 6) {
		drilll1.x = drilll1.x - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("ruby pick left.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_RIGHT) && drill2equip == 6) {
		drilll1.x = drilll1.x + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("ruby pick right.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_UP) && drill2equip == 6) {
		drilll1.y = drilll1.y - (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("ruby pick up.png", renderer);
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_DOWN) && drill2equip == 6) {
		drilll1.y = drilll1.y + (unsigned int)5.5;
		drill1 = TextureManager::LoadTexture("ruby pick down.png", renderer);
	}

	if (inputmanager->KeyDown(SDL_SCANCODE_A))
	{
		drillhitbox = { drilll.x + 25, drilll.y + 8, 5, 16 };
		drillhitterbox = { drilll.x + 5, drilll.y + 13, 5, 5 };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_D))
	{
		drillhitbox = { drilll.x, drilll.y + 6, 5, 16 };
		drillhitterbox = { drilll.x + 21, drilll.y + 12, 5, 5 };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_S))
	{
		drillhitbox = { drilll.x + 8, drilll.y, 16, 5 };
		drillhitterbox = { drilll.x + 12, drilll.y + 20, 5, 5 };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_W))
	{
		drillhitbox = { drilll.x + 7, drilll.y + 20, 16, 5 };
		drillhitterbox = { drilll.x + 12, drilll.y + 2, 5, 5 };
	}
	if (inputmanager->KeyDown(SDL_SCANCODE_LEFT))
	{
		drill1hitbox = { drilll1.x + 25, drilll1.y + 8, 5, 16 };
		drill1hitterbox = { drilll1.x + 5, drilll1.y + 13, 5, 5 };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_RIGHT))
	{
		drill1hitbox = { drilll1.x, drilll1.y + 6, 5, 16 };
		drill1hitterbox = { drilll1.x + 21, drilll1.y + 12, 5, 5 };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_DOWN))
	{
		drill1hitbox = { drilll1.x + 8, drilll1.y, 16, 5 };
		drill1hitterbox = { drilll1.x + 12, drilll1.y + 20, 5, 5 };
	}
	else if (inputmanager->KeyDown(SDL_SCANCODE_UP))
	{
		drill1hitbox = { drilll1.x + 7, drilll1.y + 20, 16, 5 };
		drill1hitterbox = { drilll1.x + 12, drilll1.y + 2, 5, 5 };
	}

	if (inputmanager->KeyDown(SDL_SCANCODE_LSHIFT) && timer1 < 0) {
		drill1equip++;
		timer1 = 1;
	}
	if (inputmanager->KeyDown(SDL_SCANCODE_RSHIFT) && timer2 < 0) {
		drill2equip++;
		timer2 = 1;
	}

	if (lostcause or time <= 0)
		lost = true;
	else if (player1wincause)
		player1wins = true;
	else if (player2wincause)
		player2wins = true;


	if (player1wins){
		Mix_PlayChannel(-1, hit, 1);
		isRunning = false;
		std::cout << "player 1 wins" << std::endl;
    } 
	else if (player2wins)
	{
		Mix_PlayChannel(-1, hit, 1);
		isRunning = false;
		std::cout << "player 2 wins" << std::endl;
	}
	else if (lost == true)
	{
		Mix_PlayChannel(-1, lose, 1);
		isRunning = false;
		std::cout << "nobody wins" << std::endl;
	}
	else if (wins == true)
	{
		Mix_PlayChannel(-1, win, 1);
		isRunning = false;
		std::cout << "both players win" << std::endl;
	}

	if (drill1equip > 6)
		drill1equip = 1;
	if (drill2equip > 6)
		drill2equip = 1;

	if (drilll.x <= 0)
		drilll.x = 0;
	if (drilll.y <= 0)
		drilll.y = 0;
	if (drilll.x >= 1200)
		drilll.x = 1200;
	if (drilll.y >= 800)
		drilll.y = 800;

	if (drilll1.x <= 0)
		drilll1.x = 0;
	if (drilll1.y <= 0)
		drilll1.y = 0;
	if (drilll1.x >= 1200)
		drilll1.x = 1200;
	if (drilll1.y >= 800)
		drilll1.y = 800;

	time -= 0.1f;
	timer1 -= 0.02f;
	timer2 -= 0.02f;
	bool drill;
	bool shovel;
	bool goldpick;
	bool coalpick;
	bool ironpick;
	bool drill2;
	bool shovel2;
	bool goldpick2;
	bool coalpick2;
	bool ironpick2;
	bool diamondpick;
	bool rubypick;
	if (drill1equip == 1) {
		drill = true;
		shovel = false;
		goldpick = false;
		coalpick = false;
		ironpick = false;
		diamondpick = false;
	}
	else if (drill1equip == 2) {
		shovel = true;
		drill = false;
		goldpick = false;
		coalpick = false;
		ironpick = false;
		diamondpick = false;
	}
	else if (drill1equip == 4) {
		goldpick = true;
		drill = false;
		shovel = false;
		coalpick = false;
		ironpick = false;
		diamondpick = false;
	}
	else if (drill1equip == 3) {
		coalpick = true;
		goldpick = false;
		drill = false;
		shovel = false;
		ironpick = false;
		diamondpick = false;
	}
	else if (drill1equip == 5) {
		ironpick = true;
		goldpick = false;
		drill = false;
		shovel = false;
		coalpick = false;
		diamondpick = false;

	}
	else if (drill1equip == 6) {
		diamondpick = true;
		goldpick = false;
		drill = false;
		shovel = false;
		coalpick = false;
		goldpick = false;
		ironpick = false;
	}
	if (drill2equip == 1) {
		drill2 = true;
		shovel2 = false;
		goldpick2 = false;
		coalpick2 = false;
		ironpick2 = false;
		rubypick = false;
	}
	else if (drill2equip == 2) {
		shovel2 = true;
		drill2 = false;
		goldpick2 = false;
		coalpick2 = false;
		ironpick2 = false;
		rubypick = false;
	}
	else if (drill2equip == 4) {
		goldpick2 = true;
		drill2 = false;
		shovel2 = false;
		coalpick2 = false;
		ironpick2 = false;
		rubypick = false;
	}
	else if (drill2equip == 3) {
		coalpick2 = true;
		goldpick2 = false;
		drill2 = false;
		shovel2 = false;
		ironpick2 = false;
		rubypick = false;
	}
	else if (drill2equip == 5) {
		ironpick2 = true;
		goldpick2 = false;
		drill2 = false;
		shovel2 = false;
		coalpick2 = false;
		rubypick = false;

	}
	else if (drill2equip == 6) {
		rubypick = true;
		goldpick2 = false;
		drill2 = false;
		shovel2 = false;
		coalpick2 = false;
		goldpick2 = false;
		ironpick2 = false;
	}
	SDL_bool touched1 = SDL_HasIntersection(&blocks->block1, &drillhitterbox);
    SDL_bool touched2nd1 = SDL_HasIntersection(&blocks->block1, &drill1hitterbox);
	SDL_bool touched2 = SDL_HasIntersection(&drillhitterbox, &blocks->block2);
	SDL_bool touched2nd2 = SDL_HasIntersection(&drill1hitterbox, &blocks->block2);
	SDL_bool touched3 = SDL_HasIntersection(&drillhitterbox, &blocks->block3);
	SDL_bool touched2nd3 = SDL_HasIntersection(&drill1hitterbox, &blocks->block3);
	SDL_bool touched4 = SDL_HasIntersection(&drillhitterbox, &blocks->block4);
	SDL_bool touched2nd4 = SDL_HasIntersection(&drill1hitterbox, &blocks->block4);
	SDL_bool touched5 = SDL_HasIntersection(&drillhitterbox, &blocks->block5);
	SDL_bool touched2nd5 = SDL_HasIntersection(&drill1hitterbox, &blocks->block5);
	SDL_bool touched6 = SDL_HasIntersection(&drillhitterbox, &blocks->block6);
	SDL_bool touched2nd6 = SDL_HasIntersection(&drill1hitterbox, &blocks->block6);
	SDL_bool touched7 = SDL_HasIntersection(&drillhitterbox, &blocks->block7);
	SDL_bool touched2nd7 = SDL_HasIntersection(&drill1hitterbox, &blocks->block7);
	SDL_bool touched8 = SDL_HasIntersection(&drillhitterbox, &blocks->block8);
	SDL_bool touched2nd8 = SDL_HasIntersection(&drill1hitterbox, &blocks->block8);
	SDL_bool touched9 = SDL_HasIntersection(&drillhitterbox, &blocks->block9);
	SDL_bool touched2nd9 = SDL_HasIntersection(&drill1hitterbox, &blocks->block9);
	SDL_bool touched10 = SDL_HasIntersection(&drillhitterbox, &blocks->block10);
	SDL_bool touched2nd10 = SDL_HasIntersection(&drill1hitterbox, &blocks->block10);
	SDL_bool touched11 = SDL_HasIntersection(&drillhitterbox, &blocks->block11);
	SDL_bool touched2nd11 = SDL_HasIntersection(&drill1hitterbox, &blocks->block11);
	SDL_bool touched12 = SDL_HasIntersection(&drillhitterbox, &blocks->block12);
	SDL_bool touched2nd12 = SDL_HasIntersection(&drill1hitterbox, &blocks->block12);
	SDL_bool touched13 = SDL_HasIntersection(&drillhitterbox, &blocks->block13);
	SDL_bool touched2nd13 = SDL_HasIntersection(&drill1hitterbox, &blocks->block13);
	SDL_bool touched14 = SDL_HasIntersection(&drillhitterbox, &blocks->block14);
	SDL_bool touched2nd14 = SDL_HasIntersection(&drill1hitterbox, &blocks->block14);
	SDL_bool touched15 = SDL_HasIntersection(&drillhitterbox, &blocks->block15);
	SDL_bool touched2nd15 = SDL_HasIntersection(&drill1hitterbox, &blocks->block15);
	SDL_bool touched16 = SDL_HasIntersection(&drillhitterbox, &blocks->block16);
	SDL_bool touched2nd16 = SDL_HasIntersection(&drill1hitterbox, &blocks->block16);
	SDL_bool touched17 = SDL_HasIntersection(&drillhitterbox, &blocks->block17);
	SDL_bool touched2nd17 = SDL_HasIntersection(&drill1hitterbox, &blocks->block17);
	SDL_bool touched18 = SDL_HasIntersection(&drillhitterbox, &blocks->block18);
	SDL_bool touched2nd18 = SDL_HasIntersection(&drill1hitterbox, &blocks->block18);
	SDL_bool touched19 = SDL_HasIntersection(&drillhitterbox, &blocks->block19);
	SDL_bool touched2nd19 = SDL_HasIntersection(&drill1hitterbox, &blocks->block19);
	SDL_bool touched20 = SDL_HasIntersection(&drillhitterbox, &blocks->block20);
	SDL_bool touched2nd20 = SDL_HasIntersection(&drill1hitterbox, &blocks->block20);
	SDL_bool touched21 = SDL_HasIntersection(&drillhitterbox, &blocks->block21);
	SDL_bool touched2nd21 = SDL_HasIntersection(&drill1hitterbox, &blocks->block21);
	SDL_bool touched22 = SDL_HasIntersection(&drillhitterbox, &blocks->block22);
	SDL_bool touched2nd22 = SDL_HasIntersection(&drill1hitterbox, &blocks->block22);
	SDL_bool touched23 = SDL_HasIntersection(&drillhitterbox, &blocks->block23);
	SDL_bool touched2nd23 = SDL_HasIntersection(&drill1hitterbox, &blocks->block23);
	SDL_bool touched24 = SDL_HasIntersection(&drillhitterbox, &blocks->block24);
	SDL_bool touched2nd24 = SDL_HasIntersection(&drill1hitterbox, &blocks->block24);
	SDL_bool touched25 = SDL_HasIntersection(&drillhitterbox, &blocks->block25);
	SDL_bool touched2nd25 = SDL_HasIntersection(&drill1hitterbox, &blocks->block25);
	SDL_bool touched26 = SDL_HasIntersection(&drillhitterbox, &blocks->block26);
	SDL_bool touched2nd26 = SDL_HasIntersection(&drill1hitterbox, &blocks->block26);
	SDL_bool touched27 = SDL_HasIntersection(&drillhitterbox, &blocks->block27);
	SDL_bool touched2nd27 = SDL_HasIntersection(&drill1hitterbox, &blocks->block27);
	SDL_bool touched28 = SDL_HasIntersection(&drillhitterbox, &blocks->block28);
	SDL_bool touched2nd28 = SDL_HasIntersection(&drill1hitterbox, &blocks->block28);
	SDL_bool touched29 = SDL_HasIntersection(&drillhitterbox, &blocks->block29);
	SDL_bool touched2nd29 = SDL_HasIntersection(&drill1hitterbox, &blocks->block29);
	SDL_bool touched30 = SDL_HasIntersection(&drillhitterbox, &blocks->block30);
	SDL_bool touched2nd30 = SDL_HasIntersection(&drill1hitterbox, &blocks->block30);
	SDL_bool touched31 = SDL_HasIntersection(&drillhitterbox, &blocks->block31);
	SDL_bool touched2nd31 = SDL_HasIntersection(&drill1hitterbox, &blocks->block31);
	SDL_bool touched32 = SDL_HasIntersection(&drillhitterbox, &blocks->block32);
	SDL_bool touched2nd32 = SDL_HasIntersection(&drill1hitterbox, &blocks->block32);
	SDL_bool touched33 = SDL_HasIntersection(&drillhitterbox, &blocks->block33);
	SDL_bool touched2nd33 = SDL_HasIntersection(&drill1hitterbox, &blocks->block33);
	SDL_bool touched34 = SDL_HasIntersection(&drillhitterbox, &blocks->block34);
	SDL_bool touched2nd34 = SDL_HasIntersection(&drill1hitterbox, &blocks->block34);
	SDL_bool touched35 = SDL_HasIntersection(&drillhitterbox, &blocks->block35);
	SDL_bool touched2nd35 = SDL_HasIntersection(&drill1hitterbox, &blocks->block35);
	SDL_bool touched36 = SDL_HasIntersection(&drillhitterbox, &blocks->block36);
	SDL_bool touched2nd36 = SDL_HasIntersection(&drill1hitterbox, &blocks->block36);
	SDL_bool touched37 = SDL_HasIntersection(&drillhitterbox, &blocks->block37);
	SDL_bool touched2nd37 = SDL_HasIntersection(&drill1hitterbox, &blocks->block37);
	SDL_bool touched38 = SDL_HasIntersection(&drillhitterbox, &blocks->block38);
	SDL_bool touched2nd38 = SDL_HasIntersection(&drill1hitterbox, &blocks->block38);
	SDL_bool touched39 = SDL_HasIntersection(&drillhitterbox, &blocks->block39);
	SDL_bool touched2nd39 = SDL_HasIntersection(&drill1hitterbox, &blocks->block39);
	SDL_bool touched40 = SDL_HasIntersection(&drillhitterbox, &blocks->block40);
	SDL_bool touched2nd40 = SDL_HasIntersection(&drill1hitterbox, &blocks->block40);
	SDL_bool touched41 = SDL_HasIntersection(&drillhitterbox, &blocks->block41);
	SDL_bool touched2nd41 = SDL_HasIntersection(&drill1hitterbox, &blocks->block41);
	SDL_bool touched42 = SDL_HasIntersection(&drillhitterbox, &blocks->block42);
	SDL_bool touched2nd42 = SDL_HasIntersection(&drill1hitterbox, &blocks->block42);
	SDL_bool touched43 = SDL_HasIntersection(&drillhitterbox, &blocks->block43);
	SDL_bool touched2nd43 = SDL_HasIntersection(&drill1hitterbox, &blocks->block43);
	SDL_bool touched44 = SDL_HasIntersection(&drillhitterbox, &blocks->block44);
	SDL_bool touched2nd44 = SDL_HasIntersection(&drill1hitterbox, &blocks->block44);
	SDL_bool touched45 = SDL_HasIntersection(&drillhitterbox, &blocks->block45);
	SDL_bool touched2nd45 = SDL_HasIntersection(&drill1hitterbox, &blocks->block45);
	SDL_bool touched46 = SDL_HasIntersection(&drillhitterbox, &blocks->block46);
	SDL_bool touched2nd46 = SDL_HasIntersection(&drill1hitterbox, &blocks->block46);
	SDL_bool touched47 = SDL_HasIntersection(&drillhitterbox, &blocks->block47);
	SDL_bool touched2nd47 = SDL_HasIntersection(&drill1hitterbox, &blocks->block47);
	SDL_bool touched48 = SDL_HasIntersection(&drillhitterbox, &blocks->block48);
	SDL_bool touched2nd48 = SDL_HasIntersection(&drill1hitterbox, &blocks->block48);
	SDL_bool touched49 = SDL_HasIntersection(&drillhitterbox, &blocks->block49);
	SDL_bool touched2nd49 = SDL_HasIntersection(&drill1hitterbox, &blocks->block49);
	SDL_bool touched50 = SDL_HasIntersection(&drillhitterbox, &blocks->block50);
	SDL_bool touched2nd50 = SDL_HasIntersection(&drill1hitterbox, &blocks->block50);
	SDL_bool touched51 = SDL_HasIntersection(&drillhitterbox, &blocks->block51);
	SDL_bool touched2nd51 = SDL_HasIntersection(&drill1hitterbox, &blocks->block51);
	SDL_bool touched52 = SDL_HasIntersection(&drillhitterbox, &blocks->block52);
	SDL_bool touched2nd52 = SDL_HasIntersection(&drill1hitterbox, &blocks->block52);
	SDL_bool touched53 = SDL_HasIntersection(&drillhitterbox, &blocks->block53);
	SDL_bool touched2nd53 = SDL_HasIntersection(&drill1hitterbox, &blocks->block53);
	SDL_bool touched54 = SDL_HasIntersection(&drillhitterbox, &blocks->block54);
	SDL_bool touched2nd54 = SDL_HasIntersection(&drill1hitterbox, &blocks->block54);
	SDL_bool touched55 = SDL_HasIntersection(&drillhitterbox, &blocks->block55);
	SDL_bool touched2nd55 = SDL_HasIntersection(&drill1hitterbox, &blocks->block55);
	SDL_bool touched56 = SDL_HasIntersection(&drillhitterbox, &blocks->block56);
	SDL_bool touched2nd56 = SDL_HasIntersection(&drill1hitterbox, &blocks->block56);
	SDL_bool touched57 = SDL_HasIntersection(&drillhitterbox, &blocks->block57);
	SDL_bool touched2nd57 = SDL_HasIntersection(&drill1hitterbox, &blocks->block57);
	SDL_bool touched58 = SDL_HasIntersection(&drillhitterbox, &blocks->block58);
	SDL_bool touched2nd58 = SDL_HasIntersection(&drill1hitterbox, &blocks->block58);
	SDL_bool touched59 = SDL_HasIntersection(&drillhitterbox, &blocks->block59);
	SDL_bool touched2nd59 = SDL_HasIntersection(&drill1hitterbox, &blocks->block59);
	SDL_bool touched60 = SDL_HasIntersection(&drillhitterbox, &blocks->block60);
	SDL_bool touched2nd60 = SDL_HasIntersection(&drill1hitterbox, &blocks->block60);
	SDL_bool touched61 = SDL_HasIntersection(&drillhitterbox, &blocks->block61);
	SDL_bool touched2nd61 = SDL_HasIntersection(&drill1hitterbox, &blocks->block61);
	SDL_bool touched62 = SDL_HasIntersection(&drillhitterbox, &blocks->block62);
	SDL_bool touched2nd62 = SDL_HasIntersection(&drill1hitterbox, &blocks->block62);
	SDL_bool touched63 = SDL_HasIntersection(&drillhitterbox, &blocks->block63);
	SDL_bool touched2nd63 = SDL_HasIntersection(&drill1hitterbox, &blocks->block63);
	SDL_bool touched64 = SDL_HasIntersection(&drillhitterbox, &blocks->block64);
	SDL_bool touched2nd64 = SDL_HasIntersection(&drill1hitterbox, &blocks->block64);
	SDL_bool touched65 = SDL_HasIntersection(&drillhitterbox, &blocks->block65);
	SDL_bool touched2nd65 = SDL_HasIntersection(&drill1hitterbox, &blocks->block65);
	SDL_bool touched66 = SDL_HasIntersection(&drillhitterbox, &blocks->block66);
	SDL_bool touched2nd66 = SDL_HasIntersection(&drill1hitterbox, &blocks->block66);
	SDL_bool touched67 = SDL_HasIntersection(&drillhitterbox, &blocks->block67);
	SDL_bool touched2nd67 = SDL_HasIntersection(&drill1hitterbox, &blocks->block67);
	SDL_bool touched68 = SDL_HasIntersection(&drillhitterbox, &blocks->block68);
	SDL_bool touched2nd68 = SDL_HasIntersection(&drill1hitterbox, &blocks->block68);
	SDL_bool touched69 = SDL_HasIntersection(&drillhitterbox, &blocks->block69);
	SDL_bool touched2nd69 = SDL_HasIntersection(&drill1hitterbox, &blocks->block69);
	SDL_bool touched70 = SDL_HasIntersection(&drillhitterbox, &blocks->block70);
	SDL_bool touched2nd70 = SDL_HasIntersection(&drill1hitterbox, &blocks->block70);
	SDL_bool touched71 = SDL_HasIntersection(&drillhitterbox, &blocks->block71);
	SDL_bool touched2nd71 = SDL_HasIntersection(&drill1hitterbox, &blocks->block71);
	SDL_bool touched72 = SDL_HasIntersection(&drillhitterbox, &blocks->block72);
	SDL_bool touched2nd72 = SDL_HasIntersection(&drill1hitterbox, &blocks->block72);
	SDL_bool touched73 = SDL_HasIntersection(&drillhitterbox, &blocks->block73);
	SDL_bool touched2nd73 = SDL_HasIntersection(&drill1hitterbox, &blocks->block73);
	SDL_bool touched74 = SDL_HasIntersection(&drillhitterbox, &blocks->block74);
	SDL_bool touched2nd74 = SDL_HasIntersection(&drill1hitterbox, &blocks->block74);
	SDL_bool touched75 = SDL_HasIntersection(&drillhitterbox, &blocks->block75);
	SDL_bool touched2nd75 = SDL_HasIntersection(&drill1hitterbox, &blocks->block75);
	SDL_bool touched76 = SDL_HasIntersection(&drillhitterbox, &blocks->block76);
	SDL_bool touched2nd76 = SDL_HasIntersection(&drill1hitterbox, &blocks->block76);
	SDL_bool touched77 = SDL_HasIntersection(&drillhitterbox, &blocks->block77);
	SDL_bool touched2nd77 = SDL_HasIntersection(&drill1hitterbox, &blocks->block77);
	SDL_bool touched78 = SDL_HasIntersection(&drillhitterbox, &blocks->block78);
	SDL_bool touched2nd78 = SDL_HasIntersection(&drill1hitterbox, &blocks->block78);
	SDL_bool touched79 = SDL_HasIntersection(&drillhitterbox, &blocks->block79);
	SDL_bool touched2nd79 = SDL_HasIntersection(&drill1hitterbox, &blocks->block79);
	SDL_bool touched80 = SDL_HasIntersection(&drillhitterbox, &blocks->block80);
	SDL_bool touched2nd80 = SDL_HasIntersection(&drill1hitterbox, &blocks->block80);
	SDL_bool touched81 = SDL_HasIntersection(&drillhitterbox, &blocks->block81);
	SDL_bool touched2nd81 = SDL_HasIntersection(&drill1hitterbox, &blocks->block81);
	SDL_bool touched82 = SDL_HasIntersection(&drillhitterbox, &blocks->block82);
	SDL_bool touched2nd82 = SDL_HasIntersection(&drill1hitterbox, &blocks->block82);
	SDL_bool touched83 = SDL_HasIntersection(&drillhitterbox, &blocks->block83);
	SDL_bool touched2nd83 = SDL_HasIntersection(&drill1hitterbox, &blocks->block83);
	SDL_bool touched84 = SDL_HasIntersection(&drillhitterbox, &blocks->block84);
	SDL_bool touched2nd84 = SDL_HasIntersection(&drill1hitterbox, &blocks->block84);
	SDL_bool touched85 = SDL_HasIntersection(&drillhitterbox, &blocks->block85);
	SDL_bool touched2nd85 = SDL_HasIntersection(&drill1hitterbox, &blocks->block85);
	SDL_bool touched86 = SDL_HasIntersection(&drillhitterbox, &blocks->block86);
	SDL_bool touched2nd86 = SDL_HasIntersection(&drill1hitterbox, &blocks->block86);
	SDL_bool touched87 = SDL_HasIntersection(&drillhitterbox, &blocks->block87);
	SDL_bool touched2nd87 = SDL_HasIntersection(&drill1hitterbox, &blocks->block87);
	SDL_bool touched88 = SDL_HasIntersection(&drillhitterbox, &blocks->block88);
	SDL_bool touched2nd88 = SDL_HasIntersection(&drill1hitterbox, &blocks->block88);
	SDL_bool touched89 = SDL_HasIntersection(&drillhitterbox, &blocks->block89);
	SDL_bool touched2nd89 = SDL_HasIntersection(&drill1hitterbox, &blocks->block89);
	SDL_bool touched90 = SDL_HasIntersection(&drillhitterbox, &blocks->block90);
	SDL_bool touched2nd90 = SDL_HasIntersection(&drill1hitterbox, &blocks->block90);
	SDL_bool touched91 = SDL_HasIntersection(&drillhitterbox, &blocks->block91);
	SDL_bool touched2nd91 = SDL_HasIntersection(&drill1hitterbox, &blocks->block91);
	SDL_bool touched92 = SDL_HasIntersection(&drillhitterbox, &blocks->block92);
	SDL_bool touched2nd92 = SDL_HasIntersection(&drill1hitterbox, &blocks->block92);
	SDL_bool touched93 = SDL_HasIntersection(&drillhitterbox, &blocks->block93);
	SDL_bool touched2nd93 = SDL_HasIntersection(&drill1hitterbox, &blocks->block93);
	SDL_bool touched94 = SDL_HasIntersection(&drillhitterbox, &blocks->block94);
	SDL_bool touched2nd94 = SDL_HasIntersection(&drill1hitterbox, &blocks->block94);
	SDL_bool touched95 = SDL_HasIntersection(&drillhitterbox, &blocks->block95);
	SDL_bool touched2nd95 = SDL_HasIntersection(&drill1hitterbox, &blocks->block95);
	SDL_bool touched96 = SDL_HasIntersection(&drillhitterbox, &blocks->block96);
	SDL_bool touched2nd96 = SDL_HasIntersection(&drill1hitterbox, &blocks->block96);
	SDL_bool touched97 = SDL_HasIntersection(&drillhitterbox, &blocks->block97);
	SDL_bool touched2nd97 = SDL_HasIntersection(&drill1hitterbox, &blocks->block97);

	if (blocks->blocknum1 == 0 && shovel == true && touched1 && blocktouched1 == false || blocks->blocknum1 == 0 && shovel2 == true && touched2nd1 && blocktouched1 == false) {
		SDL_DestroyTexture(blocks->block_1);
		howmanybroken += 1;
		blocks->block_1 = nullptr;
		blocktouched1 = true;
	}
	if (blocks->blocknum2 == 0 && shovel == true && touched2 && blocktouched2 == false || blocks->blocknum2 == 0 && shovel2 == true && touched2nd2 && blocktouched2 == false) {
		SDL_DestroyTexture(blocks->block_2);
		howmanybroken += 1;
		blocks->block_2 = nullptr;
		blocktouched2 = true;
	}
	else if (blocks->blocknum2 == 1 && drill == true && touched2 && blocktouched2 == false || blocks->blocknum2 == 1 && drill2 == true && touched2nd2 && blocktouched2 == false) {
		SDL_DestroyTexture(blocks->block_2);
		howmanybroken += 1;
		blocks->block_2 = nullptr;
		blocktouched2 = true;
	}
	else if (blocks->blocknum2 == 2 && diamondpick == true && touched2 && blocktouched2 == false) {
		SDL_DestroyTexture(blocks->block_2);
		howmanybroken += 1;
		blocks->block_2 = nullptr;
		blocktouched2 = true;
	}
	else if (blocks->blocknum2 == 3 && goldpick == true && touched2 && blocktouched2 == false || blocks->blocknum2 == 3 && goldpick2 == true && touched2nd2 && blocktouched2 == false || blocks->blocknum2 == 7 && goldpick == true && touched2 && blocktouched2 == false || blocks->blocknum2 == 7 && goldpick2 == true && touched2nd2 && blocktouched2 == false || blocks->blocknum2 == 10 && goldpick == true && touched2 && blocktouched2 == false || blocks->blocknum2 == 10 && goldpick2 == true && touched2nd2 && blocktouched2 == false) {
		SDL_DestroyTexture(blocks->block_2);
		howmanybroken += 1;
		blocks->block_2 = nullptr;
		blocktouched2 = true;
	}
	else if (blocks->blocknum2 == 4 && ironpick == true && touched2 && blocktouched2 == false || blocks->blocknum2 == 4 && ironpick2 == true && touched2nd2 && blocktouched2 == false || blocks->blocknum2 == 8 && ironpick == true && touched2 && blocktouched2 == false || blocks->blocknum2 == 8 && ironpick2 == true && touched2nd2 && blocktouched2 == false) {
		SDL_DestroyTexture(blocks->block_2);
		howmanybroken += 1;
		blocks->block_2 = nullptr;
		blocktouched2 = true;
	}
	else if (blocks->blocknum2 == 5 && coalpick == true && touched2 && blocktouched2 == false || blocks->blocknum2 == 5 && coalpick2 == true && touched2nd2 && blocktouched2 == false || blocks->blocknum2 == 9 && coalpick == true && touched2 && blocktouched2 == false || blocks->blocknum2 == 9 && coalpick2 == true && touched2nd2 && blocktouched2 == false) {
		SDL_DestroyTexture(blocks->block_2);
		howmanybroken += 1;
		blocks->block_2 = nullptr;
		blocktouched2 = true;
	}
	else if (blocks->blocknum2 == 6 && rubypick == true && touched2nd2 && blocktouched2 == false) {
		SDL_DestroyTexture(blocks->block_2);
		howmanybroken += 1;
		blocks->block_2 = nullptr;
		blocktouched2 = true;
	}
	if (blocks->blocknum3 == 0 && shovel == true && touched3 && blocktouched3 == false || blocks->blocknum3 == 0 && shovel2 == true && touched2nd3 && blocktouched3 == false) {
		SDL_DestroyTexture(blocks->block_3);
		howmanybroken += 1;
		blocks->block_3 = nullptr;
		blocktouched3 = true;
	}
	else if (blocks->blocknum3 == 1 && drill == true && touched3 && blocktouched3 == false || blocks->blocknum3 == 1 && drill2 == true && touched2nd3 && blocktouched3 == false) {
		SDL_DestroyTexture(blocks->block_3);
		howmanybroken += 1;
		blocks->block_3 = nullptr;
		blocktouched3 = true;
	}
	else if (blocks->blocknum3 == 2 && diamondpick == true && touched3 && blocktouched3 == false) {
		SDL_DestroyTexture(blocks->block_3);
		howmanybroken += 1;
		blocks->block_3 = nullptr;
		blocktouched3 = true;
	}
	else if (blocks->blocknum3 == 3 && goldpick == true && touched3 && blocktouched3 == false || blocks->blocknum3 == 3 && goldpick2 == true && touched2nd3 && blocktouched3 == false || blocks->blocknum3 == 7 && goldpick == true && touched3 && blocktouched3 == false || blocks->blocknum3 == 7 && goldpick2 == true && touched2nd3 && blocktouched3 == false || blocks->blocknum3 == 10 && goldpick == true && touched3 && blocktouched3 == false || blocks->blocknum3 == 10 && goldpick2 == true && touched2nd3 && blocktouched3 == false) {
		SDL_DestroyTexture(blocks->block_3);
		howmanybroken += 1;
		blocks->block_3 = nullptr;
		blocktouched3 = true;
	}
	else if (blocks->blocknum3 == 4 && ironpick == true && touched3 && blocktouched3 == false || blocks->blocknum3 == 4 && ironpick2 == true && touched2nd3 && blocktouched3 == false || blocks->blocknum3 == 8 && ironpick == true && touched3 && blocktouched3 == false || blocks->blocknum3 == 8 && ironpick2 == true && touched2nd3 && blocktouched3 == false) {
		SDL_DestroyTexture(blocks->block_3);
		howmanybroken += 1;
		blocks->block_3 = nullptr;
		blocktouched3 = true;
	}
	else if (blocks->blocknum3 == 5 && coalpick == true && touched3 && blocktouched3 == false || blocks->blocknum3 == 5 && coalpick2 == true && touched2nd3 && blocktouched3 == false || blocks->blocknum3 == 9 && coalpick == true && touched3 && blocktouched3 == false || blocks->blocknum3 == 9 && coalpick2 == true && touched2nd3 && blocktouched3 == false) {
		SDL_DestroyTexture(blocks->block_3);
		howmanybroken += 1;
		blocks->block_3 = nullptr;
		blocktouched3 = true;
	}
	else if (blocks->blocknum3 == 6 && rubypick == true && touched2nd3 && blocktouched3 == false) {
		SDL_DestroyTexture(blocks->block_3);
		howmanybroken += 1;
		blocks->block_3 = nullptr;
		blocktouched3 = true;
	}
	if (blocks->blocknum4 == 0 && shovel == true && touched4 && blocktouched4 == false || blocks->blocknum4 == 0 && shovel2 == true && touched2nd4 && blocktouched4 == false) {
		SDL_DestroyTexture(blocks->block_4);
		howmanybroken += 1;
		blocks->block_4 = nullptr;
		blocktouched4 = true;
	}
	else if (blocks->blocknum4 == 1 && drill == true && touched4 && blocktouched4 == false || blocks->blocknum4 == 1 && drill2 == true && touched2nd4 && blocktouched4 == false) {
		SDL_DestroyTexture(blocks->block_4);
		howmanybroken += 1;
		blocks->block_4 = nullptr;
		blocktouched4 = true;
	}
	else if (blocks->blocknum4 == 2 && diamondpick == true && touched4 && blocktouched4 == false) {
		SDL_DestroyTexture(blocks->block_4);
		howmanybroken += 1;
		blocks->block_4 = nullptr;
		blocktouched4 = true;
	}
	else if (blocks->blocknum4 == 3 && goldpick == true && touched4 && blocktouched4 == false || blocks->blocknum4 == 3 && goldpick2 == true && touched2nd4 && blocktouched4 == false || blocks->blocknum4 == 7 && goldpick == true && touched4 && blocktouched4 == false || blocks->blocknum4 == 7 && goldpick2 == true && touched2nd4 && blocktouched4 == false || blocks->blocknum4 == 10 && goldpick == true && touched4 && blocktouched4 == false || blocks->blocknum4 == 10 && goldpick2 == true && touched2nd4 && blocktouched4 == false) {
		SDL_DestroyTexture(blocks->block_4);
		howmanybroken += 1;
		blocks->block_4 = nullptr;
		blocktouched4 = true;
	}
	else if (blocks->blocknum4 == 4 && ironpick == true && touched4 && blocktouched4 == false || blocks->blocknum4 == 4 && ironpick2 == true && touched2nd4 && blocktouched4 == false || blocks->blocknum4 == 8 && ironpick == true && touched4 && blocktouched4 == false || blocks->blocknum4 == 8 && ironpick2 == true && touched2nd4 && blocktouched4 == false) {
		SDL_DestroyTexture(blocks->block_4);
		howmanybroken += 1;
		blocks->block_4 = nullptr;
		blocktouched4 = true;
	}
	else if (blocks->blocknum4 == 5 && coalpick == true && touched4 && blocktouched4 == false || blocks->blocknum4 == 5 && coalpick2 == true && touched2nd4 && blocktouched4 == false || blocks->blocknum4 == 9 && coalpick == true && touched4 && blocktouched4 == false || blocks->blocknum4 == 9 && coalpick2 == true && touched2nd4 && blocktouched4 == false) {
		SDL_DestroyTexture(blocks->block_4);
		howmanybroken += 1;
		blocks->block_4 = nullptr;
		blocktouched4 = true;
	}
	else if (blocks->blocknum4 == 6 && rubypick == true && touched2nd4 && blocktouched4 == false) {
		SDL_DestroyTexture(blocks->block_4);
		howmanybroken += 1;
		blocks->block_4 = nullptr;
		blocktouched4 = true;
	}
	if (blocks->blocknum5 == 0 && shovel == true && touched5 && blocktouched5 == false || blocks->blocknum5 == 0 && shovel2 == true && touched2nd5 && blocktouched5 == false) {
		SDL_DestroyTexture(blocks->block_5);
		howmanybroken += 1;
		blocks->block_5 = nullptr;
		blocktouched5 = true;
	}
	else if (blocks->blocknum5 == 1 && drill == true && touched5 && blocktouched5 == false || blocks->blocknum5 == 1 && drill2 == true && touched2nd5 && blocktouched5 == false) {
		SDL_DestroyTexture(blocks->block_5);
		howmanybroken += 1;
		blocks->block_5 = nullptr;
		blocktouched5 = true;
	}
	else if (blocks->blocknum5 == 2 && diamondpick == true && touched5 && blocktouched5 == false) {
		SDL_DestroyTexture(blocks->block_5);
		howmanybroken += 1;
		blocks->block_5 = nullptr;
		blocktouched5 = true;
	}
	else if (blocks->blocknum5 == 3 && goldpick == true && touched5 && blocktouched5 == false || blocks->blocknum5 == 3 && goldpick2 == true && touched2nd5 && blocktouched5 == false || blocks->blocknum5 == 7 && goldpick == true && touched5 && blocktouched5 == false || blocks->blocknum5 == 7 && goldpick2 == true && touched2nd5 && blocktouched5 == false || blocks->blocknum5 == 10 && goldpick == true && touched5 && blocktouched5 == false || blocks->blocknum5 == 10 && goldpick2 == true && touched2nd5 && blocktouched5 == false) {
		SDL_DestroyTexture(blocks->block_5);
		howmanybroken += 1;
		blocks->block_5 = nullptr;
		blocktouched5 = true;
	}
	else if (blocks->blocknum5 == 4 && ironpick == true && touched5 && blocktouched5 == false || blocks->blocknum5 == 4 && ironpick2 == true && touched2nd5 && blocktouched5 == false || blocks->blocknum5 == 8 && ironpick == true && touched5 && blocktouched5 == false || blocks->blocknum5 == 8 && ironpick2 == true && touched2nd5 && blocktouched5 == false) {
		SDL_DestroyTexture(blocks->block_5);
		howmanybroken += 1;
		blocks->block_5 = nullptr;
		blocktouched5 = true;
	}
	else if (blocks->blocknum5 == 5 && coalpick == true && touched5 && blocktouched5 == false || blocks->blocknum5 == 5 && coalpick2 == true && touched2nd5 && blocktouched5 == false || blocks->blocknum5 == 9 && coalpick == true && touched5 && blocktouched5 == false || blocks->blocknum5 == 9 && coalpick2 == true && touched2nd5 && blocktouched5 == false) {
		SDL_DestroyTexture(blocks->block_5);
		howmanybroken += 1;
		blocks->block_5 = nullptr;
		blocktouched5 = true;
	}
	else if (blocks->blocknum5 == 6 && rubypick == true && touched2nd5 && blocktouched5 == false) {
		SDL_DestroyTexture(blocks->block_5);
		howmanybroken += 1;
		blocks->block_5 = nullptr;
		blocktouched5 = true;
	}
	if (blocks->blocknum6 == 0 && shovel == true && touched6 && blocktouched6 == false || blocks->blocknum6 == 0 && shovel2 == true && touched2nd6 && blocktouched6 == false) {
		SDL_DestroyTexture(blocks->block_6);
		howmanybroken += 1;
		blocks->block_6 = nullptr;
		blocktouched6 = true;
	}
	else if (blocks->blocknum6 == 1 && drill == true && touched6 && blocktouched6 == false || blocks->blocknum6 == 1 && drill2 == true && touched2nd6 && blocktouched6 == false) {
		SDL_DestroyTexture(blocks->block_6);
		howmanybroken += 1;
		blocks->block_6 = nullptr;
		blocktouched6 = true;
	}
	else if (blocks->blocknum6 == 2 && diamondpick == true && touched6 && blocktouched6 == false) {
		SDL_DestroyTexture(blocks->block_6);
		howmanybroken += 1;
		blocks->block_6 = nullptr;
		blocktouched6 = true;
	}
	else if (blocks->blocknum6 == 3 && goldpick == true && touched6 && blocktouched6 == false || blocks->blocknum6 == 3 && goldpick2 == true && touched2nd6 && blocktouched6 == false || blocks->blocknum6 == 7 && goldpick == true && touched6 && blocktouched6 == false || blocks->blocknum6 == 7 && goldpick2 == true && touched2nd6 && blocktouched6 == false || blocks->blocknum6 == 10 && goldpick == true && touched6 && blocktouched6 == false || blocks->blocknum6 == 10 && goldpick2 == true && touched2nd6 && blocktouched6 == false) {
		SDL_DestroyTexture(blocks->block_6);
		howmanybroken += 1;
		blocks->block_6 = nullptr;
		blocktouched6 = true;
	}
	else if (blocks->blocknum6 == 4 && ironpick == true && touched6 && blocktouched6 == false || blocks->blocknum6 == 4 && ironpick2 == true && touched2nd6 && blocktouched6 == false || blocks->blocknum6 == 8 && ironpick == true && touched6 && blocktouched6 == false || blocks->blocknum6 == 8 && ironpick2 == true && touched2nd6 && blocktouched6 == false) {
		SDL_DestroyTexture(blocks->block_6);
		howmanybroken += 1;
		blocks->block_6 = nullptr;
		blocktouched6 = true;
	}
	else if (blocks->blocknum6 == 5 && coalpick == true && touched6 && blocktouched6 == false || blocks->blocknum6 == 5 && coalpick2 == true && touched2nd6 && blocktouched6 == false || blocks->blocknum6 == 9 && coalpick == true && touched6 && blocktouched6 == false || blocks->blocknum6 == 9 && coalpick2 == true && touched2nd6 && blocktouched6 == false) {
		SDL_DestroyTexture(blocks->block_6);
		howmanybroken += 1;
		blocks->block_6 = nullptr;
		blocktouched6 = true;
	}
	else if (blocks->blocknum6 == 6 && rubypick == true && touched2nd6 && blocktouched6 == false) {
		SDL_DestroyTexture(blocks->block_6);
		howmanybroken += 1;
		blocks->block_6 = nullptr;
		blocktouched6 = true;
	}
	if (blocks->blocknum7 == 0 && shovel == true && touched7 && blocktouched7 == false || blocks->blocknum7 == 0 && shovel2 == true && touched2nd7 && blocktouched7 == false) {
		SDL_DestroyTexture(blocks->block_7);
		howmanybroken += 1;
		blocks->block_7 = nullptr;
		blocktouched7 = true;
	}
	else if (blocks->blocknum7 == 1 && drill == true && touched7 && blocktouched7 == false || blocks->blocknum7 == 1 && drill2 == true && touched2nd7 && blocktouched7 == false) {
		SDL_DestroyTexture(blocks->block_7);
		howmanybroken += 1;
		blocks->block_7 = nullptr;
		blocktouched7 = true;
	}
	else if (blocks->blocknum7 == 2 && diamondpick == true && touched7 && blocktouched7 == false) {
		SDL_DestroyTexture(blocks->block_7);
		howmanybroken += 1;
		blocks->block_7 = nullptr;
		blocktouched7 = true;
	}
	else if (blocks->blocknum7 == 3 && goldpick == true && touched7 && blocktouched7 == false || blocks->blocknum7 == 3 && goldpick2 == true && touched2nd7 && blocktouched7 == false || blocks->blocknum7 == 7 && goldpick == true && touched7 && blocktouched7 == false || blocks->blocknum7 == 7 && goldpick2 == true && touched2nd7 && blocktouched7 == false || blocks->blocknum7 == 10 && goldpick == true && touched7 && blocktouched7 == false || blocks->blocknum7 == 10 && goldpick2 == true && touched2nd7 && blocktouched7 == false) {
		SDL_DestroyTexture(blocks->block_7);
		howmanybroken += 1;
		blocks->block_7 = nullptr;
		blocktouched7 = true;
	}
	else if (blocks->blocknum7 == 4 && ironpick == true && touched7 && blocktouched7 == false || blocks->blocknum7 == 4 && ironpick2 == true && touched2nd7 && blocktouched7 == false || blocks->blocknum7 == 8 && ironpick == true && touched7 && blocktouched7 == false || blocks->blocknum7 == 8 && ironpick2 == true && touched2nd7 && blocktouched7 == false) {
		SDL_DestroyTexture(blocks->block_7);
		howmanybroken += 1;
		blocks->block_7 = nullptr;
		blocktouched7 = true;
	}
	else if (blocks->blocknum7 == 5 && coalpick == true && touched7 && blocktouched7 == false || blocks->blocknum7 == 5 && coalpick2 == true && touched2nd7 && blocktouched7 == false || blocks->blocknum7 == 9 && coalpick == true && touched7 && blocktouched7 == false || blocks->blocknum7 == 9 && coalpick2 == true && touched2nd7 && blocktouched7 == false) {
		SDL_DestroyTexture(blocks->block_7);
		howmanybroken += 1;
		blocks->block_7 = nullptr;
		blocktouched7 = true;
	}
	else if (blocks->blocknum7 == 6 && rubypick == true && touched2nd7 && blocktouched7 == false) {
		SDL_DestroyTexture(blocks->block_7);
		howmanybroken += 1;
		blocks->block_7 = nullptr;
		blocktouched7 = true;
	}
	if (blocks->blocknum8 == 0 && shovel == true && touched8 && blocktouched8 == false || blocks->blocknum8 == 0 && shovel2 == true && touched2nd8 && blocktouched8 == false) {
		SDL_DestroyTexture(blocks->block_8);
		howmanybroken += 1;
		blocks->block_8 = nullptr;
		blocktouched8 = true;
	}
	else if (blocks->blocknum8 == 1 && drill == true && touched8 && blocktouched8 == false || blocks->blocknum8 == 1 && drill2 == true && touched2nd8 && blocktouched8 == false) {
		SDL_DestroyTexture(blocks->block_8);
		howmanybroken += 1;
		blocks->block_8 = nullptr;
		blocktouched8 = true;
	}
	else if (blocks->blocknum8 == 2 && diamondpick == true && touched8 && blocktouched8 == false) {
		SDL_DestroyTexture(blocks->block_8);
		howmanybroken += 1;
		blocks->block_8 = nullptr;
		blocktouched8 = true;
	}
	else if (blocks->blocknum8 == 3 && goldpick == true && touched8 && blocktouched8 == false || blocks->blocknum8 == 3 && goldpick2 == true && touched2nd8 && blocktouched8 == false || blocks->blocknum8 == 7 && goldpick == true && touched8 && blocktouched8 == false || blocks->blocknum8 == 7 && goldpick2 == true && touched2nd8 && blocktouched8 == false || blocks->blocknum8 == 10 && goldpick == true && touched8 && blocktouched8 == false || blocks->blocknum8 == 10 && goldpick2 == true && touched2nd8 && blocktouched8 == false) {
		SDL_DestroyTexture(blocks->block_8);
		howmanybroken += 1;
		blocks->block_8 = nullptr;
		blocktouched8 = true;
	}
	else if (blocks->blocknum8 == 4 && ironpick == true && touched8 && blocktouched8 == false || blocks->blocknum8 == 4 && ironpick2 == true && touched2nd8 && blocktouched8 == false || blocks->blocknum8 == 8 && ironpick == true && touched8 && blocktouched8 == false || blocks->blocknum8 == 8 && ironpick2 == true && touched2nd8 && blocktouched8 == false) {
		SDL_DestroyTexture(blocks->block_8);
		howmanybroken += 1;
		blocks->block_8 = nullptr;
		blocktouched8 = true;
	}
	else if (blocks->blocknum8 == 5 && coalpick == true && touched8 && blocktouched8 == false || blocks->blocknum8 == 5 && coalpick2 == true && touched2nd8 && blocktouched8 == false || blocks->blocknum8 == 9 && coalpick == true && touched8 && blocktouched8 == false || blocks->blocknum8 == 9 && coalpick2 == true && touched2nd8 && blocktouched8 == false) {
		SDL_DestroyTexture(blocks->block_8);
		howmanybroken += 1;
		blocks->block_8 = nullptr;
		blocktouched8 = true;
	}
	else if (blocks->blocknum8 == 6 && rubypick == true && touched2nd8 && blocktouched8 == false) {
		SDL_DestroyTexture(blocks->block_8);
		howmanybroken += 1;
		blocks->block_8 = nullptr;
		blocktouched8 = true;
	}
	if (blocks->blocknum9 == 0 && shovel == true && touched9 && blocktouched9 == false || blocks->blocknum9 == 0 && shovel2 == true && touched2nd9 && blocktouched9 == false) {
		SDL_DestroyTexture(blocks->block_9);
		howmanybroken += 1;
		blocks->block_9 = nullptr;
		blocktouched9 = true;
	}
	else if (blocks->blocknum9 == 1 && drill == true && touched9 && blocktouched9 == false || blocks->blocknum9 == 1 && drill2 == true && touched2nd9 && blocktouched9 == false) {
		SDL_DestroyTexture(blocks->block_9);
		howmanybroken += 1;
		blocks->block_9 = nullptr;
		blocktouched9 = true;
	}
	else if (blocks->blocknum9 == 2 && diamondpick == true && touched9 && blocktouched9 == false) {
		SDL_DestroyTexture(blocks->block_9);
		howmanybroken += 1;
		blocks->block_9 = nullptr;
		blocktouched9 = true;
	}
	else if (blocks->blocknum9 == 3 && goldpick == true && touched9 && blocktouched9 == false || blocks->blocknum9 == 3 && goldpick2 == true && touched2nd9 && blocktouched9 == false || blocks->blocknum9 == 7 && goldpick == true && touched9 && blocktouched9 == false || blocks->blocknum9 == 7 && goldpick2 == true && touched2nd9 && blocktouched9 == false || blocks->blocknum9 == 10 && goldpick == true && touched9 && blocktouched9 == false || blocks->blocknum9 == 10 && goldpick2 == true && touched2nd9 && blocktouched9 == false) {
		SDL_DestroyTexture(blocks->block_9);
		howmanybroken += 1;
		blocks->block_9 = nullptr;
		blocktouched9 = true;
	}
	else if (blocks->blocknum9 == 4 && ironpick == true && touched9 && blocktouched9 == false || blocks->blocknum9 == 4 && ironpick2 == true && touched2nd9 && blocktouched9 == false || blocks->blocknum9 == 8 && ironpick == true && touched9 && blocktouched9 == false || blocks->blocknum9 == 8 && ironpick2 == true && touched2nd9 && blocktouched9 == false) {
		SDL_DestroyTexture(blocks->block_9);
		howmanybroken += 1;
		blocks->block_9 = nullptr;
		blocktouched9 = true;
	}
	else if (blocks->blocknum9 == 5 && coalpick == true && touched9 && blocktouched9 == false || blocks->blocknum9 == 5 && coalpick2 == true && touched2nd9 && blocktouched9 == false || blocks->blocknum9 == 9 && coalpick == true && touched9 && blocktouched9 == false || blocks->blocknum9 == 9 && coalpick2 == true && touched2nd9 && blocktouched9 == false) {
		SDL_DestroyTexture(blocks->block_9);
		howmanybroken += 1;
		blocks->block_9 = nullptr;
		blocktouched9 = true;
	}
	else if (blocks->blocknum9 == 6 && rubypick == true && touched2nd9 && blocktouched9 == false) {
		SDL_DestroyTexture(blocks->block_9);
		howmanybroken += 1;
		blocks->block_9 = nullptr;
		blocktouched9 = true;
	}
	if (blocks->blocknum10 == 0 && shovel == true && touched10 && blocktouched10 == false || blocks->blocknum10 == 0 && shovel2 == true && touched2nd10 && blocktouched10 == false) {
		SDL_DestroyTexture(blocks->block_10);
		howmanybroken += 1;
		blocks->block_10 = nullptr;
		blocktouched10 = true;
	}
	else if (blocks->blocknum10 == 1 && drill == true && touched10 && blocktouched10 == false || blocks->blocknum10 == 1 && drill2 == true && touched2nd10 && blocktouched10 == false) {
		SDL_DestroyTexture(blocks->block_10);
		howmanybroken += 1;
		blocks->block_10 = nullptr;
		blocktouched10 = true;
	}
	else if (blocks->blocknum10 == 2 && diamondpick == true && touched10 && blocktouched10 == false) {
		SDL_DestroyTexture(blocks->block_10);
		howmanybroken += 1;
		blocks->block_10 = nullptr;
		blocktouched10 = true;
	}
	else if (blocks->blocknum10 == 3 && goldpick == true && touched10 && blocktouched10 == false || blocks->blocknum10 == 3 && goldpick2 == true && touched2nd10 && blocktouched10 == false || blocks->blocknum10 == 7 && goldpick == true && touched10 && blocktouched10 == false || blocks->blocknum10 == 7 && goldpick2 == true && touched2nd10 && blocktouched10 == false || blocks->blocknum10 == 10 && goldpick == true && touched10 && blocktouched10 == false || blocks->blocknum10 == 10 && goldpick2 == true && touched2nd10 && blocktouched10 == false) {
		SDL_DestroyTexture(blocks->block_10);
		howmanybroken += 1;
		blocks->block_10 = nullptr;
		blocktouched10 = true;
	}
	else if (blocks->blocknum10 == 4 && ironpick == true && touched10 && blocktouched10 == false || blocks->blocknum10 == 4 && ironpick2 == true && touched2nd10 && blocktouched10 == false || blocks->blocknum10 == 8 && ironpick == true && touched10 && blocktouched10 == false || blocks->blocknum10 == 8 && ironpick2 == true && touched2nd10 && blocktouched10 == false) {
		SDL_DestroyTexture(blocks->block_10);
		howmanybroken += 1;
		blocks->block_10 = nullptr;
		blocktouched10 = true;
	}
	else if (blocks->blocknum10 == 5 && coalpick == true && touched10 && blocktouched10 == false || blocks->blocknum10 == 5 && coalpick2 == true && touched2nd10 && blocktouched10 == false || blocks->blocknum10 == 9 && coalpick == true && touched10 && blocktouched10 == false || blocks->blocknum10 == 9 && coalpick2 == true && touched2nd10 && blocktouched10 == false) {
		SDL_DestroyTexture(blocks->block_10);
		howmanybroken += 1;
		blocks->block_10 = nullptr;
		blocktouched10 = true;
	}
	else if (blocks->blocknum10 == 6 && rubypick == true && touched2nd10 && blocktouched10 == false) {
		SDL_DestroyTexture(blocks->block_10);
		howmanybroken += 1;
		blocks->block_10 = nullptr;
		blocktouched10 = true;
	}
	if (blocks->blocknum11 == 0 && shovel == true && touched11 && blocktouched11 == false || blocks->blocknum11 == 0 && shovel2 == true && touched2nd11 && blocktouched11 == false) {
		SDL_DestroyTexture(blocks->block_11);
		howmanybroken += 1;
		blocks->block_11 = nullptr;
		blocktouched11 = true;
	}
	else if (blocks->blocknum11 == 1 && drill == true && touched11 && blocktouched11 == false || blocks->blocknum11 == 1 && drill2 == true && touched2nd11 && blocktouched11 == false) {
		SDL_DestroyTexture(blocks->block_11);
		howmanybroken += 1;
		blocks->block_11 = nullptr;
		blocktouched11 = true;
	}
	else if (blocks->blocknum11 == 2 && diamondpick == true && touched11 && blocktouched11 == false) {
		SDL_DestroyTexture(blocks->block_11);
		howmanybroken += 1;
		blocks->block_11 = nullptr;
		blocktouched11 = true;
	}
	else if (blocks->blocknum11 == 3 && goldpick == true && touched11 && blocktouched11 == false || blocks->blocknum11 == 3 && goldpick2 == true && touched2nd11 && blocktouched11 == false || blocks->blocknum11 == 7 && goldpick == true && touched11 && blocktouched11 == false || blocks->blocknum11 == 7 && goldpick2 == true && touched2nd11 && blocktouched11 == false || blocks->blocknum11 == 10 && goldpick == true && touched11 && blocktouched11 == false || blocks->blocknum11 == 10 && goldpick2 == true && touched2nd11 && blocktouched11 == false) {
		SDL_DestroyTexture(blocks->block_11);
		howmanybroken += 1;
		blocks->block_11 = nullptr;
		blocktouched11 = true;
	}
	else if (blocks->blocknum11 == 4 && ironpick == true && touched11 && blocktouched11 == false || blocks->blocknum11 == 4 && ironpick2 == true && touched2nd11 && blocktouched11 == false || blocks->blocknum11 == 8 && ironpick == true && touched11 && blocktouched11 == false || blocks->blocknum11 == 8 && ironpick2 == true && touched2nd11 && blocktouched11 == false) {
		SDL_DestroyTexture(blocks->block_11);
		howmanybroken += 1;
		blocks->block_11 = nullptr;
		blocktouched11 = true;
	}
	else if (blocks->blocknum11 == 5 && coalpick == true && touched11 && blocktouched11 == false || blocks->blocknum11 == 5 && coalpick2 == true && touched2nd11 && blocktouched11 == false || blocks->blocknum11 == 9 && coalpick == true && touched11 && blocktouched11 == false || blocks->blocknum11 == 9 && coalpick2 == true && touched2nd11 && blocktouched11 == false) {
		SDL_DestroyTexture(blocks->block_11);
		howmanybroken += 1;
		blocks->block_11 = nullptr;
		blocktouched11 = true;
	}
	else if (blocks->blocknum11 == 6 && rubypick == true && touched2nd11 && blocktouched11 == false) {
		SDL_DestroyTexture(blocks->block_11);
		howmanybroken += 1;
		blocks->block_11 = nullptr;
		blocktouched11 = true;
	}
	if (blocks->blocknum12 == 0 && shovel == true && touched12 && blocktouched12 == false || blocks->blocknum12 == 0 && shovel2 == true && touched2nd12 && blocktouched12 == false) {
		SDL_DestroyTexture(blocks->block_12);
		howmanybroken += 1;
		blocks->block_12 = nullptr;
		blocktouched12 = true;
	}
	else if (blocks->blocknum12 == 1 && drill == true && touched12 && blocktouched12 == false || blocks->blocknum12 == 1 && drill2 == true && touched2nd12 && blocktouched12 == false) {
		SDL_DestroyTexture(blocks->block_12);
		howmanybroken += 1;
		blocks->block_12 = nullptr;
		blocktouched12 = true;
	}
	else if (blocks->blocknum12 == 2 && diamondpick == true && touched12 && blocktouched12 == false) {
		SDL_DestroyTexture(blocks->block_12);
		howmanybroken += 1;
		blocks->block_12 = nullptr;
		blocktouched12 = true;
	}
	else if (blocks->blocknum12 == 3 && goldpick == true && touched12 && blocktouched12 == false || blocks->blocknum12 == 3 && goldpick2 == true && touched2nd12 && blocktouched12 == false || blocks->blocknum12 == 7 && goldpick == true && touched12 && blocktouched12 == false || blocks->blocknum12 == 7 && goldpick2 == true && touched2nd12 && blocktouched12 == false || blocks->blocknum12 == 10 && goldpick == true && touched12 && blocktouched12 == false || blocks->blocknum12 == 10 && goldpick2 == true && touched2nd12 && blocktouched12 == false) {
		SDL_DestroyTexture(blocks->block_12);
		howmanybroken += 1;
		blocks->block_12 = nullptr;
		blocktouched12 = true;
	}
	else if (blocks->blocknum12 == 4 && ironpick == true && touched12 && blocktouched12 == false || blocks->blocknum12 == 4 && ironpick2 == true && touched2nd12 && blocktouched12 == false || blocks->blocknum12 == 8 && ironpick == true && touched12 && blocktouched12 == false || blocks->blocknum12 == 8 && ironpick2 == true && touched2nd12 && blocktouched12 == false) {
		SDL_DestroyTexture(blocks->block_12);
		howmanybroken += 1;
		blocks->block_12 = nullptr;
		blocktouched12 = true;
	}
	else if (blocks->blocknum12 == 5 && coalpick == true && touched12 && blocktouched12 == false || blocks->blocknum12 == 5 && coalpick2 == true && touched2nd12 && blocktouched12 == false || blocks->blocknum12 == 9 && coalpick == true && touched12 && blocktouched12 == false || blocks->blocknum12 == 9 && coalpick2 == true && touched2nd12 && blocktouched12 == false) {
		SDL_DestroyTexture(blocks->block_12);
		howmanybroken += 1;
		blocks->block_12 = nullptr;
		blocktouched12 = true;
	}
	else if (blocks->blocknum12 == 6 && rubypick == true && touched2nd12 && blocktouched12 == false) {
		SDL_DestroyTexture(blocks->block_12);
		howmanybroken += 1;
		blocks->block_12 = nullptr;
		blocktouched12 = true;
	}
	if (blocks->blocknum13 == 0 && shovel == true && touched13 && blocktouched13 == false || blocks->blocknum13 == 0 && shovel2 == true && touched2nd13 && blocktouched13 == false) {
		SDL_DestroyTexture(blocks->block_13);
		howmanybroken += 1;
		blocks->block_13 = nullptr;
		blocktouched13 = true;
	}
	else if (blocks->blocknum13 == 1 && drill == true && touched13 && blocktouched13 == false || blocks->blocknum13 == 1 && drill2 == true && touched2nd13 && blocktouched13 == false) {
		SDL_DestroyTexture(blocks->block_13);
		howmanybroken += 1;
		blocks->block_13 = nullptr;
		blocktouched13 = true;
	}
	else if (blocks->blocknum13 == 2 && diamondpick == true && touched13 && blocktouched13 == false) {
		SDL_DestroyTexture(blocks->block_13);
		howmanybroken += 1;
		blocks->block_13 = nullptr;
		blocktouched13 = true;
	}
	else if (blocks->blocknum13 == 3 && goldpick == true && touched13 && blocktouched13 == false || blocks->blocknum13 == 3 && goldpick2 == true && touched2nd13 && blocktouched13 == false || blocks->blocknum13 == 7 && goldpick == true && touched13 && blocktouched13 == false || blocks->blocknum13 == 7 && goldpick2 == true && touched2nd13 && blocktouched13 == false || blocks->blocknum13 == 10 && goldpick == true && touched13 && blocktouched13 == false || blocks->blocknum13 == 10 && goldpick2 == true && touched2nd13 && blocktouched13 == false) {
		SDL_DestroyTexture(blocks->block_13);
		howmanybroken += 1;
		blocks->block_13 = nullptr;
		blocktouched13 = true;
	}
	else if (blocks->blocknum13 == 4 && ironpick == true && touched13 && blocktouched13 == false || blocks->blocknum13 == 4 && ironpick2 == true && touched2nd13 && blocktouched13 == false || blocks->blocknum13 == 8 && ironpick == true && touched13 && blocktouched13 == false || blocks->blocknum13 == 8 && ironpick2 == true && touched2nd13 && blocktouched13 == false) {
		SDL_DestroyTexture(blocks->block_13);
		howmanybroken += 1;
		blocks->block_13 = nullptr;
		blocktouched13 = true;
	}
	else if (blocks->blocknum13 == 5 && coalpick == true && touched13 && blocktouched13 == false || blocks->blocknum13 == 5 && coalpick2 == true && touched2nd13 && blocktouched13 == false || blocks->blocknum13 == 9 && coalpick == true && touched13 && blocktouched13 == false || blocks->blocknum13 == 9 && coalpick2 == true && touched2nd13 && blocktouched13 == false) {
		SDL_DestroyTexture(blocks->block_13);
		howmanybroken += 1;
		blocks->block_13 = nullptr;
		blocktouched13 = true;
	}
	else if (blocks->blocknum13 == 6 && rubypick == true && touched2nd13 && blocktouched13 == false) {
		SDL_DestroyTexture(blocks->block_13);
		howmanybroken += 1;
		blocks->block_13 = nullptr;
		blocktouched13 = true;
	}
	if (blocks->blocknum14 == 0 && shovel == true && touched14 && blocktouched14 == false || blocks->blocknum14 == 0 && shovel2 == true && touched2nd14 && blocktouched14 == false) {
		SDL_DestroyTexture(blocks->block_14);
		howmanybroken += 1;
		blocks->block_14 = nullptr;
		blocktouched14 = true;
	}
	else if (blocks->blocknum14 == 1 && drill == true && touched14 && blocktouched14 == false || blocks->blocknum14 == 1 && drill2 == true && touched2nd14 && blocktouched14 == false) {
		SDL_DestroyTexture(blocks->block_14);
		howmanybroken += 1;
		blocks->block_14 = nullptr;
		blocktouched14 = true;
	}
	else if (blocks->blocknum14 == 2 && diamondpick == true && touched14 && blocktouched14 == false) {
		SDL_DestroyTexture(blocks->block_14);
		howmanybroken += 1;
		blocks->block_14 = nullptr;
		blocktouched14 = true;
	}
	else if (blocks->blocknum14 == 3 && goldpick == true && touched14 && blocktouched14 == false || blocks->blocknum14 == 3 && goldpick2 == true && touched2nd14 && blocktouched14 == false || blocks->blocknum14 == 7 && goldpick == true && touched14 && blocktouched14 == false || blocks->blocknum14 == 7 && goldpick2 == true && touched2nd14 && blocktouched14 == false || blocks->blocknum14 == 10 && goldpick == true && touched14 && blocktouched14 == false || blocks->blocknum14 == 10 && goldpick2 == true && touched2nd14 && blocktouched14 == false) {
		SDL_DestroyTexture(blocks->block_14);
		howmanybroken += 1;
		blocks->block_14 = nullptr;
		blocktouched14 = true;
	}
	else if (blocks->blocknum14 == 4 && ironpick == true && touched14 && blocktouched14 == false || blocks->blocknum14 == 4 && ironpick2 == true && touched2nd14 && blocktouched14 == false || blocks->blocknum14 == 8 && ironpick == true && touched14 && blocktouched14 == false || blocks->blocknum14 == 8 && ironpick2 == true && touched2nd14 && blocktouched14 == false) {
		SDL_DestroyTexture(blocks->block_14);
		howmanybroken += 1;
		blocks->block_14 = nullptr;
		blocktouched14 = true;
	}
	else if (blocks->blocknum14 == 5 && coalpick == true && touched14 && blocktouched14 == false || blocks->blocknum14 == 5 && coalpick2 == true && touched2nd14 && blocktouched14 == false || blocks->blocknum14 == 9 && coalpick == true && touched14 && blocktouched14 == false || blocks->blocknum14 == 9 && coalpick2 == true && touched2nd14 && blocktouched14 == false) {
		SDL_DestroyTexture(blocks->block_14);
		howmanybroken += 1;
		blocks->block_14 = nullptr;
		blocktouched14 = true;
	}
	else if (blocks->blocknum14 == 6 && rubypick == true && touched2nd14 && blocktouched14 == false) {
		SDL_DestroyTexture(blocks->block_14);
		howmanybroken += 1;
		blocks->block_14 = nullptr;
		blocktouched14 = true;
	}
	if (blocks->blocknum15 == 0 && shovel == true && touched15 && blocktouched15 == false || blocks->blocknum15 == 0 && shovel2 == true && touched2nd15 && blocktouched15 == false) {
		SDL_DestroyTexture(blocks->block_15);
		howmanybroken += 1;
		blocks->block_15 = nullptr;
		blocktouched15 = true;
	}
	else if (blocks->blocknum15 == 1 && drill == true && touched15 && blocktouched15 == false || blocks->blocknum15 == 1 && drill2 == true && touched2nd15 && blocktouched15 == false) {
		SDL_DestroyTexture(blocks->block_15);
		howmanybroken += 1;
		blocks->block_15 = nullptr;
		blocktouched15 = true;
	}
	else if (blocks->blocknum15 == 2 && diamondpick == true && touched15 && blocktouched15 == false) {
		SDL_DestroyTexture(blocks->block_15);
		howmanybroken += 1;
		blocks->block_15 = nullptr;
		blocktouched15 = true;
	}
	else if (blocks->blocknum15 == 3 && goldpick == true && touched15 && blocktouched15 == false || blocks->blocknum15 == 3 && goldpick2 == true && touched2nd15 && blocktouched15 == false || blocks->blocknum15 == 7 && goldpick == true && touched15 && blocktouched15 == false || blocks->blocknum15 == 7 && goldpick2 == true && touched2nd15 && blocktouched15 == false || blocks->blocknum15 == 10 && goldpick == true && touched15 && blocktouched15 == false || blocks->blocknum15 == 10 && goldpick2 == true && touched2nd15 && blocktouched15 == false) {
		SDL_DestroyTexture(blocks->block_15);
		howmanybroken += 1;
		blocks->block_15 = nullptr;
		blocktouched15 = true;
	}
	else if (blocks->blocknum15 == 4 && ironpick == true && touched15 && blocktouched15 == false || blocks->blocknum15 == 4 && ironpick2 == true && touched2nd15 && blocktouched15 == false || blocks->blocknum15 == 8 && ironpick == true && touched15 && blocktouched15 == false || blocks->blocknum15 == 8 && ironpick2 == true && touched2nd15 && blocktouched15 == false) {
		SDL_DestroyTexture(blocks->block_15);
		howmanybroken += 1;
		blocks->block_15 = nullptr;
		blocktouched15 = true;
	}
	else if (blocks->blocknum15 == 5 && coalpick == true && touched15 && blocktouched15 == false || blocks->blocknum15 == 5 && coalpick2 == true && touched2nd15 && blocktouched15 == false || blocks->blocknum15 == 9 && coalpick == true && touched15 && blocktouched15 == false || blocks->blocknum15 == 9 && coalpick2 == true && touched2nd15 && blocktouched15 == false) {
		SDL_DestroyTexture(blocks->block_15);
		howmanybroken += 1;
		blocks->block_15 = nullptr;
		blocktouched15 = true;
	}
	else if (blocks->blocknum15 == 6 && rubypick == true && touched2nd15 && blocktouched15 == false) {
		SDL_DestroyTexture(blocks->block_15);
		howmanybroken += 1;
		blocks->block_15 = nullptr;
		blocktouched15 = true;
	}
	if (blocks->blocknum16 == 0 && shovel == true && touched16 && blocktouched16 == false || blocks->blocknum16 == 0 && shovel2 == true && touched2nd16 && blocktouched16 == false) {
		SDL_DestroyTexture(blocks->block_16);
		howmanybroken += 1;
		blocks->block_16 = nullptr;
		blocktouched16 = true;
	}
	else if (blocks->blocknum16 == 1 && drill == true && touched16 && blocktouched16 == false || blocks->blocknum16 == 1 && drill2 == true && touched2nd16 && blocktouched16 == false) {
		SDL_DestroyTexture(blocks->block_16);
		howmanybroken += 1;
		blocks->block_16 = nullptr;
		blocktouched16 = true;
	}
	else if (blocks->blocknum16 == 2 && diamondpick == true && touched16 && blocktouched16 == false) {
		SDL_DestroyTexture(blocks->block_16);
		howmanybroken += 1;
		blocks->block_16 = nullptr;
		blocktouched16 = true;
	}
	else if (blocks->blocknum16 == 3 && goldpick == true && touched16 && blocktouched16 == false || blocks->blocknum16 == 3 && goldpick2 == true && touched2nd16 && blocktouched16 == false || blocks->blocknum16 == 7 && goldpick == true && touched16 && blocktouched16 == false || blocks->blocknum16 == 7 && goldpick2 == true && touched2nd16 && blocktouched16 == false || blocks->blocknum16 == 10 && goldpick == true && touched16 && blocktouched16 == false || blocks->blocknum16 == 10 && goldpick2 == true && touched2nd16 && blocktouched16 == false) {
		SDL_DestroyTexture(blocks->block_16);
		howmanybroken += 1;
		blocks->block_16 = nullptr;
		blocktouched16 = true;
	}
	else if (blocks->blocknum16 == 4 && ironpick == true && touched16 && blocktouched16 == false || blocks->blocknum16 == 4 && ironpick2 == true && touched2nd16 && blocktouched16 == false || blocks->blocknum16 == 8 && ironpick == true && touched16 && blocktouched16 == false || blocks->blocknum16 == 8 && ironpick2 == true && touched2nd16 && blocktouched16 == false) {
		SDL_DestroyTexture(blocks->block_16);
		howmanybroken += 1;
		blocks->block_16 = nullptr;
		blocktouched16 = true;
	}
	else if (blocks->blocknum16 == 5 && coalpick == true && touched16 && blocktouched16 == false || blocks->blocknum16 == 5 && coalpick2 == true && touched2nd16 && blocktouched16 == false || blocks->blocknum16 == 9 && coalpick == true && touched16 && blocktouched16 == false || blocks->blocknum16 == 9 && coalpick2 == true && touched2nd16 && blocktouched16 == false) {
		SDL_DestroyTexture(blocks->block_16);
		howmanybroken += 1;
		blocks->block_16 = nullptr;
		blocktouched16 = true;
	}
	else if (blocks->blocknum16 == 6 && rubypick == true && touched2nd16 && blocktouched16 == false) {
		SDL_DestroyTexture(blocks->block_16);
		howmanybroken += 1;
		blocks->block_16 = nullptr;
		blocktouched16 = true;
	}
	if (blocks->blocknum17 == 0 && shovel == true && touched17 && blocktouched17 == false || blocks->blocknum17 == 0 && shovel2 == true && touched2nd17 && blocktouched17 == false) {
		SDL_DestroyTexture(blocks->block_17);
		howmanybroken += 1;
		blocks->block_17 = nullptr;
		blocktouched17 = true;
	}
	else if (blocks->blocknum17 == 1 && drill == true && touched17 && blocktouched17 == false || blocks->blocknum17 == 1 && drill2 == true && touched2nd17 && blocktouched17 == false) {
		SDL_DestroyTexture(blocks->block_17);
		howmanybroken += 1;
		blocks->block_17 = nullptr;
		blocktouched17 = true;
	}
	else if (blocks->blocknum17 == 2 && diamondpick == true && touched17 && blocktouched17 == false) {
		SDL_DestroyTexture(blocks->block_17);
		howmanybroken += 1;
		blocks->block_17 = nullptr;
		blocktouched17 = true;
	}
	else if (blocks->blocknum17 == 3 && goldpick == true && touched17 && blocktouched17 == false || blocks->blocknum17 == 3 && goldpick2 == true && touched2nd17 && blocktouched17 == false || blocks->blocknum17 == 7 && goldpick == true && touched17 && blocktouched17 == false || blocks->blocknum17 == 7 && goldpick2 == true && touched2nd17 && blocktouched17 == false || blocks->blocknum17 == 10 && goldpick == true && touched17 && blocktouched17 == false || blocks->blocknum17 == 10 && goldpick2 == true && touched2nd17 && blocktouched17 == false) {
		SDL_DestroyTexture(blocks->block_17);
		howmanybroken += 1;
		blocks->block_17 = nullptr;
		blocktouched17 = true;
	}
	else if (blocks->blocknum17 == 4 && ironpick == true && touched17 && blocktouched17 == false || blocks->blocknum17 == 4 && ironpick2 == true && touched2nd17 && blocktouched17 == false || blocks->blocknum17 == 8 && ironpick == true && touched17 && blocktouched17 == false || blocks->blocknum17 == 8 && ironpick2 == true && touched2nd17 && blocktouched17 == false) {
		SDL_DestroyTexture(blocks->block_17);
		howmanybroken += 1;
		blocks->block_17 = nullptr;
		blocktouched17 = true;
	}
	else if (blocks->blocknum17 == 5 && coalpick == true && touched17 && blocktouched17 == false || blocks->blocknum17 == 5 && coalpick2 == true && touched2nd17 && blocktouched17 == false || blocks->blocknum17 == 9 && coalpick == true && touched17 && blocktouched17 == false || blocks->blocknum17 == 9 && coalpick2 == true && touched2nd17 && blocktouched17 == false) {
		SDL_DestroyTexture(blocks->block_17);
		howmanybroken += 1;
		blocks->block_17 = nullptr;
		blocktouched17 = true;
	}
	else if (blocks->blocknum17 == 6 && rubypick == true && touched2nd17 && blocktouched17 == false) {
		SDL_DestroyTexture(blocks->block_17);
		howmanybroken += 1;
		blocks->block_17 = nullptr;
		blocktouched17 = true;
	}
	if (blocks->blocknum18 == 0 && shovel == true && touched18 && blocktouched18 == false || blocks->blocknum18 == 0 && shovel2 == true && touched2nd18 && blocktouched18 == false) {
		SDL_DestroyTexture(blocks->block_18);
		howmanybroken += 1;
		blocks->block_18 = nullptr;
		blocktouched18 = true;
	}
	else if (blocks->blocknum18 == 1 && drill == true && touched18 && blocktouched18 == false || blocks->blocknum18 == 1 && drill2 == true && touched2nd18 && blocktouched18 == false) {
		SDL_DestroyTexture(blocks->block_18);
		howmanybroken += 1;
		blocks->block_18 = nullptr;
		blocktouched18 = true;
	}
	else if (blocks->blocknum18 == 2 && diamondpick == true && touched18 && blocktouched18 == false) {
		SDL_DestroyTexture(blocks->block_18);
		howmanybroken += 1;
		blocks->block_18 = nullptr;
		blocktouched18 = true;
	}
	else if (blocks->blocknum18 == 3 && goldpick == true && touched18 && blocktouched18 == false || blocks->blocknum18 == 3 && goldpick2 == true && touched2nd18 && blocktouched18 == false || blocks->blocknum18 == 7 && goldpick == true && touched18 && blocktouched18 == false || blocks->blocknum18 == 7 && goldpick2 == true && touched2nd18 && blocktouched18 == false || blocks->blocknum18 == 10 && goldpick == true && touched18 && blocktouched18 == false || blocks->blocknum18 == 10 && goldpick2 == true && touched2nd18 && blocktouched18 == false) {
		SDL_DestroyTexture(blocks->block_18);
		howmanybroken += 1;
		blocks->block_18 = nullptr;
		blocktouched18 = true;
	}
	else if (blocks->blocknum18 == 4 && ironpick == true && touched18 && blocktouched18 == false || blocks->blocknum18 == 4 && ironpick2 == true && touched2nd18 && blocktouched18 == false || blocks->blocknum18 == 8 && ironpick == true && touched18 && blocktouched18 == false || blocks->blocknum18 == 8 && ironpick2 == true && touched2nd18 && blocktouched18 == false) {
		SDL_DestroyTexture(blocks->block_18);
		howmanybroken += 1;
		blocks->block_18 = nullptr;
		blocktouched18 = true;
	}
	else if (blocks->blocknum18 == 5 && coalpick == true && touched18 && blocktouched18 == false || blocks->blocknum18 == 5 && coalpick2 == true && touched2nd18 && blocktouched18 == false || blocks->blocknum18 == 9 && coalpick == true && touched18 && blocktouched18 == false || blocks->blocknum18 == 9 && coalpick2 == true && touched2nd18 && blocktouched18 == false) {
		SDL_DestroyTexture(blocks->block_18);
		howmanybroken += 1;
		blocks->block_18 = nullptr;
		blocktouched18 = true;
	}
	else if (blocks->blocknum18 == 6 && rubypick == true && touched2nd18 && blocktouched18 == false) {
		SDL_DestroyTexture(blocks->block_18);
		howmanybroken += 1;
		blocks->block_18 = nullptr;
		blocktouched18 = true;
	}
	if (blocks->blocknum19 == 0 && shovel == true && touched19 && blocktouched19 == false || blocks->blocknum19 == 0 && shovel2 == true && touched2nd19 && blocktouched19 == false) {
		SDL_DestroyTexture(blocks->block_19);
		howmanybroken += 1;
		blocks->block_19 = nullptr;
		blocktouched19 = true;
	}
	else if (blocks->blocknum19 == 1 && drill == true && touched19 && blocktouched19 == false || blocks->blocknum19 == 1 && drill2 == true && touched2nd19 && blocktouched19 == false) {
		SDL_DestroyTexture(blocks->block_19);
		howmanybroken += 1;
		blocks->block_19 = nullptr;
		blocktouched19 = true;
	}
	else if (blocks->blocknum19 == 2 && diamondpick == true && touched19 && blocktouched19 == false) {
		SDL_DestroyTexture(blocks->block_19);
		howmanybroken += 1;
		blocks->block_19 = nullptr;
		blocktouched19 = true;
	}
	else if (blocks->blocknum19 == 3 && goldpick == true && touched19 && blocktouched19 == false || blocks->blocknum19 == 3 && goldpick2 == true && touched2nd19 && blocktouched19 == false || blocks->blocknum19 == 7 && goldpick == true && touched19 && blocktouched19 == false || blocks->blocknum19 == 7 && goldpick2 == true && touched2nd19 && blocktouched19 == false || blocks->blocknum19 == 10 && goldpick == true && touched19 && blocktouched19 == false || blocks->blocknum19 == 10 && goldpick2 == true && touched2nd19 && blocktouched19 == false) {
		SDL_DestroyTexture(blocks->block_19);
		howmanybroken += 1;
		blocks->block_19 = nullptr;
		blocktouched19 = true;
	}
	else if (blocks->blocknum19 == 4 && ironpick == true && touched19 && blocktouched19 == false || blocks->blocknum19 == 4 && ironpick2 == true && touched2nd19 && blocktouched19 == false || blocks->blocknum19 == 8 && ironpick == true && touched19 && blocktouched19 == false || blocks->blocknum19 == 8 && ironpick2 == true && touched2nd19 && blocktouched19 == false) {
		SDL_DestroyTexture(blocks->block_19);
		howmanybroken += 1;
		blocks->block_19 = nullptr;
		blocktouched19 = true;
	}
	else if (blocks->blocknum19 == 5 && coalpick == true && touched19 && blocktouched19 == false || blocks->blocknum19 == 5 && coalpick2 == true && touched2nd19 && blocktouched19 == false || blocks->blocknum19 == 9 && coalpick == true && touched19 && blocktouched19 == false || blocks->blocknum19 == 9 && coalpick2 == true && touched2nd19 && blocktouched19 == false) {
		SDL_DestroyTexture(blocks->block_19);
		howmanybroken += 1;
		blocks->block_19 = nullptr;
		blocktouched19 = true;
	}
	else if (blocks->blocknum19 == 6 && rubypick == true && touched2nd19 && blocktouched19 == false) {
		SDL_DestroyTexture(blocks->block_19);
		howmanybroken += 1;
		blocks->block_19 = nullptr;
		blocktouched19 = true;
	}
	if (blocks->blocknum20 == 0 && shovel == true && touched20 && blocktouched20 == false || blocks->blocknum20 == 0 && shovel2 == true && touched2nd20 && blocktouched20 == false) {
		SDL_DestroyTexture(blocks->block_20);
		howmanybroken += 1;
		blocks->block_20 = nullptr;
		blocktouched20 = true;
	}
	else if (blocks->blocknum20 == 1 && drill == true && touched20 && blocktouched20 == false || blocks->blocknum20 == 1 && drill2 == true && touched2nd20 && blocktouched20 == false) {
		SDL_DestroyTexture(blocks->block_20);
		howmanybroken += 1;
		blocks->block_20 = nullptr;
		blocktouched20 = true;
	}
	else if (blocks->blocknum20 == 2 && diamondpick == true && touched20 && blocktouched20 == false) {
		SDL_DestroyTexture(blocks->block_20);
		howmanybroken += 1;
		blocks->block_20 = nullptr;
		blocktouched20 = true;
	}
	else if (blocks->blocknum20 == 3 && goldpick == true && touched20 && blocktouched20 == false || blocks->blocknum20 == 3 && goldpick2 == true && touched2nd20 && blocktouched20 == false || blocks->blocknum20 == 7 && goldpick == true && touched20 && blocktouched20 == false || blocks->blocknum20 == 7 && goldpick2 == true && touched2nd20 && blocktouched20 == false || blocks->blocknum20 == 10 && goldpick == true && touched20 && blocktouched20 == false || blocks->blocknum20 == 10 && goldpick2 == true && touched2nd20 && blocktouched20 == false) {
		SDL_DestroyTexture(blocks->block_20);
		howmanybroken += 1;
		blocks->block_20 = nullptr;
		blocktouched20 = true;
	}
	else if (blocks->blocknum20 == 4 && ironpick == true && touched20 && blocktouched20 == false || blocks->blocknum20 == 4 && ironpick2 == true && touched2nd20 && blocktouched20 == false || blocks->blocknum20 == 8 && ironpick == true && touched20 && blocktouched20 == false || blocks->blocknum20 == 8 && ironpick2 == true && touched2nd20 && blocktouched20 == false) {
		SDL_DestroyTexture(blocks->block_20);
		howmanybroken += 1;
		blocks->block_20 = nullptr;
		blocktouched20 = true;
	}
	else if (blocks->blocknum20 == 5 && coalpick == true && touched20 && blocktouched20 == false || blocks->blocknum20 == 5 && coalpick2 == true && touched2nd20 && blocktouched20 == false || blocks->blocknum20 == 9 && coalpick == true && touched20 && blocktouched20 == false || blocks->blocknum20 == 9 && coalpick2 == true && touched2nd20 && blocktouched20 == false) {
		SDL_DestroyTexture(blocks->block_20);
		howmanybroken += 1;
		blocks->block_20 = nullptr;
		blocktouched20 = true;
	}
	else if (blocks->blocknum20 == 6 && rubypick == true && touched2nd20 && blocktouched20 == false) {
		SDL_DestroyTexture(blocks->block_20);
		howmanybroken += 1;
		blocks->block_20 = nullptr;
		blocktouched20 = true;
	}
	if (blocks->blocknum21 == 0 && shovel == true && touched21 && blocktouched21 == false || blocks->blocknum21 == 0 && shovel2 == true && touched2nd21 && blocktouched21 == false) {
		SDL_DestroyTexture(blocks->block_21);
		howmanybroken += 1;
		blocks->block_21 = nullptr;
		blocktouched21 = true;
	}
	else if (blocks->blocknum21 == 1 && drill == true && touched21 && blocktouched21 == false || blocks->blocknum21 == 1 && drill2 == true && touched2nd21 && blocktouched21 == false) {
		SDL_DestroyTexture(blocks->block_21);
		howmanybroken += 1;
		blocks->block_21 = nullptr;
		blocktouched21 = true;
	}
	else if (blocks->blocknum21 == 2 && diamondpick == true && touched21 && blocktouched21 == false) {
		SDL_DestroyTexture(blocks->block_21);
		howmanybroken += 1;
		blocks->block_21 = nullptr;
		blocktouched21 = true;
	}
	else if (blocks->blocknum21 == 3 && goldpick == true && touched21 && blocktouched21 == false || blocks->blocknum21 == 3 && goldpick2 == true && touched2nd21 && blocktouched21 == false || blocks->blocknum21 == 7 && goldpick == true && touched21 && blocktouched21 == false || blocks->blocknum21 == 7 && goldpick2 == true && touched2nd21 && blocktouched21 == false || blocks->blocknum21 == 10 && goldpick == true && touched21 && blocktouched21 == false || blocks->blocknum21 == 10 && goldpick2 == true && touched2nd21 && blocktouched21 == false) {
		SDL_DestroyTexture(blocks->block_21);
		howmanybroken += 1;
		blocks->block_21 = nullptr;
		blocktouched21 = true;
	}
	else if (blocks->blocknum21 == 4 && ironpick == true && touched21 && blocktouched21 == false || blocks->blocknum21 == 4 && ironpick2 == true && touched2nd21 && blocktouched21 == false || blocks->blocknum21 == 8 && ironpick == true && touched21 && blocktouched21 == false || blocks->blocknum21 == 8 && ironpick2 == true && touched2nd21 && blocktouched21 == false) {
		SDL_DestroyTexture(blocks->block_21);
		howmanybroken += 1;
		blocks->block_21 = nullptr;
		blocktouched21 = true;
	}
	else if (blocks->blocknum21 == 5 && coalpick == true && touched21 && blocktouched21 == false || blocks->blocknum21 == 5 && coalpick2 == true && touched2nd21 && blocktouched21 == false || blocks->blocknum21 == 9 && coalpick == true && touched21 && blocktouched21 == false || blocks->blocknum21 == 9 && coalpick2 == true && touched2nd21 && blocktouched21 == false) {
		SDL_DestroyTexture(blocks->block_21);
		howmanybroken += 1;
		blocks->block_21 = nullptr;
		blocktouched21 = true;
	}
	else if (blocks->blocknum21 == 6 && rubypick == true && touched2nd21 && blocktouched21 == false) {
		SDL_DestroyTexture(blocks->block_21);
		howmanybroken += 1;
		blocks->block_21 = nullptr;
		blocktouched21 = true;
	}
	if (blocks->blocknum22 == 0 && shovel == true && touched22 && blocktouched22 == false || blocks->blocknum22 == 0 && shovel2 == true && touched2nd22 && blocktouched22 == false) {
		SDL_DestroyTexture(blocks->block_22);
		howmanybroken += 1;
		blocks->block_22 = nullptr;
		blocktouched22 = true;
	}
	else if (blocks->blocknum22 == 1 && drill == true && touched22 && blocktouched22 == false || blocks->blocknum22 == 1 && drill2 == true && touched2nd22 && blocktouched22 == false) {
		SDL_DestroyTexture(blocks->block_22);
		howmanybroken += 1;
		blocks->block_22 = nullptr;
		blocktouched22 = true;
	}
	else if (blocks->blocknum22 == 2 && diamondpick == true && touched22 && blocktouched22 == false) {
		SDL_DestroyTexture(blocks->block_22);
		howmanybroken += 1;
		blocks->block_22 = nullptr;
		blocktouched22 = true;
	}
	else if (blocks->blocknum22 == 3 && goldpick == true && touched22 && blocktouched22 == false || blocks->blocknum22 == 3 && goldpick2 == true && touched2nd22 && blocktouched22 == false || blocks->blocknum22 == 7 && goldpick == true && touched22 && blocktouched22 == false || blocks->blocknum22 == 7 && goldpick2 == true && touched2nd22 && blocktouched22 == false || blocks->blocknum22 == 10 && goldpick == true && touched22 && blocktouched22 == false || blocks->blocknum22 == 10 && goldpick2 == true && touched2nd22 && blocktouched22 == false) {
		SDL_DestroyTexture(blocks->block_22);
		howmanybroken += 1;
		blocks->block_22 = nullptr;
		blocktouched22 = true;
	}
	else if (blocks->blocknum22 == 4 && ironpick == true && touched22 && blocktouched22 == false || blocks->blocknum22 == 4 && ironpick2 == true && touched2nd22 && blocktouched22 == false || blocks->blocknum22 == 8 && ironpick == true && touched22 && blocktouched22 == false || blocks->blocknum22 == 8 && ironpick2 == true && touched2nd22 && blocktouched22 == false) {
		SDL_DestroyTexture(blocks->block_22);
		howmanybroken += 1;
		blocks->block_22 = nullptr;
		blocktouched22 = true;
	}
	else if (blocks->blocknum22 == 5 && coalpick == true && touched22 && blocktouched22 == false || blocks->blocknum22 == 5 && coalpick2 == true && touched2nd22 && blocktouched22 == false || blocks->blocknum22 == 9 && coalpick == true && touched22 && blocktouched22 == false || blocks->blocknum22 == 9 && coalpick2 == true && touched2nd22 && blocktouched22 == false) {
		SDL_DestroyTexture(blocks->block_22);
		howmanybroken += 1;
		blocks->block_22 = nullptr;
		blocktouched22 = true;
	}
	else if (blocks->blocknum22 == 6 && rubypick == true && touched2nd22 && blocktouched22 == false) {
		SDL_DestroyTexture(blocks->block_22);
		howmanybroken += 1;
		blocks->block_22 = nullptr;
		blocktouched22 = true;
	}
	if (blocks->blocknum23 == 0 && shovel == true && touched23 && blocktouched23 == false || blocks->blocknum23 == 0 && shovel2 == true && touched2nd23 && blocktouched23 == false) {
		SDL_DestroyTexture(blocks->block_23);
		howmanybroken += 1;
		blocks->block_23 = nullptr;
		blocktouched23 = true;
	}
	else if (blocks->blocknum23 == 1 && drill == true && touched23 && blocktouched23 == false || blocks->blocknum23 == 1 && drill2 == true && touched2nd23 && blocktouched23 == false) {
		SDL_DestroyTexture(blocks->block_23);
		howmanybroken += 1;
		blocks->block_23 = nullptr;
		blocktouched23 = true;
	}
	else if (blocks->blocknum23 == 2 && diamondpick == true && touched23 && blocktouched23 == false) {
		SDL_DestroyTexture(blocks->block_23);
		howmanybroken += 1;
		blocks->block_23 = nullptr;
		blocktouched23 = true;
	}
	else if (blocks->blocknum23 == 3 && goldpick == true && touched23 && blocktouched23 == false || blocks->blocknum23 == 3 && goldpick2 == true && touched2nd23 && blocktouched23 == false || blocks->blocknum23 == 7 && goldpick == true && touched23 && blocktouched23 == false || blocks->blocknum23 == 7 && goldpick2 == true && touched2nd23 && blocktouched23 == false || blocks->blocknum23 == 10 && goldpick == true && touched23 && blocktouched23 == false || blocks->blocknum23 == 10 && goldpick2 == true && touched2nd23 && blocktouched23 == false) {
		SDL_DestroyTexture(blocks->block_23);
		howmanybroken += 1;
		blocks->block_23 = nullptr;
		blocktouched23 = true;
	}
	else if (blocks->blocknum23 == 4 && ironpick == true && touched23 && blocktouched23 == false || blocks->blocknum23 == 4 && ironpick2 == true && touched2nd23 && blocktouched23 == false || blocks->blocknum23 == 8 && ironpick == true && touched23 && blocktouched23 == false || blocks->blocknum23 == 8 && ironpick2 == true && touched2nd23 && blocktouched23 == false) {
		SDL_DestroyTexture(blocks->block_23);
		howmanybroken += 1;
		blocks->block_23 = nullptr;
		blocktouched23 = true;
	}
	else if (blocks->blocknum23 == 5 && coalpick == true && touched23 && blocktouched23 == false || blocks->blocknum23 == 5 && coalpick2 == true && touched2nd23 && blocktouched23 == false || blocks->blocknum23 == 9 && coalpick == true && touched23 && blocktouched23 == false || blocks->blocknum23 == 9 && coalpick2 == true && touched2nd23 && blocktouched23 == false) {
		SDL_DestroyTexture(blocks->block_23);
		howmanybroken += 1;
		blocks->block_23 = nullptr;
		blocktouched23 = true;
	}
	else if (blocks->blocknum23 == 6 && rubypick == true && touched2nd23 && blocktouched23 == false) {
		SDL_DestroyTexture(blocks->block_23);
		howmanybroken += 1;
		blocks->block_23 = nullptr;
		blocktouched23 = true;
	}
	if (blocks->blocknum24 == 0 && shovel == true && touched24 && blocktouched24 == false || blocks->blocknum24 == 0 && shovel2 == true && touched2nd24 && blocktouched24 == false) {
		SDL_DestroyTexture(blocks->block_24);
		howmanybroken += 1;
		blocks->block_24 = nullptr;
		blocktouched24 = true;
	}
	else if (blocks->blocknum24 == 1 && drill == true && touched24 && blocktouched24 == false || blocks->blocknum24 == 1 && drill2 == true && touched2nd24 && blocktouched24 == false) {
		SDL_DestroyTexture(blocks->block_24);
		howmanybroken += 1;
		blocks->block_24 = nullptr;
		blocktouched24 = true;
	}
	else if (blocks->blocknum24 == 2 && diamondpick == true && touched24 && blocktouched24 == false) {
		SDL_DestroyTexture(blocks->block_24);
		howmanybroken += 1;
		blocks->block_24 = nullptr;
		blocktouched24 = true;
	}
	else if (blocks->blocknum24 == 3 && goldpick == true && touched24 && blocktouched24 == false || blocks->blocknum24 == 3 && goldpick2 == true && touched2nd24 && blocktouched24 == false || blocks->blocknum24 == 7 && goldpick == true && touched24 && blocktouched24 == false || blocks->blocknum24 == 7 && goldpick2 == true && touched2nd24 && blocktouched24 == false || blocks->blocknum24 == 10 && goldpick == true && touched24 && blocktouched24 == false || blocks->blocknum24 == 10 && goldpick2 == true && touched2nd24 && blocktouched24 == false) {
		SDL_DestroyTexture(blocks->block_24);
		howmanybroken += 1;
		blocks->block_24 = nullptr;
		blocktouched24 = true;
	}
	else if (blocks->blocknum24 == 4 && ironpick == true && touched24 && blocktouched24 == false || blocks->blocknum24 == 4 && ironpick2 == true && touched2nd24 && blocktouched24 == false || blocks->blocknum24 == 8 && ironpick == true && touched24 && blocktouched24 == false || blocks->blocknum24 == 8 && ironpick2 == true && touched2nd24 && blocktouched24 == false) {
		SDL_DestroyTexture(blocks->block_24);
		howmanybroken += 1;
		blocks->block_24 = nullptr;
		blocktouched24 = true;
	}
	else if (blocks->blocknum24 == 5 && coalpick == true && touched24 && blocktouched24 == false || blocks->blocknum24 == 5 && coalpick2 == true && touched2nd24 && blocktouched24 == false || blocks->blocknum24 == 9 && coalpick == true && touched24 && blocktouched24 == false || blocks->blocknum24 == 9 && coalpick2 == true && touched2nd24 && blocktouched24 == false) {
		SDL_DestroyTexture(blocks->block_24);
		howmanybroken += 1;
		blocks->block_24 = nullptr;
		blocktouched24 = true;
	}
	else if (blocks->blocknum24 == 6 && rubypick == true && touched2nd24 && blocktouched24 == false) {
		SDL_DestroyTexture(blocks->block_24);
		howmanybroken += 1;
		blocks->block_24 = nullptr;
		blocktouched24 = true;
	}
	if (blocks->blocknum25 == 0 && shovel == true && touched25 && blocktouched25 == false || blocks->blocknum25 == 0 && shovel2 == true && touched2nd25 && blocktouched25 == false) {
		SDL_DestroyTexture(blocks->block_25);
		howmanybroken += 1;
		blocks->block_25 = nullptr;
		blocktouched25 = true;
	}
	else if (blocks->blocknum25 == 1 && drill == true && touched25 && blocktouched25 == false || blocks->blocknum25 == 1 && drill2 == true && touched2nd25 && blocktouched25 == false) {
		SDL_DestroyTexture(blocks->block_25);
		howmanybroken += 1;
		blocks->block_25 = nullptr;
		blocktouched25 = true;
	}
	else if (blocks->blocknum25 == 2 && diamondpick == true && touched25 && blocktouched25 == false) {
		SDL_DestroyTexture(blocks->block_25);
		howmanybroken += 1;
		blocks->block_25 = nullptr;
		blocktouched25 = true;
	}
	else if (blocks->blocknum25 == 3 && goldpick == true && touched25 && blocktouched25 == false || blocks->blocknum25 == 3 && goldpick2 == true && touched2nd25 && blocktouched25 == false || blocks->blocknum25 == 7 && goldpick == true && touched25 && blocktouched25 == false || blocks->blocknum25 == 7 && goldpick2 == true && touched2nd25 && blocktouched25 == false || blocks->blocknum25 == 10 && goldpick == true && touched25 && blocktouched25 == false || blocks->blocknum25 == 10 && goldpick2 == true && touched2nd25 && blocktouched25 == false) {
		SDL_DestroyTexture(blocks->block_25);
		howmanybroken += 1;
		blocks->block_25 = nullptr;
		blocktouched25 = true;
	}
	else if (blocks->blocknum25 == 4 && ironpick == true && touched25 && blocktouched25 == false || blocks->blocknum25 == 4 && ironpick2 == true && touched2nd25 && blocktouched25 == false || blocks->blocknum25 == 8 && ironpick == true && touched25 && blocktouched25 == false || blocks->blocknum25 == 8 && ironpick2 == true && touched2nd25 && blocktouched25 == false) {
		SDL_DestroyTexture(blocks->block_25);
		howmanybroken += 1;
		blocks->block_25 = nullptr;
		blocktouched25 = true;
	}
	else if (blocks->blocknum25 == 5 && coalpick == true && touched25 && blocktouched25 == false || blocks->blocknum25 == 5 && coalpick2 == true && touched2nd25 && blocktouched25 == false || blocks->blocknum25 == 9 && coalpick == true && touched25 && blocktouched25 == false || blocks->blocknum25 == 9 && coalpick2 == true && touched2nd25 && blocktouched25 == false) {
		SDL_DestroyTexture(blocks->block_25);
		howmanybroken += 1;
		blocks->block_25 = nullptr;
		blocktouched25 = true;
	}
	else if (blocks->blocknum25 == 6 && rubypick == true && touched2nd25 && blocktouched25 == false) {
		SDL_DestroyTexture(blocks->block_25);
		howmanybroken += 1;
		blocks->block_25 = nullptr;
		blocktouched25 = true;
	}
	if (blocks->blocknum26 == 0 && shovel == true && touched26 && blocktouched26 == false || blocks->blocknum26 == 0 && shovel2 == true && touched2nd26 && blocktouched26 == false) {
		SDL_DestroyTexture(blocks->block_26);
		howmanybroken += 1;
		blocks->block_26 = nullptr;
		blocktouched26 = true;
	}
	else if (blocks->blocknum26 == 1 && drill == true && touched26 && blocktouched26 == false || blocks->blocknum26 == 1 && drill2 == true && touched2nd26 && blocktouched26 == false) {
		SDL_DestroyTexture(blocks->block_26);
		howmanybroken += 1;
		blocks->block_26 = nullptr;
		blocktouched26 = true;
	}
	else if (blocks->blocknum26 == 2 && diamondpick == true && touched26 && blocktouched26 == false) {
		SDL_DestroyTexture(blocks->block_26);
		howmanybroken += 1;
		blocks->block_26 = nullptr;
		blocktouched26 = true;
	}
	else if (blocks->blocknum26 == 3 && goldpick == true && touched26 && blocktouched26 == false || blocks->blocknum26 == 3 && goldpick2 == true && touched2nd26 && blocktouched26 == false || blocks->blocknum26 == 7 && goldpick == true && touched26 && blocktouched26 == false || blocks->blocknum26 == 7 && goldpick2 == true && touched2nd26 && blocktouched26 == false || blocks->blocknum26 == 10 && goldpick == true && touched26 && blocktouched26 == false || blocks->blocknum26 == 10 && goldpick2 == true && touched2nd26 && blocktouched26 == false) {
		SDL_DestroyTexture(blocks->block_26);
		howmanybroken += 1;
		blocks->block_26 = nullptr;
		blocktouched26 = true;
	}
	else if (blocks->blocknum26 == 4 && ironpick == true && touched26 && blocktouched26 == false || blocks->blocknum26 == 4 && ironpick2 == true && touched2nd26 && blocktouched26 == false || blocks->blocknum26 == 8 && ironpick == true && touched26 && blocktouched26 == false || blocks->blocknum26 == 8 && ironpick2 == true && touched2nd26 && blocktouched26 == false) {
		SDL_DestroyTexture(blocks->block_26);
		howmanybroken += 1;
		blocks->block_26 = nullptr;
		blocktouched26 = true;
	}
	else if (blocks->blocknum26 == 5 && coalpick == true && touched26 && blocktouched26 == false || blocks->blocknum26 == 5 && coalpick2 == true && touched2nd26 && blocktouched26 == false || blocks->blocknum26 == 9 && coalpick == true && touched26 && blocktouched26 == false || blocks->blocknum26 == 9 && coalpick2 == true && touched2nd26 && blocktouched26 == false) {
		SDL_DestroyTexture(blocks->block_26);
		howmanybroken += 1;
		blocks->block_26 = nullptr;
		blocktouched26 = true;
	}
	else if (blocks->blocknum26 == 6 && rubypick == true && touched2nd26 && blocktouched26 == false) {
		SDL_DestroyTexture(blocks->block_26);
		howmanybroken += 1;
		blocks->block_26 = nullptr;
		blocktouched26 = true;
	}
	if (blocks->blocknum27 == 0 && shovel == true && touched27 && blocktouched27 == false || blocks->blocknum27 == 0 && shovel2 == true && touched2nd27 && blocktouched27 == false) {
		SDL_DestroyTexture(blocks->block_27);
		howmanybroken += 1;
		blocks->block_27 = nullptr;
		blocktouched27 = true;
	}
	else if (blocks->blocknum27 == 1 && drill == true && touched27 && blocktouched27 == false || blocks->blocknum27 == 1 && drill2 == true && touched2nd27 && blocktouched27 == false) {
		SDL_DestroyTexture(blocks->block_27);
		howmanybroken += 1;
		blocks->block_27 = nullptr;
		blocktouched27 = true;
	}
	else if (blocks->blocknum27 == 2 && diamondpick == true && touched27 && blocktouched27 == false) {
		SDL_DestroyTexture(blocks->block_27);
		howmanybroken += 1;
		blocks->block_27 = nullptr;
		blocktouched27 = true;
	}
	else if (blocks->blocknum27 == 3 && goldpick == true && touched27 && blocktouched27 == false || blocks->blocknum27 == 3 && goldpick2 == true && touched2nd27 && blocktouched27 == false || blocks->blocknum27 == 7 && goldpick == true && touched27 && blocktouched27 == false || blocks->blocknum27 == 7 && goldpick2 == true && touched2nd27 && blocktouched27 == false || blocks->blocknum27 == 10 && goldpick == true && touched27 && blocktouched27 == false || blocks->blocknum27 == 10 && goldpick2 == true && touched2nd27 && blocktouched27 == false) {
		SDL_DestroyTexture(blocks->block_27);
		howmanybroken += 1;
		blocks->block_27 = nullptr;
		blocktouched27 = true;
	}
	else if (blocks->blocknum27 == 4 && ironpick == true && touched27 && blocktouched27 == false || blocks->blocknum27 == 4 && ironpick2 == true && touched2nd27 && blocktouched27 == false || blocks->blocknum27 == 8 && ironpick == true && touched27 && blocktouched27 == false || blocks->blocknum27 == 8 && ironpick2 == true && touched2nd27 && blocktouched27 == false) {
		SDL_DestroyTexture(blocks->block_27);
		howmanybroken += 1;
		blocks->block_27 = nullptr;
		blocktouched27 = true;
	}
	else if (blocks->blocknum27 == 5 && coalpick == true && touched27 && blocktouched27 == false || blocks->blocknum27 == 5 && coalpick2 == true && touched2nd27 && blocktouched27 == false || blocks->blocknum27 == 9 && coalpick == true && touched27 && blocktouched27 == false || blocks->blocknum27 == 9 && coalpick2 == true && touched2nd27 && blocktouched27 == false) {
		SDL_DestroyTexture(blocks->block_27);
		howmanybroken += 1;
		blocks->block_27 = nullptr;
		blocktouched27 = true;
	}
	else if (blocks->blocknum27 == 6 && rubypick == true && touched2nd27 && blocktouched27 == false) {
		SDL_DestroyTexture(blocks->block_27);
		howmanybroken += 1;
		blocks->block_27 = nullptr;
		blocktouched27 = true;
	}
	if (blocks->blocknum28 == 0 && shovel == true && touched28 && blocktouched28 == false || blocks->blocknum28 == 0 && shovel2 == true && touched2nd28 && blocktouched28 == false) {
		SDL_DestroyTexture(blocks->block_28);
		howmanybroken += 1;
		blocks->block_28 = nullptr;
		blocktouched28 = true;
	}
	else if (blocks->blocknum28 == 1 && drill == true && touched28 && blocktouched28 == false || blocks->blocknum28 == 1 && drill2 == true && touched2nd28 && blocktouched28 == false) {
		SDL_DestroyTexture(blocks->block_28);
		howmanybroken += 1;
		blocks->block_28 = nullptr;
		blocktouched28 = true;
	}
	else if (blocks->blocknum28 == 2 && diamondpick == true && touched28 && blocktouched28 == false) {
		SDL_DestroyTexture(blocks->block_28);
		howmanybroken += 1;
		blocks->block_28 = nullptr;
		blocktouched28 = true;
	}
	else if (blocks->blocknum28 == 3 && goldpick == true && touched28 && blocktouched28 == false || blocks->blocknum28 == 3 && goldpick2 == true && touched2nd28 && blocktouched28 == false || blocks->blocknum28 == 7 && goldpick == true && touched28 && blocktouched28 == false || blocks->blocknum28 == 7 && goldpick2 == true && touched2nd28 && blocktouched28 == false || blocks->blocknum28 == 10 && goldpick == true && touched28 && blocktouched28 == false || blocks->blocknum28 == 10 && goldpick2 == true && touched2nd28 && blocktouched28 == false) {
		SDL_DestroyTexture(blocks->block_28);
		howmanybroken += 1;
		blocks->block_28 = nullptr;
		blocktouched28 = true;
	}
	else if (blocks->blocknum28 == 4 && ironpick == true && touched28 && blocktouched28 == false || blocks->blocknum28 == 4 && ironpick2 == true && touched2nd28 && blocktouched28 == false || blocks->blocknum28 == 8 && ironpick == true && touched28 && blocktouched28 == false || blocks->blocknum28 == 8 && ironpick2 == true && touched2nd28 && blocktouched28 == false) {
		SDL_DestroyTexture(blocks->block_28);
		howmanybroken += 1;
		blocks->block_28 = nullptr;
		blocktouched28 = true;
	}
	else if (blocks->blocknum28 == 5 && coalpick == true && touched28 && blocktouched28 == false || blocks->blocknum28 == 5 && coalpick2 == true && touched2nd28 && blocktouched28 == false || blocks->blocknum28 == 9 && coalpick == true && touched28 && blocktouched28 == false || blocks->blocknum28 == 9 && coalpick2 == true && touched2nd28 && blocktouched28 == false) {
		SDL_DestroyTexture(blocks->block_28);
		howmanybroken += 1;
		blocks->block_28 = nullptr;
		blocktouched28 = true;
	}
	else if (blocks->blocknum28 == 6 && rubypick == true && touched2nd28 && blocktouched28 == false) {
		SDL_DestroyTexture(blocks->block_28);
		howmanybroken += 1;
		blocks->block_28 = nullptr;
		blocktouched28 = true;
	}
	if (blocks->blocknum29 == 0 && shovel == true && touched29 && blocktouched29 == false || blocks->blocknum29 == 0 && shovel2 == true && touched2nd29 && blocktouched29 == false) {
		SDL_DestroyTexture(blocks->block_29);
		howmanybroken += 1;
		blocks->block_29 = nullptr;
		blocktouched29 = true;
	}
	else if (blocks->blocknum29 == 1 && drill == true && touched29 && blocktouched29 == false || blocks->blocknum29 == 1 && drill2 == true && touched2nd29 && blocktouched29 == false) {
		SDL_DestroyTexture(blocks->block_29);
		howmanybroken += 1;
		blocks->block_29 = nullptr;
		blocktouched29 = true;
	}
	else if (blocks->blocknum29 == 2 && diamondpick == true && touched29 && blocktouched29 == false) {
		SDL_DestroyTexture(blocks->block_29);
		howmanybroken += 1;
		blocks->block_29 = nullptr;
		blocktouched29 = true;
	}
	else if (blocks->blocknum29 == 3 && goldpick == true && touched29 && blocktouched29 == false || blocks->blocknum29 == 3 && goldpick2 == true && touched2nd29 && blocktouched29 == false || blocks->blocknum29 == 7 && goldpick == true && touched29 && blocktouched29 == false || blocks->blocknum29 == 7 && goldpick2 == true && touched2nd29 && blocktouched29 == false || blocks->blocknum29 == 10 && goldpick == true && touched29 && blocktouched29 == false || blocks->blocknum29 == 10 && goldpick2 == true && touched2nd29 && blocktouched29 == false) {
		SDL_DestroyTexture(blocks->block_29);
		howmanybroken += 1;
		blocks->block_29 = nullptr;
		blocktouched29 = true;
	}
	else if (blocks->blocknum29 == 4 && ironpick == true && touched29 && blocktouched29 == false || blocks->blocknum29 == 4 && ironpick2 == true && touched2nd29 && blocktouched29 == false || blocks->blocknum29 == 8 && ironpick == true && touched29 && blocktouched29 == false || blocks->blocknum29 == 8 && ironpick2 == true && touched2nd29 && blocktouched29 == false) {
		SDL_DestroyTexture(blocks->block_29);
		howmanybroken += 1;
		blocks->block_29 = nullptr;
		blocktouched29 = true;
	}
	else if (blocks->blocknum29 == 5 && coalpick == true && touched29 && blocktouched29 == false || blocks->blocknum29 == 5 && coalpick2 == true && touched2nd29 && blocktouched29 == false || blocks->blocknum29 == 9 && coalpick == true && touched29 && blocktouched29 == false || blocks->blocknum29 == 9 && coalpick2 == true && touched2nd29 && blocktouched29 == false) {
		SDL_DestroyTexture(blocks->block_29);
		howmanybroken += 1;
		blocks->block_29 = nullptr;
		blocktouched29 = true;
	}
	else if (blocks->blocknum29 == 6 && rubypick == true && touched2nd29 && blocktouched29 == false) {
		SDL_DestroyTexture(blocks->block_29);
		howmanybroken += 1;
		blocks->block_29 = nullptr;
		blocktouched29 = true;
	}
	if (blocks->blocknum30 == 0 && shovel == true && touched30 && blocktouched30 == false || blocks->blocknum30 == 0 && shovel2 == true && touched2nd30 && blocktouched30 == false) {
		SDL_DestroyTexture(blocks->block_30);
		howmanybroken += 1;
		blocks->block_30 = nullptr;
		blocktouched30 = true;
	}
	else if (blocks->blocknum30 == 1 && drill == true && touched30 && blocktouched30 == false || blocks->blocknum30 == 1 && drill2 == true && touched2nd30 && blocktouched30 == false) {
		SDL_DestroyTexture(blocks->block_30);
		howmanybroken += 1;
		blocks->block_30 = nullptr;
		blocktouched30 = true;
	}
	else if (blocks->blocknum30 == 2 && diamondpick == true && touched30 && blocktouched30 == false) {
		SDL_DestroyTexture(blocks->block_30);
		howmanybroken += 1;
		blocks->block_30 = nullptr;
		blocktouched30 = true;
	}
	else if (blocks->blocknum30 == 3 && goldpick == true && touched30 && blocktouched30 == false || blocks->blocknum30 == 3 && goldpick2 == true && touched2nd30 && blocktouched30 == false || blocks->blocknum30 == 7 && goldpick == true && touched30 && blocktouched30 == false || blocks->blocknum30 == 7 && goldpick2 == true && touched2nd30 && blocktouched30 == false || blocks->blocknum30 == 10 && goldpick == true && touched30 && blocktouched30 == false || blocks->blocknum30 == 10 && goldpick2 == true && touched2nd30 && blocktouched30 == false) {
		SDL_DestroyTexture(blocks->block_30);
		howmanybroken += 1;
		blocks->block_30 = nullptr;
		blocktouched30 = true;
	}
	else if (blocks->blocknum30 == 4 && ironpick == true && touched30 && blocktouched30 == false || blocks->blocknum30 == 4 && ironpick2 == true && touched2nd30 && blocktouched30 == false || blocks->blocknum30 == 8 && ironpick == true && touched30 && blocktouched30 == false || blocks->blocknum30 == 8 && ironpick2 == true && touched2nd30 && blocktouched30 == false) {
		SDL_DestroyTexture(blocks->block_30);
		howmanybroken += 1;
		blocks->block_30 = nullptr;
		blocktouched30 = true;
	}
	else if (blocks->blocknum30 == 5 && coalpick == true && touched30 && blocktouched30 == false || blocks->blocknum30 == 5 && coalpick2 == true && touched2nd30 && blocktouched30 == false || blocks->blocknum30 == 9 && coalpick == true && touched30 && blocktouched30 == false || blocks->blocknum30 == 9 && coalpick2 == true && touched2nd30 && blocktouched30 == false) {
		SDL_DestroyTexture(blocks->block_30);
		howmanybroken += 1;
		blocks->block_30 = nullptr;
		blocktouched30 = true;
	}
	else if (blocks->blocknum30 == 6 && rubypick == true && touched2nd30 && blocktouched30 == false) {
		SDL_DestroyTexture(blocks->block_30);
		howmanybroken += 1;
		blocks->block_30 = nullptr;
		blocktouched30 = true;
	}
	if (blocks->blocknum31 == 0 && shovel == true && touched31 && blocktouched31 == false || blocks->blocknum31 == 0 && shovel2 == true && touched2nd31 && blocktouched31 == false) {
		SDL_DestroyTexture(blocks->block_31);
		howmanybroken += 1;
		blocks->block_31 = nullptr;
		blocktouched31 = true;
	}
	else if (blocks->blocknum31 == 1 && drill == true && touched31 && blocktouched31 == false || blocks->blocknum31 == 1 && drill2 == true && touched2nd31 && blocktouched31 == false) {
		SDL_DestroyTexture(blocks->block_31);
		howmanybroken += 1;
		blocks->block_31 = nullptr;
		blocktouched31 = true;
	}
	else if (blocks->blocknum31 == 2 && diamondpick == true && touched31 && blocktouched31 == false) {
		SDL_DestroyTexture(blocks->block_31);
		howmanybroken += 1;
		blocks->block_31 = nullptr;
		blocktouched31 = true;
	}
	else if (blocks->blocknum31 == 3 && goldpick == true && touched31 && blocktouched31 == false || blocks->blocknum31 == 3 && goldpick2 == true && touched2nd31 && blocktouched31 == false || blocks->blocknum31 == 7 && goldpick == true && touched31 && blocktouched31 == false || blocks->blocknum31 == 7 && goldpick2 == true && touched2nd31 && blocktouched31 == false || blocks->blocknum31 == 10 && goldpick == true && touched31 && blocktouched31 == false || blocks->blocknum31 == 10 && goldpick2 == true && touched2nd31 && blocktouched31 == false) {
		SDL_DestroyTexture(blocks->block_31);
		howmanybroken += 1;
		blocks->block_31 = nullptr;
		blocktouched31 = true;
	}
	else if (blocks->blocknum31 == 4 && ironpick == true && touched31 && blocktouched31 == false || blocks->blocknum31 == 4 && ironpick2 == true && touched2nd31 && blocktouched31 == false || blocks->blocknum31 == 8 && ironpick == true && touched31 && blocktouched31 == false || blocks->blocknum31 == 8 && ironpick2 == true && touched2nd31 && blocktouched31 == false) {
		SDL_DestroyTexture(blocks->block_31);
		howmanybroken += 1;
		blocks->block_31 = nullptr;
		blocktouched31 = true;
	}
	else if (blocks->blocknum31 == 5 && coalpick == true && touched31 && blocktouched31 == false || blocks->blocknum31 == 5 && coalpick2 == true && touched2nd31 && blocktouched31 == false || blocks->blocknum31 == 9 && coalpick == true && touched31 && blocktouched31 == false || blocks->blocknum31 == 9 && coalpick2 == true && touched2nd31 && blocktouched31 == false) {
		SDL_DestroyTexture(blocks->block_31);
		howmanybroken += 1;
		blocks->block_31 = nullptr;
		blocktouched31 = true;
	}
	else if (blocks->blocknum31 == 6 && rubypick == true && touched2nd31 && blocktouched31 == false) {
		SDL_DestroyTexture(blocks->block_31);
		howmanybroken += 1;
		blocks->block_31 = nullptr;
		blocktouched31 = true;
	}
	if (blocks->blocknum32 == 0 && shovel == true && touched32 && blocktouched32 == false || blocks->blocknum32 == 0 && shovel2 == true && touched2nd32 && blocktouched32 == false) {
		SDL_DestroyTexture(blocks->block_32);
		howmanybroken += 1;
		blocks->block_32 = nullptr;
		blocktouched32 = true;
	}
	else if (blocks->blocknum32 == 1 && drill == true && touched32 && blocktouched32 == false || blocks->blocknum32 == 1 && drill2 == true && touched2nd32 && blocktouched32 == false) {
		SDL_DestroyTexture(blocks->block_32);
		howmanybroken += 1;
		blocks->block_32 = nullptr;
		blocktouched32 = true;
	}
	else if (blocks->blocknum32 == 2 && diamondpick == true && touched32 && blocktouched32 == false) {
		SDL_DestroyTexture(blocks->block_32);
		howmanybroken += 1;
		blocks->block_32 = nullptr;
		blocktouched32 = true;
	}
	else if (blocks->blocknum32 == 3 && goldpick == true && touched32 && blocktouched32 == false || blocks->blocknum32 == 3 && goldpick2 == true && touched2nd32 && blocktouched32 == false || blocks->blocknum32 == 7 && goldpick == true && touched32 && blocktouched32 == false || blocks->blocknum32 == 7 && goldpick2 == true && touched2nd32 && blocktouched32 == false || blocks->blocknum32 == 10 && goldpick == true && touched32 && blocktouched32 == false || blocks->blocknum32 == 10 && goldpick2 == true && touched2nd32 && blocktouched32 == false) {
		SDL_DestroyTexture(blocks->block_32);
		howmanybroken += 1;
		blocks->block_32 = nullptr;
		blocktouched32 = true;
	}
	else if (blocks->blocknum32 == 4 && ironpick == true && touched32 && blocktouched32 == false || blocks->blocknum32 == 4 && ironpick2 == true && touched2nd32 && blocktouched32 == false || blocks->blocknum32 == 8 && ironpick == true && touched32 && blocktouched32 == false || blocks->blocknum32 == 8 && ironpick2 == true && touched2nd32 && blocktouched32 == false) {
		SDL_DestroyTexture(blocks->block_32);
		howmanybroken += 1;
		blocks->block_32 = nullptr;
		blocktouched32 = true;
	}
	else if (blocks->blocknum32 == 5 && coalpick == true && touched32 && blocktouched32 == false || blocks->blocknum32 == 5 && coalpick2 == true && touched2nd32 && blocktouched32 == false || blocks->blocknum32 == 9 && coalpick == true && touched32 && blocktouched32 == false || blocks->blocknum32 == 9 && coalpick2 == true && touched2nd32 && blocktouched32 == false) {
		SDL_DestroyTexture(blocks->block_32);
		howmanybroken += 1;
		blocks->block_32 = nullptr;
		blocktouched32 = true;
	}
	else if (blocks->blocknum32 == 6 && rubypick == true && touched2nd32 && blocktouched32 == false) {
		SDL_DestroyTexture(blocks->block_32);
		howmanybroken += 1;
		blocks->block_32 = nullptr;
		blocktouched32 = true;
	}
	if (blocks->blocknum33 == 0 && shovel == true && touched33 && blocktouched33 == false || blocks->blocknum33 == 0 && shovel2 == true && touched2nd33 && blocktouched33 == false) {
		SDL_DestroyTexture(blocks->block_33);
		howmanybroken += 1;
		blocks->block_33 = nullptr;
		blocktouched33 = true;
	}
	else if (blocks->blocknum33 == 1 && drill == true && touched33 && blocktouched33 == false || blocks->blocknum33 == 1 && drill2 == true && touched2nd33 && blocktouched33 == false) {
		SDL_DestroyTexture(blocks->block_33);
		howmanybroken += 1;
		blocks->block_33 = nullptr;
		blocktouched33 = true;
	}
	else if (blocks->blocknum33 == 2 && diamondpick == true && touched33 && blocktouched33 == false) {
		SDL_DestroyTexture(blocks->block_33);
		howmanybroken += 1;
		blocks->block_33 = nullptr;
		blocktouched33 = true;
	}
	else if (blocks->blocknum33 == 3 && goldpick == true && touched33 && blocktouched33 == false || blocks->blocknum33 == 3 && goldpick2 == true && touched2nd33 && blocktouched33 == false || blocks->blocknum33 == 7 && goldpick == true && touched33 && blocktouched33 == false || blocks->blocknum33 == 7 && goldpick2 == true && touched2nd33 && blocktouched33 == false || blocks->blocknum33 == 10 && goldpick == true && touched33 && blocktouched33 == false || blocks->blocknum33 == 10 && goldpick2 == true && touched2nd33 && blocktouched33 == false) {
		SDL_DestroyTexture(blocks->block_33);
		howmanybroken += 1;
		blocks->block_33 = nullptr;
		blocktouched33 = true;
	}
	else if (blocks->blocknum33 == 4 && ironpick == true && touched33 && blocktouched33 == false || blocks->blocknum33 == 4 && ironpick2 == true && touched2nd33 && blocktouched33 == false || blocks->blocknum33 == 8 && ironpick == true && touched33 && blocktouched33 == false || blocks->blocknum33 == 8 && ironpick2 == true && touched2nd33 && blocktouched33 == false) {
		SDL_DestroyTexture(blocks->block_33);
		howmanybroken += 1;
		blocks->block_33 = nullptr;
		blocktouched33 = true;
	}
	else if (blocks->blocknum33 == 5 && coalpick == true && touched33 && blocktouched33 == false || blocks->blocknum33 == 5 && coalpick2 == true && touched2nd33 && blocktouched33 == false || blocks->blocknum33 == 9 && coalpick == true && touched33 && blocktouched33 == false || blocks->blocknum33 == 9 && coalpick2 == true && touched2nd33 && blocktouched33 == false) {
		SDL_DestroyTexture(blocks->block_33);
		howmanybroken += 1;
		blocks->block_33 = nullptr;
		blocktouched33 = true;
	}
	else if (blocks->blocknum33 == 6 && rubypick == true && touched2nd33 && blocktouched33 == false) {
		SDL_DestroyTexture(blocks->block_33);
		howmanybroken += 1;
		blocks->block_33 = nullptr;
		blocktouched33 = true;
	}
	if (blocks->blocknum34 == 0 && shovel == true && touched34 && blocktouched34 == false || blocks->blocknum34 == 0 && shovel2 == true && touched2nd34 && blocktouched34 == false) {
		SDL_DestroyTexture(blocks->block_34);
		howmanybroken += 1;
		blocks->block_34 = nullptr;
		blocktouched34 = true;
	}
	else if (blocks->blocknum34 == 1 && drill == true && touched34 && blocktouched34 == false || blocks->blocknum34 == 1 && drill2 == true && touched2nd34 && blocktouched34 == false) {
		SDL_DestroyTexture(blocks->block_34);
		howmanybroken += 1;
		blocks->block_34 = nullptr;
		blocktouched34 = true;
	}
	else if (blocks->blocknum34 == 2 && diamondpick == true && touched34 && blocktouched34 == false) {
		SDL_DestroyTexture(blocks->block_34);
		howmanybroken += 1;
		blocks->block_34 = nullptr;
		blocktouched34 = true;
	}
	else if (blocks->blocknum34 == 3 && goldpick == true && touched34 && blocktouched34 == false || blocks->blocknum34 == 3 && goldpick2 == true && touched2nd34 && blocktouched34 == false || blocks->blocknum34 == 7 && goldpick == true && touched34 && blocktouched34 == false || blocks->blocknum34 == 7 && goldpick2 == true && touched2nd34 && blocktouched34 == false || blocks->blocknum34 == 10 && goldpick == true && touched34 && blocktouched34 == false || blocks->blocknum34 == 10 && goldpick2 == true && touched2nd34 && blocktouched34 == false) {
		SDL_DestroyTexture(blocks->block_34);
		howmanybroken += 1;
		blocks->block_34 = nullptr;
		blocktouched34 = true;
	}
	else if (blocks->blocknum34 == 4 && ironpick == true && touched34 && blocktouched34 == false || blocks->blocknum34 == 4 && ironpick2 == true && touched2nd34 && blocktouched34 == false || blocks->blocknum34 == 8 && ironpick == true && touched34 && blocktouched34 == false || blocks->blocknum34 == 8 && ironpick2 == true && touched2nd34 && blocktouched34 == false) {
		SDL_DestroyTexture(blocks->block_34);
		howmanybroken += 1;
		blocks->block_34 = nullptr;
		blocktouched34 = true;
	}
	else if (blocks->blocknum34 == 5 && coalpick == true && touched34 && blocktouched34 == false || blocks->blocknum34 == 5 && coalpick2 == true && touched2nd34 && blocktouched34 == false || blocks->blocknum34 == 9 && coalpick == true && touched34 && blocktouched34 == false || blocks->blocknum34 == 9 && coalpick2 == true && touched2nd34 && blocktouched34 == false) {
		SDL_DestroyTexture(blocks->block_34);
		howmanybroken += 1;
		blocks->block_34 = nullptr;
		blocktouched34 = true;
	}
	else if (blocks->blocknum34 == 6 && rubypick == true && touched2nd34 && blocktouched34 == false) {
		SDL_DestroyTexture(blocks->block_34);
		howmanybroken += 1;
		blocks->block_34 = nullptr;
		blocktouched34 = true;
	}
	if (blocks->blocknum35 == 0 && shovel == true && touched35 && blocktouched35 == false || blocks->blocknum35 == 0 && shovel2 == true && touched2nd35 && blocktouched35 == false) {
		SDL_DestroyTexture(blocks->block_35);
		howmanybroken += 1;
		blocks->block_35 = nullptr;
		blocktouched35 = true;
	}
	else if (blocks->blocknum35 == 1 && drill == true && touched35 && blocktouched35 == false || blocks->blocknum35 == 1 && drill2 == true && touched2nd35 && blocktouched35 == false) {
		SDL_DestroyTexture(blocks->block_35);
		howmanybroken += 1;
		blocks->block_35 = nullptr;
		blocktouched35 = true;
	}
	else if (blocks->blocknum35 == 2 && diamondpick == true && touched35 && blocktouched35 == false) {
		SDL_DestroyTexture(blocks->block_35);
		howmanybroken += 1;
		blocks->block_35 = nullptr;
		blocktouched35 = true;
	}
	else if (blocks->blocknum35 == 3 && goldpick == true && touched35 && blocktouched35 == false || blocks->blocknum35 == 3 && goldpick2 == true && touched2nd35 && blocktouched35 == false || blocks->blocknum35 == 7 && goldpick == true && touched35 && blocktouched35 == false || blocks->blocknum35 == 7 && goldpick2 == true && touched2nd35 && blocktouched35 == false || blocks->blocknum35 == 10 && goldpick == true && touched35 && blocktouched35 == false || blocks->blocknum35 == 10 && goldpick2 == true && touched2nd35 && blocktouched35 == false) {
		SDL_DestroyTexture(blocks->block_35);
		howmanybroken += 1;
		blocks->block_35 = nullptr;
		blocktouched35 = true;
	}
	else if (blocks->blocknum35 == 4 && ironpick == true && touched35 && blocktouched35 == false || blocks->blocknum35 == 4 && ironpick2 == true && touched2nd35 && blocktouched35 == false || blocks->blocknum35 == 8 && ironpick == true && touched35 && blocktouched35 == false || blocks->blocknum35 == 8 && ironpick2 == true && touched2nd35 && blocktouched35 == false) {
		SDL_DestroyTexture(blocks->block_35);
		howmanybroken += 1;
		blocks->block_35 = nullptr;
		blocktouched35 = true;
	}
	else if (blocks->blocknum35 == 5 && coalpick == true && touched35 && blocktouched35 == false || blocks->blocknum35 == 5 && coalpick2 == true && touched2nd35 && blocktouched35 == false || blocks->blocknum35 == 9 && coalpick == true && touched35 && blocktouched35 == false || blocks->blocknum35 == 9 && coalpick2 == true && touched2nd35 && blocktouched35 == false) {
		SDL_DestroyTexture(blocks->block_35);
		howmanybroken += 1;
		blocks->block_35 = nullptr;
		blocktouched35 = true;
	}
	else if (blocks->blocknum35 == 6 && rubypick == true && touched2nd35 && blocktouched35 == false) {
		SDL_DestroyTexture(blocks->block_35);
		howmanybroken += 1;
		blocks->block_35 = nullptr;
		blocktouched35 = true;
	}
	if (blocks->blocknum36 == 0 && shovel == true && touched36 && blocktouched36 == false || blocks->blocknum36 == 0 && shovel2 == true && touched2nd36 && blocktouched36 == false) {
		SDL_DestroyTexture(blocks->block_36);
		howmanybroken += 1;
		blocks->block_36 = nullptr;
		blocktouched36 = true;
	}
	else if (blocks->blocknum36 == 1 && drill == true && touched36 && blocktouched36 == false || blocks->blocknum36 == 1 && drill2 == true && touched2nd36 && blocktouched36 == false) {
		SDL_DestroyTexture(blocks->block_36);
		howmanybroken += 1;
		blocks->block_36 = nullptr;
		blocktouched36 = true;
	}
	else if (blocks->blocknum36 == 2 && diamondpick == true && touched36 && blocktouched36 == false) {
		SDL_DestroyTexture(blocks->block_36);
		howmanybroken += 1;
		blocks->block_36 = nullptr;
		blocktouched36 = true;
	}
	else if (blocks->blocknum36 == 3 && goldpick == true && touched36 && blocktouched36 == false || blocks->blocknum36 == 3 && goldpick2 == true && touched2nd36 && blocktouched36 == false || blocks->blocknum36 == 7 && goldpick == true && touched36 && blocktouched36 == false || blocks->blocknum36 == 7 && goldpick2 == true && touched2nd36 && blocktouched36 == false || blocks->blocknum36 == 10 && goldpick == true && touched36 && blocktouched36 == false || blocks->blocknum36 == 10 && goldpick2 == true && touched2nd36 && blocktouched36 == false) {
		SDL_DestroyTexture(blocks->block_36);
		howmanybroken += 1;
		blocks->block_36 = nullptr;
		blocktouched36 = true;
	}
	else if (blocks->blocknum36 == 4 && ironpick == true && touched36 && blocktouched36 == false || blocks->blocknum36 == 4 && ironpick2 == true && touched2nd36 && blocktouched36 == false || blocks->blocknum36 == 8 && ironpick == true && touched36 && blocktouched36 == false || blocks->blocknum36 == 8 && ironpick2 == true && touched2nd36 && blocktouched36 == false) {
		SDL_DestroyTexture(blocks->block_36);
		howmanybroken += 1;
		blocks->block_36 = nullptr;
		blocktouched36 = true;
	}
	else if (blocks->blocknum36 == 5 && coalpick == true && touched36 && blocktouched36 == false || blocks->blocknum36 == 5 && coalpick2 == true && touched2nd36 && blocktouched36 == false || blocks->blocknum36 == 9 && coalpick == true && touched36 && blocktouched36 == false || blocks->blocknum36 == 9 && coalpick2 == true && touched2nd36 && blocktouched36 == false) {
		SDL_DestroyTexture(blocks->block_36);
		howmanybroken += 1;
		blocks->block_36 = nullptr;
		blocktouched36 = true;
	}
	else if (blocks->blocknum36 == 6 && rubypick == true && touched2nd36 && blocktouched36 == false) {
		SDL_DestroyTexture(blocks->block_36);
		howmanybroken += 1;
		blocks->block_36 = nullptr;
		blocktouched36 = true;
	}
	if (blocks->blocknum37 == 0 && shovel == true && touched37 && blocktouched37 == false || blocks->blocknum37 == 0 && shovel2 == true && touched2nd37 && blocktouched37 == false) {
		SDL_DestroyTexture(blocks->block_37);
		howmanybroken += 1;
		blocks->block_37 = nullptr;
		blocktouched37 = true;
	}
	else if (blocks->blocknum37 == 1 && drill == true && touched37 && blocktouched37 == false || blocks->blocknum37 == 1 && drill2 == true && touched2nd37 && blocktouched37 == false) {
		SDL_DestroyTexture(blocks->block_37);
		howmanybroken += 1;
		blocks->block_37 = nullptr;
		blocktouched37 = true;
	}
	else if (blocks->blocknum37 == 2 && diamondpick == true && touched37 && blocktouched37 == false) {
		SDL_DestroyTexture(blocks->block_37);
		howmanybroken += 1;
		blocks->block_37 = nullptr;
		blocktouched37 = true;
	}
	else if (blocks->blocknum37 == 3 && goldpick == true && touched37 && blocktouched37 == false || blocks->blocknum37 == 3 && goldpick2 == true && touched2nd37 && blocktouched37 == false || blocks->blocknum37 == 7 && goldpick == true && touched37 && blocktouched37 == false || blocks->blocknum37 == 7 && goldpick2 == true && touched2nd37 && blocktouched37 == false || blocks->blocknum37 == 10 && goldpick == true && touched37 && blocktouched37 == false || blocks->blocknum37 == 10 && goldpick2 == true && touched2nd37 && blocktouched37 == false) {
		SDL_DestroyTexture(blocks->block_37);
		howmanybroken += 1;
		blocks->block_37 = nullptr;
		blocktouched37 = true;
	}
	else if (blocks->blocknum37 == 4 && ironpick == true && touched37 && blocktouched37 == false || blocks->blocknum37 == 4 && ironpick2 == true && touched2nd37 && blocktouched37 == false || blocks->blocknum37 == 8 && ironpick == true && touched37 && blocktouched37 == false || blocks->blocknum37 == 8 && ironpick2 == true && touched2nd37 && blocktouched37 == false) {
		SDL_DestroyTexture(blocks->block_37);
		howmanybroken += 1;
		blocks->block_37 = nullptr;
		blocktouched37 = true;
	}
	else if (blocks->blocknum37 == 5 && coalpick == true && touched37 && blocktouched37 == false || blocks->blocknum37 == 5 && coalpick2 == true && touched2nd37 && blocktouched37 == false || blocks->blocknum37 == 9 && coalpick == true && touched37 && blocktouched37 == false || blocks->blocknum37 == 9 && coalpick2 == true && touched2nd37 && blocktouched37 == false) {
		SDL_DestroyTexture(blocks->block_37);
		howmanybroken += 1;
		blocks->block_37 = nullptr;
		blocktouched37 = true;
	}
	else if (blocks->blocknum37 == 6 && rubypick == true && touched2nd37 && blocktouched37 == false) {
		SDL_DestroyTexture(blocks->block_37);
		howmanybroken += 1;
		blocks->block_37 = nullptr;
		blocktouched37 = true;
	}
	if (blocks->blocknum38 == 0 && shovel == true && touched38 && blocktouched38 == false || blocks->blocknum38 == 0 && shovel2 == true && touched2nd38 && blocktouched38 == false) {
		SDL_DestroyTexture(blocks->block_38);
		howmanybroken += 1;
		blocks->block_38 = nullptr;
		blocktouched38 = true;
	}
	else if (blocks->blocknum38 == 1 && drill == true && touched38 && blocktouched38 == false || blocks->blocknum38 == 1 && drill2 == true && touched2nd38 && blocktouched38 == false) {
		SDL_DestroyTexture(blocks->block_38);
		howmanybroken += 1;
		blocks->block_38 = nullptr;
		blocktouched38 = true;
	}
	else if (blocks->blocknum38 == 2 && diamondpick == true && touched38 && blocktouched38 == false) {
		SDL_DestroyTexture(blocks->block_38);
		howmanybroken += 1;
		blocks->block_38 = nullptr;
		blocktouched38 = true;
	}
	else if (blocks->blocknum38 == 3 && goldpick == true && touched38 && blocktouched38 == false || blocks->blocknum38 == 3 && goldpick2 == true && touched2nd38 && blocktouched38 == false || blocks->blocknum38 == 7 && goldpick == true && touched38 && blocktouched38 == false || blocks->blocknum38 == 7 && goldpick2 == true && touched2nd38 && blocktouched38 == false || blocks->blocknum38 == 10 && goldpick == true && touched38 && blocktouched38 == false || blocks->blocknum38 == 10 && goldpick2 == true && touched2nd38 && blocktouched38 == false) {
		SDL_DestroyTexture(blocks->block_38);
		howmanybroken += 1;
		blocks->block_38 = nullptr;
		blocktouched38 = true;
	}
	else if (blocks->blocknum38 == 4 && ironpick == true && touched38 && blocktouched38 == false || blocks->blocknum38 == 4 && ironpick2 == true && touched2nd38 && blocktouched38 == false || blocks->blocknum38 == 8 && ironpick == true && touched38 && blocktouched38 == false || blocks->blocknum38 == 8 && ironpick2 == true && touched2nd38 && blocktouched38 == false) {
		SDL_DestroyTexture(blocks->block_38);
		howmanybroken += 1;
		blocks->block_38 = nullptr;
		blocktouched38 = true;
	}
	else if (blocks->blocknum38 == 5 && coalpick == true && touched38 && blocktouched38 == false || blocks->blocknum38 == 5 && coalpick2 == true && touched2nd38 && blocktouched38 == false || blocks->blocknum38 == 9 && coalpick == true && touched38 && blocktouched38 == false || blocks->blocknum38 == 9 && coalpick2 == true && touched2nd38 && blocktouched38 == false) {
		SDL_DestroyTexture(blocks->block_38);
		howmanybroken += 1;
		blocks->block_38 = nullptr;
		blocktouched38 = true;
	}
	else if (blocks->blocknum38 == 6 && rubypick == true && touched2nd38 && blocktouched38 == false) {
		SDL_DestroyTexture(blocks->block_38);
		howmanybroken += 1;
		blocks->block_38 = nullptr;
		blocktouched38 = true;
	}
	if (blocks->blocknum39 == 0 && shovel == true && touched39 && blocktouched39 == false || blocks->blocknum39 == 0 && shovel2 == true && touched2nd39 && blocktouched39 == false) {
		SDL_DestroyTexture(blocks->block_39);
		howmanybroken += 1;
		blocks->block_39 = nullptr;
		blocktouched39 = true;
	}
	else if (blocks->blocknum39 == 1 && drill == true && touched39 && blocktouched39 == false || blocks->blocknum39 == 1 && drill2 == true && touched2nd39 && blocktouched39 == false) {
		SDL_DestroyTexture(blocks->block_39);
		howmanybroken += 1;
		blocks->block_39 = nullptr;
		blocktouched39 = true;
	}
	else if (blocks->blocknum39 == 2 && diamondpick == true && touched39 && blocktouched39 == false) {
		SDL_DestroyTexture(blocks->block_39);
		howmanybroken += 1;
		blocks->block_39 = nullptr;
		blocktouched39 = true;
	}
	else if (blocks->blocknum39 == 3 && goldpick == true && touched39 && blocktouched39 == false || blocks->blocknum39 == 3 && goldpick2 == true && touched2nd39 && blocktouched39 == false || blocks->blocknum39 == 7 && goldpick == true && touched39 && blocktouched39 == false || blocks->blocknum39 == 7 && goldpick2 == true && touched2nd39 && blocktouched39 == false || blocks->blocknum39 == 10 && goldpick == true && touched39 && blocktouched39 == false || blocks->blocknum39 == 10 && goldpick2 == true && touched2nd39 && blocktouched39 == false) {
		SDL_DestroyTexture(blocks->block_39);
		howmanybroken += 1;
		blocks->block_39 = nullptr;
		blocktouched39 = true;
	}
	else if (blocks->blocknum39 == 4 && ironpick == true && touched39 && blocktouched39 == false || blocks->blocknum39 == 4 && ironpick2 == true && touched2nd39 && blocktouched39 == false || blocks->blocknum39 == 8 && ironpick == true && touched39 && blocktouched39 == false || blocks->blocknum39 == 8 && ironpick2 == true && touched2nd39 && blocktouched39 == false) {
		SDL_DestroyTexture(blocks->block_39);
		howmanybroken += 1;
		blocks->block_39 = nullptr;
		blocktouched39 = true;
	}
	else if (blocks->blocknum39 == 5 && coalpick == true && touched39 && blocktouched39 == false || blocks->blocknum39 == 5 && coalpick2 == true && touched2nd39 && blocktouched39 == false || blocks->blocknum39 == 9 && coalpick == true && touched39 && blocktouched39 == false || blocks->blocknum39 == 9 && coalpick2 == true && touched2nd39 && blocktouched39 == false) {
		SDL_DestroyTexture(blocks->block_39);
		howmanybroken += 1;
		blocks->block_39 = nullptr;
		blocktouched39 = true;
	}
	else if (blocks->blocknum39 == 6 && rubypick == true && touched2nd39 && blocktouched39 == false) {
		SDL_DestroyTexture(blocks->block_39);
		howmanybroken += 1;
		blocks->block_39 = nullptr;
		blocktouched39 = true;
	}
	if (blocks->blocknum40 == 0 && shovel == true && touched40 && blocktouched40 == false || blocks->blocknum40 == 0 && shovel2 == true && touched2nd40 && blocktouched40 == false) {
		SDL_DestroyTexture(blocks->block_40);
		howmanybroken += 1;
		blocks->block_40 = nullptr;
		blocktouched40 = true;
	}
	else if (blocks->blocknum40 == 1 && drill == true && touched40 && blocktouched40 == false || blocks->blocknum40 == 1 && drill2 == true && touched2nd40 && blocktouched40 == false) {
		SDL_DestroyTexture(blocks->block_40);
		howmanybroken += 1;
		blocks->block_40 = nullptr;
		blocktouched40 = true;
	}
	else if (blocks->blocknum40 == 2 && diamondpick == true && touched40 && blocktouched40 == false) {
		SDL_DestroyTexture(blocks->block_40);
		howmanybroken += 1;
		blocks->block_40 = nullptr;
		blocktouched40 = true;
	}
	else if (blocks->blocknum40 == 3 && goldpick == true && touched40 && blocktouched40 == false || blocks->blocknum40 == 3 && goldpick2 == true && touched2nd40 && blocktouched40 == false || blocks->blocknum40 == 7 && goldpick == true && touched40 && blocktouched40 == false || blocks->blocknum40 == 7 && goldpick2 == true && touched2nd40 && blocktouched40 == false || blocks->blocknum40 == 10 && goldpick == true && touched40 && blocktouched40 == false || blocks->blocknum40 == 10 && goldpick2 == true && touched2nd40 && blocktouched40 == false) {
		SDL_DestroyTexture(blocks->block_40);
		howmanybroken += 1;
		blocks->block_40 = nullptr;
		blocktouched40 = true;
	}
	else if (blocks->blocknum40 == 4 && ironpick == true && touched40 && blocktouched40 == false || blocks->blocknum40 == 4 && ironpick2 == true && touched2nd40 && blocktouched40 == false || blocks->blocknum40 == 8 && ironpick == true && touched40 && blocktouched40 == false || blocks->blocknum40 == 8 && ironpick2 == true && touched2nd40 && blocktouched40 == false) {
		SDL_DestroyTexture(blocks->block_40);
		howmanybroken += 1;
		blocks->block_40 = nullptr;
		blocktouched40 = true;
	}
	else if (blocks->blocknum40 == 5 && coalpick == true && touched40 && blocktouched40 == false || blocks->blocknum40 == 5 && coalpick2 == true && touched2nd40 && blocktouched40 == false || blocks->blocknum40 == 9 && coalpick == true && touched40 && blocktouched40 == false || blocks->blocknum40 == 9 && coalpick2 == true && touched2nd40 && blocktouched40 == false) {
		SDL_DestroyTexture(blocks->block_40);
		howmanybroken += 1;
		blocks->block_40 = nullptr;
		blocktouched40 = true;
	}
	else if (blocks->blocknum40 == 6 && rubypick == true && touched2nd40 && blocktouched40 == false) {
		SDL_DestroyTexture(blocks->block_40);
		howmanybroken += 1;
		blocks->block_40 = nullptr;
		blocktouched40 = true;
	}
	if (blocks->blocknum41 == 0 && shovel == true && touched41 && blocktouched41 == false || blocks->blocknum41 == 0 && shovel2 == true && touched2nd41 && blocktouched41 == false) {
		SDL_DestroyTexture(blocks->block_41);
		howmanybroken += 1;
		blocks->block_41 = nullptr;
		blocktouched41 = true;
	}
	else if (blocks->blocknum41 == 1 && drill == true && touched41 && blocktouched41 == false || blocks->blocknum41 == 1 && drill2 == true && touched2nd41 && blocktouched41 == false) {
		SDL_DestroyTexture(blocks->block_41);
		howmanybroken += 1;
		blocks->block_41 = nullptr;
		blocktouched41 = true;
	}
	else if (blocks->blocknum41 == 2 && diamondpick == true && touched41 && blocktouched41 == false) {
		SDL_DestroyTexture(blocks->block_41);
		howmanybroken += 1;
		blocks->block_41 = nullptr;
		blocktouched41 = true;
	}
	else if (blocks->blocknum41 == 3 && goldpick == true && touched41 && blocktouched41 == false || blocks->blocknum41 == 3 && goldpick2 == true && touched2nd41 && blocktouched41 == false || blocks->blocknum41 == 7 && goldpick == true && touched41 && blocktouched41 == false || blocks->blocknum41 == 7 && goldpick2 == true && touched2nd41 && blocktouched41 == false || blocks->blocknum41 == 10 && goldpick == true && touched41 && blocktouched41 == false || blocks->blocknum41 == 10 && goldpick2 == true && touched2nd41 && blocktouched41 == false) {
		SDL_DestroyTexture(blocks->block_41);
		howmanybroken += 1;
		blocks->block_41 = nullptr;
		blocktouched41 = true;
	}
	else if (blocks->blocknum41 == 4 && ironpick == true && touched41 && blocktouched41 == false || blocks->blocknum41 == 4 && ironpick2 == true && touched2nd41 && blocktouched41 == false || blocks->blocknum41 == 8 && ironpick == true && touched41 && blocktouched41 == false || blocks->blocknum41 == 8 && ironpick2 == true && touched2nd41 && blocktouched41 == false) {
		SDL_DestroyTexture(blocks->block_41);
		howmanybroken += 1;
		blocks->block_41 = nullptr;
		blocktouched41 = true;
	}
	else if (blocks->blocknum41 == 5 && coalpick == true && touched41 && blocktouched41 == false || blocks->blocknum41 == 5 && coalpick2 == true && touched2nd41 && blocktouched41 == false || blocks->blocknum41 == 9 && coalpick == true && touched41 && blocktouched41 == false || blocks->blocknum41 == 9 && coalpick2 == true && touched2nd41 && blocktouched41 == false) {
		SDL_DestroyTexture(blocks->block_41);
		howmanybroken += 1;
		blocks->block_41 = nullptr;
		blocktouched41 = true;
	}
	else if (blocks->blocknum41 == 6 && rubypick == true && touched2nd41 && blocktouched41 == false) {
		SDL_DestroyTexture(blocks->block_41);
		howmanybroken += 1;
		blocks->block_41 = nullptr;
		blocktouched41 = true;
	}
	if (blocks->blocknum42 == 0 && shovel == true && touched42 && blocktouched42 == false || blocks->blocknum42 == 0 && shovel2 == true && touched2nd42 && blocktouched42 == false) {
		SDL_DestroyTexture(blocks->block_42);
		howmanybroken += 1;
		blocks->block_42 = nullptr;
		blocktouched42 = true;
	}
	else if (blocks->blocknum42 == 1 && drill == true && touched42 && blocktouched42 == false || blocks->blocknum42 == 1 && drill2 == true && touched2nd42 && blocktouched42 == false) {
		SDL_DestroyTexture(blocks->block_42);
		howmanybroken += 1;
		blocks->block_42 = nullptr;
		blocktouched42 = true;
	}
	else if (blocks->blocknum42 == 2 && diamondpick == true && touched42 && blocktouched42 == false) {
		SDL_DestroyTexture(blocks->block_42);
		howmanybroken += 1;
		blocks->block_42 = nullptr;
		blocktouched42 = true;
	}
	else if (blocks->blocknum42 == 3 && goldpick == true && touched42 && blocktouched42 == false || blocks->blocknum42 == 3 && goldpick2 == true && touched2nd42 && blocktouched42 == false || blocks->blocknum42 == 7 && goldpick == true && touched42 && blocktouched42 == false || blocks->blocknum42 == 7 && goldpick2 == true && touched2nd42 && blocktouched42 == false || blocks->blocknum42 == 10 && goldpick == true && touched42 && blocktouched42 == false || blocks->blocknum42 == 10 && goldpick2 == true && touched2nd42 && blocktouched42 == false) {
		SDL_DestroyTexture(blocks->block_42);
		howmanybroken += 1;
		blocks->block_42 = nullptr;
		blocktouched42 = true;
	}
	else if (blocks->blocknum42 == 4 && ironpick == true && touched42 && blocktouched42 == false || blocks->blocknum42 == 4 && ironpick2 == true && touched2nd42 && blocktouched42 == false || blocks->blocknum42 == 8 && ironpick == true && touched42 && blocktouched42 == false || blocks->blocknum42 == 8 && ironpick2 == true && touched2nd42 && blocktouched42 == false) {
		SDL_DestroyTexture(blocks->block_42);
		howmanybroken += 1;
		blocks->block_42 = nullptr;
		blocktouched42 = true;
	}
	else if (blocks->blocknum42 == 5 && coalpick == true && touched42 && blocktouched42 == false || blocks->blocknum42 == 5 && coalpick2 == true && touched2nd42 && blocktouched42 == false || blocks->blocknum42 == 9 && coalpick == true && touched42 && blocktouched42 == false || blocks->blocknum42 == 9 && coalpick2 == true && touched2nd42 && blocktouched42 == false) {
		SDL_DestroyTexture(blocks->block_42);
		howmanybroken += 1;
		blocks->block_42 = nullptr;
		blocktouched42 = true;
	}
	else if (blocks->blocknum42 == 6 && rubypick == true && touched2nd42 && blocktouched42 == false) {
		SDL_DestroyTexture(blocks->block_42);
		howmanybroken += 1;
		blocks->block_42 = nullptr;
		blocktouched42 = true;
	}
	if (blocks->blocknum43 == 0 && shovel == true && touched43 && blocktouched43 == false || blocks->blocknum43 == 0 && shovel2 == true && touched2nd43 && blocktouched43 == false) {
		SDL_DestroyTexture(blocks->block_43);
		howmanybroken += 1;
		blocks->block_43 = nullptr;
		blocktouched43 = true;
	}
	else if (blocks->blocknum43 == 1 && drill == true && touched43 && blocktouched43 == false || blocks->blocknum43 == 1 && drill2 == true && touched2nd43 && blocktouched43 == false) {
		SDL_DestroyTexture(blocks->block_43);
		howmanybroken += 1;
		blocks->block_43 = nullptr;
		blocktouched43 = true;
	}
	else if (blocks->blocknum43 == 2 && diamondpick == true && touched43 && blocktouched43 == false) {
		SDL_DestroyTexture(blocks->block_43);
		howmanybroken += 1;
		blocks->block_43 = nullptr;
		blocktouched43 = true;
	}
	else if (blocks->blocknum43 == 3 && goldpick == true && touched43 && blocktouched43 == false || blocks->blocknum43 == 3 && goldpick2 == true && touched2nd43 && blocktouched43 == false || blocks->blocknum43 == 7 && goldpick == true && touched43 && blocktouched43 == false || blocks->blocknum43 == 7 && goldpick2 == true && touched2nd43 && blocktouched43 == false || blocks->blocknum43 == 10 && goldpick == true && touched43 && blocktouched43 == false || blocks->blocknum43 == 10 && goldpick2 == true && touched2nd43 && blocktouched43 == false) {
		SDL_DestroyTexture(blocks->block_43);
		howmanybroken += 1;
		blocks->block_43 = nullptr;
		blocktouched43 = true;
	}
	else if (blocks->blocknum43 == 4 && ironpick == true && touched43 && blocktouched43 == false || blocks->blocknum43 == 4 && ironpick2 == true && touched2nd43 && blocktouched43 == false || blocks->blocknum43 == 8 && ironpick == true && touched43 && blocktouched43 == false || blocks->blocknum43 == 8 && ironpick2 == true && touched2nd43 && blocktouched43 == false) {
		SDL_DestroyTexture(blocks->block_43);
		howmanybroken += 1;
		blocks->block_43 = nullptr;
		blocktouched43 = true;
	}
	else if (blocks->blocknum43 == 5 && coalpick == true && touched43 && blocktouched43 == false || blocks->blocknum43 == 5 && coalpick2 == true && touched2nd43 && blocktouched43 == false || blocks->blocknum43 == 9 && coalpick == true && touched43 && blocktouched43 == false || blocks->blocknum43 == 9 && coalpick2 == true && touched2nd43 && blocktouched43 == false) {
		SDL_DestroyTexture(blocks->block_43);
		howmanybroken += 1;
		blocks->block_43 = nullptr;
		blocktouched43 = true;
	}
	else if (blocks->blocknum43 == 6 && rubypick == true && touched2nd43 && blocktouched43 == false) {
		SDL_DestroyTexture(blocks->block_43);
		howmanybroken += 1;
		blocks->block_43 = nullptr;
		blocktouched43 = true;
	}
	if (blocks->blocknum44 == 0 && shovel == true && touched44 && blocktouched44 == false || blocks->blocknum44 == 0 && shovel2 == true && touched2nd44 && blocktouched44 == false) {
		SDL_DestroyTexture(blocks->block_44);
		howmanybroken += 1;
		blocks->block_44 = nullptr;
		blocktouched44 = true;
	}
	else if (blocks->blocknum44 == 1 && drill == true && touched44 && blocktouched44 == false || blocks->blocknum44 == 1 && drill2 == true && touched2nd44 && blocktouched44 == false) {
		SDL_DestroyTexture(blocks->block_44);
		howmanybroken += 1;
		blocks->block_44 = nullptr;
		blocktouched44 = true;
	}
	else if (blocks->blocknum44 == 2 && diamondpick == true && touched44 && blocktouched44 == false) {
		SDL_DestroyTexture(blocks->block_44);
		howmanybroken += 1;
		blocks->block_44 = nullptr;
		blocktouched44 = true;
	}
	else if (blocks->blocknum44 == 3 && goldpick == true && touched44 && blocktouched44 == false || blocks->blocknum44 == 3 && goldpick2 == true && touched2nd44 && blocktouched44 == false || blocks->blocknum44 == 7 && goldpick == true && touched44 && blocktouched44 == false || blocks->blocknum44 == 7 && goldpick2 == true && touched2nd44 && blocktouched44 == false || blocks->blocknum44 == 10 && goldpick == true && touched44 && blocktouched44 == false || blocks->blocknum44 == 10 && goldpick2 == true && touched2nd44 && blocktouched44 == false) {
		SDL_DestroyTexture(blocks->block_44);
		howmanybroken += 1;
		blocks->block_44 = nullptr;
		blocktouched44 = true;
	}
	else if (blocks->blocknum44 == 4 && ironpick == true && touched44 && blocktouched44 == false || blocks->blocknum44 == 4 && ironpick2 == true && touched2nd44 && blocktouched44 == false || blocks->blocknum44 == 8 && ironpick == true && touched44 && blocktouched44 == false || blocks->blocknum44 == 8 && ironpick2 == true && touched2nd44 && blocktouched44 == false) {
		SDL_DestroyTexture(blocks->block_44);
		howmanybroken += 1;
		blocks->block_44 = nullptr;
		blocktouched44 = true;
	}
	else if (blocks->blocknum44 == 5 && coalpick == true && touched44 && blocktouched44 == false || blocks->blocknum44 == 5 && coalpick2 == true && touched2nd44 && blocktouched44 == false || blocks->blocknum44 == 9 && coalpick == true && touched44 && blocktouched44 == false || blocks->blocknum44 == 9 && coalpick2 == true && touched2nd44 && blocktouched44 == false) {
		SDL_DestroyTexture(blocks->block_44);
		howmanybroken += 1;
		blocks->block_44 = nullptr;
		blocktouched44 = true;
	}
	else if (blocks->blocknum44 == 6 && rubypick == true && touched2nd44 && blocktouched44 == false) {
		SDL_DestroyTexture(blocks->block_44);
		howmanybroken += 1;
		blocks->block_44 = nullptr;
		blocktouched44 = true;
	}
	if (blocks->blocknum45 == 0 && shovel == true && touched45 && blocktouched45 == false || blocks->blocknum45 == 0 && shovel2 == true && touched2nd45 && blocktouched45 == false) {
		SDL_DestroyTexture(blocks->block_45);
		howmanybroken += 1;
		blocks->block_45 = nullptr;
		blocktouched45 = true;
	}
	else if (blocks->blocknum45 == 1 && drill == true && touched45 && blocktouched45 == false || blocks->blocknum45 == 1 && drill2 == true && touched2nd45 && blocktouched45 == false) {
		SDL_DestroyTexture(blocks->block_45);
		howmanybroken += 1;
		blocks->block_45 = nullptr;
		blocktouched45 = true;
	}
	else if (blocks->blocknum45 == 2 && diamondpick == true && touched45 && blocktouched45 == false) {
		SDL_DestroyTexture(blocks->block_45);
		howmanybroken += 1;
		blocks->block_45 = nullptr;
		blocktouched45 = true;
	}
	else if (blocks->blocknum45 == 3 && goldpick == true && touched45 && blocktouched45 == false || blocks->blocknum45 == 3 && goldpick2 == true && touched2nd45 && blocktouched45 == false || blocks->blocknum45 == 7 && goldpick == true && touched45 && blocktouched45 == false || blocks->blocknum45 == 7 && goldpick2 == true && touched2nd45 && blocktouched45 == false || blocks->blocknum45 == 10 && goldpick == true && touched45 && blocktouched45 == false || blocks->blocknum45 == 10 && goldpick2 == true && touched2nd45 && blocktouched45 == false) {
		SDL_DestroyTexture(blocks->block_45);
		howmanybroken += 1;
		blocks->block_45 = nullptr;
		blocktouched45 = true;
	}
	else if (blocks->blocknum45 == 4 && ironpick == true && touched45 && blocktouched45 == false || blocks->blocknum45 == 4 && ironpick2 == true && touched2nd45 && blocktouched45 == false || blocks->blocknum45 == 8 && ironpick == true && touched45 && blocktouched45 == false || blocks->blocknum45 == 8 && ironpick2 == true && touched2nd45 && blocktouched45 == false) {
		SDL_DestroyTexture(blocks->block_45);
		howmanybroken += 1;
		blocks->block_45 = nullptr;
		blocktouched45 = true;
	}
	else if (blocks->blocknum45 == 5 && coalpick == true && touched45 && blocktouched45 == false || blocks->blocknum45 == 5 && coalpick2 == true && touched2nd45 && blocktouched45 == false || blocks->blocknum45 == 9 && coalpick == true && touched45 && blocktouched45 == false || blocks->blocknum45 == 9 && coalpick2 == true && touched2nd45 && blocktouched45 == false) {
		SDL_DestroyTexture(blocks->block_45);
		howmanybroken += 1;
		blocks->block_45 = nullptr;
		blocktouched45 = true;
	}
	else if (blocks->blocknum45 == 6 && rubypick == true && touched2nd45 && blocktouched45 == false) {
		SDL_DestroyTexture(blocks->block_45);
		howmanybroken += 1;
		blocks->block_45 = nullptr;
		blocktouched45 = true;
	}
	if (blocks->blocknum46 == 0 && shovel == true && touched46 && blocktouched46 == false || blocks->blocknum46 == 0 && shovel2 == true && touched2nd46 && blocktouched46 == false) {
		SDL_DestroyTexture(blocks->block_46);
		howmanybroken += 1;
		blocks->block_46 = nullptr;
		blocktouched46 = true;
	}
	else if (blocks->blocknum46 == 1 && drill == true && touched46 && blocktouched46 == false || blocks->blocknum46 == 1 && drill2 == true && touched2nd46 && blocktouched46 == false) {
		SDL_DestroyTexture(blocks->block_46);
		howmanybroken += 1;
		blocks->block_46 = nullptr;
		blocktouched46 = true;
	}
	else if (blocks->blocknum46 == 2 && diamondpick == true && touched46 && blocktouched46 == false) {
		SDL_DestroyTexture(blocks->block_46);
		howmanybroken += 1;
		blocks->block_46 = nullptr;
		blocktouched46 = true;
	}
	else if (blocks->blocknum46 == 3 && goldpick == true && touched46 && blocktouched46 == false || blocks->blocknum46 == 3 && goldpick2 == true && touched2nd46 && blocktouched46 == false || blocks->blocknum46 == 7 && goldpick == true && touched46 && blocktouched46 == false || blocks->blocknum46 == 7 && goldpick2 == true && touched2nd46 && blocktouched46 == false || blocks->blocknum46 == 10 && goldpick == true && touched46 && blocktouched46 == false || blocks->blocknum46 == 10 && goldpick2 == true && touched2nd46 && blocktouched46 == false) {
		SDL_DestroyTexture(blocks->block_46);
		howmanybroken += 1;
		blocks->block_46 = nullptr;
		blocktouched46 = true;
	}
	else if (blocks->blocknum46 == 4 && ironpick == true && touched46 && blocktouched46 == false || blocks->blocknum46 == 4 && ironpick2 == true && touched2nd46 && blocktouched46 == false || blocks->blocknum46 == 8 && ironpick == true && touched46 && blocktouched46 == false || blocks->blocknum46 == 8 && ironpick2 == true && touched2nd46 && blocktouched46 == false) {
		SDL_DestroyTexture(blocks->block_46);
		howmanybroken += 1;
		blocks->block_46 = nullptr;
		blocktouched46 = true;
	}
	else if (blocks->blocknum46 == 5 && coalpick == true && touched46 && blocktouched46 == false || blocks->blocknum46 == 5 && coalpick2 == true && touched2nd46 && blocktouched46 == false || blocks->blocknum46 == 9 && coalpick == true && touched46 && blocktouched46 == false || blocks->blocknum46 == 9 && coalpick2 == true && touched2nd46 && blocktouched46 == false) {
		SDL_DestroyTexture(blocks->block_46);
		howmanybroken += 1;
		blocks->block_46 = nullptr;
		blocktouched46 = true;
	}
	else if (blocks->blocknum46 == 6 && rubypick == true && touched2nd46 && blocktouched46 == false) {
		SDL_DestroyTexture(blocks->block_46);
		howmanybroken += 1;
		blocks->block_46 = nullptr;
		blocktouched46 = true;
	}
	if (blocks->blocknum47 == 0 && shovel == true && touched47 && blocktouched47 == false || blocks->blocknum47 == 0 && shovel2 == true && touched2nd47 && blocktouched47 == false) {
		SDL_DestroyTexture(blocks->block_47);
		howmanybroken += 1;
		blocks->block_47 = nullptr;
		blocktouched47 = true;
	}
	else if (blocks->blocknum47 == 1 && drill == true && touched47 && blocktouched47 == false || blocks->blocknum47 == 1 && drill2 == true && touched2nd47 && blocktouched47 == false) {
		SDL_DestroyTexture(blocks->block_47);
		howmanybroken += 1;
		blocks->block_47 = nullptr;
		blocktouched47 = true;
	}
	else if (blocks->blocknum47 == 2 && diamondpick == true && touched47 && blocktouched47 == false) {
		SDL_DestroyTexture(blocks->block_47);
		howmanybroken += 1;
		blocks->block_47 = nullptr;
		blocktouched47 = true;
	}
	else if (blocks->blocknum47 == 3 && goldpick == true && touched47 && blocktouched47 == false || blocks->blocknum47 == 3 && goldpick2 == true && touched2nd47 && blocktouched47 == false || blocks->blocknum47 == 7 && goldpick == true && touched47 && blocktouched47 == false || blocks->blocknum47 == 7 && goldpick2 == true && touched2nd47 && blocktouched47 == false || blocks->blocknum47 == 10 && goldpick == true && touched47 && blocktouched47 == false || blocks->blocknum47 == 10 && goldpick2 == true && touched2nd47 && blocktouched47 == false) {
		SDL_DestroyTexture(blocks->block_47);
		howmanybroken += 1;
		blocks->block_47 = nullptr;
		blocktouched47 = true;
	}
	else if (blocks->blocknum47 == 4 && ironpick == true && touched47 && blocktouched47 == false || blocks->blocknum47 == 4 && ironpick2 == true && touched2nd47 && blocktouched47 == false || blocks->blocknum47 == 8 && ironpick == true && touched47 && blocktouched47 == false || blocks->blocknum47 == 8 && ironpick2 == true && touched2nd47 && blocktouched47 == false) {
		SDL_DestroyTexture(blocks->block_47);
		howmanybroken += 1;
		blocks->block_47 = nullptr;
		blocktouched47 = true;
	}
	else if (blocks->blocknum47 == 5 && coalpick == true && touched47 && blocktouched47 == false || blocks->blocknum47 == 5 && coalpick2 == true && touched2nd47 && blocktouched47 == false || blocks->blocknum47 == 9 && coalpick == true && touched47 && blocktouched47 == false || blocks->blocknum47 == 9 && coalpick2 == true && touched2nd47 && blocktouched47 == false) {
		SDL_DestroyTexture(blocks->block_47);
		howmanybroken += 1;
		blocks->block_47 = nullptr;
		blocktouched47 = true;
	}
	else if (blocks->blocknum47 == 6 && rubypick == true && touched2nd47 && blocktouched47 == false) {
		SDL_DestroyTexture(blocks->block_47);
		howmanybroken += 1;
		blocks->block_47 = nullptr;
		blocktouched47 = true;
	}
	if (blocks->blocknum48 == 0 && shovel == true && touched48 && blocktouched48 == false || blocks->blocknum48 == 0 && shovel2 == true && touched2nd48 && blocktouched48 == false) {
		SDL_DestroyTexture(blocks->block_48);
		howmanybroken += 1;
		blocks->block_48 = nullptr;
		blocktouched48 = true;
	}
	else if (blocks->blocknum48 == 1 && drill == true && touched48 && blocktouched48 == false || blocks->blocknum48 == 1 && drill2 == true && touched2nd48 && blocktouched48 == false) {
		SDL_DestroyTexture(blocks->block_48);
		howmanybroken += 1;
		blocks->block_48 = nullptr;
		blocktouched48 = true;
	}
	else if (blocks->blocknum48 == 2 && diamondpick == true && touched48 && blocktouched48 == false) {
		SDL_DestroyTexture(blocks->block_48);
		howmanybroken += 1;
		blocks->block_48 = nullptr;
		blocktouched48 = true;
	}
	else if (blocks->blocknum48 == 3 && goldpick == true && touched48 && blocktouched48 == false || blocks->blocknum48 == 3 && goldpick2 == true && touched2nd48 && blocktouched48 == false || blocks->blocknum48 == 7 && goldpick == true && touched48 && blocktouched48 == false || blocks->blocknum48 == 7 && goldpick2 == true && touched2nd48 && blocktouched48 == false || blocks->blocknum48 == 10 && goldpick == true && touched48 && blocktouched48 == false || blocks->blocknum48 == 10 && goldpick2 == true && touched2nd48 && blocktouched48 == false) {
		SDL_DestroyTexture(blocks->block_48);
		howmanybroken += 1;
		blocks->block_48 = nullptr;
		blocktouched48 = true;
	}
	else if (blocks->blocknum48 == 4 && ironpick == true && touched48 && blocktouched48 == false || blocks->blocknum48 == 4 && ironpick2 == true && touched2nd48 && blocktouched48 == false || blocks->blocknum48 == 8 && ironpick == true && touched48 && blocktouched48 == false || blocks->blocknum48 == 8 && ironpick2 == true && touched2nd48 && blocktouched48 == false) {
		SDL_DestroyTexture(blocks->block_48);
		howmanybroken += 1;
		blocks->block_48 = nullptr;
		blocktouched48 = true;
	}
	else if (blocks->blocknum48 == 5 && coalpick == true && touched48 && blocktouched48 == false || blocks->blocknum48 == 5 && coalpick2 == true && touched2nd48 && blocktouched48 == false || blocks->blocknum48 == 9 && coalpick == true && touched48 && blocktouched48 == false || blocks->blocknum48 == 9 && coalpick2 == true && touched2nd48 && blocktouched48 == false) {
		SDL_DestroyTexture(blocks->block_48);
		howmanybroken += 1;
		blocks->block_48 = nullptr;
		blocktouched48 = true;
	}
	else if (blocks->blocknum48 == 6 && rubypick == true && touched2nd48 && blocktouched48 == false) {
		SDL_DestroyTexture(blocks->block_48);
		howmanybroken += 1;
		blocks->block_48 = nullptr;
		blocktouched48 = true;
	}
	if (blocks->blocknum49 == 0 && shovel == true && touched49 && blocktouched49 == false || blocks->blocknum49 == 0 && shovel2 == true && touched2nd49 && blocktouched49 == false) {
		SDL_DestroyTexture(blocks->block_49);
		howmanybroken += 1;
		blocks->block_49 = nullptr;
		blocktouched49 = true;
	}
	else if (blocks->blocknum49 == 1 && drill == true && touched49 && blocktouched49 == false || blocks->blocknum49 == 1 && drill2 == true && touched2nd49 && blocktouched49 == false) {
		SDL_DestroyTexture(blocks->block_49);
		howmanybroken += 1;
		blocks->block_49 = nullptr;
		blocktouched49 = true;
	}
	else if (blocks->blocknum49 == 2 && diamondpick == true && touched49 && blocktouched49 == false) {
		SDL_DestroyTexture(blocks->block_49);
		howmanybroken += 1;
		blocks->block_49 = nullptr;
		blocktouched49 = true;
	}
	else if (blocks->blocknum49 == 3 && goldpick == true && touched49 && blocktouched49 == false || blocks->blocknum49 == 3 && goldpick2 == true && touched2nd49 && blocktouched49 == false || blocks->blocknum49 == 7 && goldpick == true && touched49 && blocktouched49 == false || blocks->blocknum49 == 7 && goldpick2 == true && touched2nd49 && blocktouched49 == false || blocks->blocknum49 == 10 && goldpick == true && touched49 && blocktouched49 == false || blocks->blocknum49 == 10 && goldpick2 == true && touched2nd49 && blocktouched49 == false) {
		SDL_DestroyTexture(blocks->block_49);
		howmanybroken += 1;
		blocks->block_49 = nullptr;
		blocktouched49 = true;
	}
	else if (blocks->blocknum49 == 4 && ironpick == true && touched49 && blocktouched49 == false || blocks->blocknum49 == 4 && ironpick2 == true && touched2nd49 && blocktouched49 == false || blocks->blocknum49 == 8 && ironpick == true && touched49 && blocktouched49 == false || blocks->blocknum49 == 8 && ironpick2 == true && touched2nd49 && blocktouched49 == false) {
		SDL_DestroyTexture(blocks->block_49);
		howmanybroken += 1;
		blocks->block_49 = nullptr;
		blocktouched49 = true;
	}
	else if (blocks->blocknum49 == 5 && coalpick == true && touched49 && blocktouched49 == false || blocks->blocknum49 == 5 && coalpick2 == true && touched2nd49 && blocktouched49 == false || blocks->blocknum49 == 9 && coalpick == true && touched49 && blocktouched49 == false || blocks->blocknum49 == 9 && coalpick2 == true && touched2nd49 && blocktouched49 == false) {
		SDL_DestroyTexture(blocks->block_49);
		howmanybroken += 1;
		blocks->block_49 = nullptr;
		blocktouched49 = true;
	}
	else if (blocks->blocknum49 == 6 && rubypick == true && touched2nd49 && blocktouched49 == false) {
		SDL_DestroyTexture(blocks->block_49);
		howmanybroken += 1;
		blocks->block_49 = nullptr;
		blocktouched49 = true;
	}
	if (blocks->blocknum50 == 0 && shovel == true && touched50 && blocktouched50 == false || blocks->blocknum50 == 0 && shovel2 == true && touched2nd50 && blocktouched50 == false) {
		SDL_DestroyTexture(blocks->block_50);
		howmanybroken += 1;
		blocks->block_50 = nullptr;
		blocktouched50 = true;
	}
	else if (blocks->blocknum50 == 1 && drill == true && touched50 && blocktouched50 == false || blocks->blocknum50 == 1 && drill2 == true && touched2nd50 && blocktouched50 == false) {
		SDL_DestroyTexture(blocks->block_50);
		howmanybroken += 1;
		blocks->block_50 = nullptr;
		blocktouched50 = true;
	}
	else if (blocks->blocknum50 == 2 && diamondpick == true && touched50 && blocktouched50 == false) {
		SDL_DestroyTexture(blocks->block_50);
		howmanybroken += 1;
		blocks->block_50 = nullptr;
		blocktouched50 = true;
	}
	else if (blocks->blocknum50 == 3 && goldpick == true && touched50 && blocktouched50 == false || blocks->blocknum50 == 3 && goldpick2 == true && touched2nd50 && blocktouched50 == false || blocks->blocknum50 == 7 && goldpick == true && touched50 && blocktouched50 == false || blocks->blocknum50 == 7 && goldpick2 == true && touched2nd50 && blocktouched50 == false || blocks->blocknum50 == 10 && goldpick == true && touched50 && blocktouched50 == false || blocks->blocknum50 == 10 && goldpick2 == true && touched2nd50 && blocktouched50 == false) {
		SDL_DestroyTexture(blocks->block_50);
		howmanybroken += 1;
		blocks->block_50 = nullptr;
		blocktouched50 = true;
	}
	else if (blocks->blocknum50 == 4 && ironpick == true && touched50 && blocktouched50 == false || blocks->blocknum50 == 4 && ironpick2 == true && touched2nd50 && blocktouched50 == false || blocks->blocknum50 == 8 && ironpick == true && touched50 && blocktouched50 == false || blocks->blocknum50 == 8 && ironpick2 == true && touched2nd50 && blocktouched50 == false) {
		SDL_DestroyTexture(blocks->block_50);
		howmanybroken += 1;
		blocks->block_50 = nullptr;
		blocktouched50 = true;
	}
	else if (blocks->blocknum50 == 5 && coalpick == true && touched50 && blocktouched50 == false || blocks->blocknum50 == 5 && coalpick2 == true && touched2nd50 && blocktouched50 == false || blocks->blocknum50 == 9 && coalpick == true && touched50 && blocktouched50 == false || blocks->blocknum50 == 9 && coalpick2 == true && touched2nd50 && blocktouched50 == false) {
		SDL_DestroyTexture(blocks->block_50);
		howmanybroken += 1;
		blocks->block_50 = nullptr;
		blocktouched50 = true;
	}
	else if (blocks->blocknum50 == 6 && rubypick == true && touched2nd50 && blocktouched50 == false) {
		SDL_DestroyTexture(blocks->block_50);
		howmanybroken += 1;
		blocks->block_50 = nullptr;
		blocktouched50 = true;
	}
	if (blocks->blocknum51 == 0 && shovel == true && touched51 && blocktouched51 == false || blocks->blocknum51 == 0 && shovel2 == true && touched2nd51 && blocktouched51 == false) {
		SDL_DestroyTexture(blocks->block_51);
		howmanybroken += 1;
		blocks->block_51 = nullptr;
		blocktouched51 = true;
	}
	else if (blocks->blocknum51 == 1 && drill == true && touched51 && blocktouched51 == false || blocks->blocknum51 == 1 && drill2 == true && touched2nd51 && blocktouched51 == false) {
		SDL_DestroyTexture(blocks->block_51);
		howmanybroken += 1;
		blocks->block_51 = nullptr;
		blocktouched51 = true;
	}
	else if (blocks->blocknum51 == 2 && diamondpick == true && touched51 && blocktouched51 == false) {
		SDL_DestroyTexture(blocks->block_51);
		howmanybroken += 1;
		blocks->block_51 = nullptr;
		blocktouched51 = true;
	}
	else if (blocks->blocknum51 == 3 && goldpick == true && touched51 && blocktouched51 == false || blocks->blocknum51 == 3 && goldpick2 == true && touched2nd51 && blocktouched51 == false || blocks->blocknum51 == 7 && goldpick == true && touched51 && blocktouched51 == false || blocks->blocknum51 == 7 && goldpick2 == true && touched2nd51 && blocktouched51 == false || blocks->blocknum51 == 10 && goldpick == true && touched51 && blocktouched51 == false || blocks->blocknum51 == 10 && goldpick2 == true && touched2nd51 && blocktouched51 == false) {
		SDL_DestroyTexture(blocks->block_51);
		howmanybroken += 1;
		blocks->block_51 = nullptr;
		blocktouched51 = true;
	}
	else if (blocks->blocknum51 == 4 && ironpick == true && touched51 && blocktouched51 == false || blocks->blocknum51 == 4 && ironpick2 == true && touched2nd51 && blocktouched51 == false || blocks->blocknum51 == 8 && ironpick == true && touched51 && blocktouched51 == false || blocks->blocknum51 == 8 && ironpick2 == true && touched2nd51 && blocktouched51 == false) {
		SDL_DestroyTexture(blocks->block_51);
		howmanybroken += 1;
		blocks->block_51 = nullptr;
		blocktouched51 = true;
	}
	else if (blocks->blocknum51 == 5 && coalpick == true && touched51 && blocktouched51 == false || blocks->blocknum51 == 5 && coalpick2 == true && touched2nd51 && blocktouched51 == false || blocks->blocknum51 == 9 && coalpick == true && touched51 && blocktouched51 == false || blocks->blocknum51 == 9 && coalpick2 == true && touched2nd51 && blocktouched51 == false) {
		SDL_DestroyTexture(blocks->block_51);
		howmanybroken += 1;
		blocks->block_51 = nullptr;
		blocktouched51 = true;
	}
	else if (blocks->blocknum51 == 6 && rubypick == true && touched2nd51 && blocktouched51 == false) {
		SDL_DestroyTexture(blocks->block_51);
		howmanybroken += 1;
		blocks->block_51 = nullptr;
		blocktouched51 = true;
	}
	if (blocks->blocknum52 == 0 && shovel == true && touched52 && blocktouched52 == false || blocks->blocknum52 == 0 && shovel2 == true && touched2nd52 && blocktouched52 == false) {
		SDL_DestroyTexture(blocks->block_52);
		howmanybroken += 1;
		blocks->block_52 = nullptr;
		blocktouched52 = true;
	}
	else if (blocks->blocknum52 == 1 && drill == true && touched52 && blocktouched52 == false || blocks->blocknum52 == 1 && drill2 == true && touched2nd52 && blocktouched52 == false) {
		SDL_DestroyTexture(blocks->block_52);
		howmanybroken += 1;
		blocks->block_52 = nullptr;
		blocktouched52 = true;
	}
	else if (blocks->blocknum52 == 2 && diamondpick == true && touched52 && blocktouched52 == false) {
		SDL_DestroyTexture(blocks->block_52);
		howmanybroken += 1;
		blocks->block_52 = nullptr;
		blocktouched52 = true;
	}
	else if (blocks->blocknum52 == 3 && goldpick == true && touched52 && blocktouched52 == false || blocks->blocknum52 == 3 && goldpick2 == true && touched2nd52 && blocktouched52 == false || blocks->blocknum52 == 7 && goldpick == true && touched52 && blocktouched52 == false || blocks->blocknum52 == 7 && goldpick2 == true && touched2nd52 && blocktouched52 == false || blocks->blocknum52 == 10 && goldpick == true && touched52 && blocktouched52 == false || blocks->blocknum52 == 10 && goldpick2 == true && touched2nd52 && blocktouched52 == false) {
		SDL_DestroyTexture(blocks->block_52);
		howmanybroken += 1;
		blocks->block_52 = nullptr;
		blocktouched52 = true;
	}
	else if (blocks->blocknum52 == 4 && ironpick == true && touched52 && blocktouched52 == false || blocks->blocknum52 == 4 && ironpick2 == true && touched2nd52 && blocktouched52 == false || blocks->blocknum52 == 8 && ironpick == true && touched52 && blocktouched52 == false || blocks->blocknum52 == 8 && ironpick2 == true && touched2nd52 && blocktouched52 == false) {
		SDL_DestroyTexture(blocks->block_52);
		howmanybroken += 1;
		blocks->block_52 = nullptr;
		blocktouched52 = true;
	}
	else if (blocks->blocknum52 == 5 && coalpick == true && touched52 && blocktouched52 == false || blocks->blocknum52 == 5 && coalpick2 == true && touched2nd52 && blocktouched52 == false || blocks->blocknum52 == 9 && coalpick == true && touched52 && blocktouched52 == false || blocks->blocknum52 == 9 && coalpick2 == true && touched2nd52 && blocktouched52 == false) {
		SDL_DestroyTexture(blocks->block_52);
		howmanybroken += 1;
		blocks->block_52 = nullptr;
		blocktouched52 = true;
	}
	else if (blocks->blocknum52 == 6 && rubypick == true && touched2nd52 && blocktouched52 == false) {
		SDL_DestroyTexture(blocks->block_52);
		howmanybroken += 1;
		blocks->block_52 = nullptr;
		blocktouched52 = true;
	}
	if (blocks->blocknum53 == 0 && shovel == true && touched53 && blocktouched53 == false || blocks->blocknum53 == 0 && shovel2 == true && touched2nd53 && blocktouched53 == false) {
		SDL_DestroyTexture(blocks->block_53);
		howmanybroken += 1;
		blocks->block_53 = nullptr;
		blocktouched53 = true;
	}
	else if (blocks->blocknum53 == 1 && drill == true && touched53 && blocktouched53 == false || blocks->blocknum53 == 1 && drill2 == true && touched2nd53 && blocktouched53 == false) {
		SDL_DestroyTexture(blocks->block_53);
		howmanybroken += 1;
		blocks->block_53 = nullptr;
		blocktouched53 = true;
	}
	else if (blocks->blocknum53 == 2 && diamondpick == true && touched53 && blocktouched53 == false) {
		SDL_DestroyTexture(blocks->block_53);
		howmanybroken += 1;
		blocks->block_53 = nullptr;
		blocktouched53 = true;
	}
	else if (blocks->blocknum53 == 3 && goldpick == true && touched53 && blocktouched53 == false || blocks->blocknum53 == 3 && goldpick2 == true && touched2nd53 && blocktouched53 == false || blocks->blocknum53 == 7 && goldpick == true && touched53 && blocktouched53 == false || blocks->blocknum53 == 7 && goldpick2 == true && touched2nd53 && blocktouched53 == false || blocks->blocknum53 == 10 && goldpick == true && touched53 && blocktouched53 == false || blocks->blocknum53 == 10 && goldpick2 == true && touched2nd53 && blocktouched53 == false) {
		SDL_DestroyTexture(blocks->block_53);
		howmanybroken += 1;
		blocks->block_53 = nullptr;
		blocktouched53 = true;
	}
	else if (blocks->blocknum53 == 4 && ironpick == true && touched53 && blocktouched53 == false || blocks->blocknum53 == 4 && ironpick2 == true && touched2nd53 && blocktouched53 == false || blocks->blocknum53 == 8 && ironpick == true && touched53 && blocktouched53 == false || blocks->blocknum53 == 8 && ironpick2 == true && touched2nd53 && blocktouched53 == false) {
		SDL_DestroyTexture(blocks->block_53);
		howmanybroken += 1;
		blocks->block_53 = nullptr;
		blocktouched53 = true;
	}
	else if (blocks->blocknum53 == 5 && coalpick == true && touched53 && blocktouched53 == false || blocks->blocknum53 == 5 && coalpick2 == true && touched2nd53 && blocktouched53 == false || blocks->blocknum53 == 9 && coalpick == true && touched53 && blocktouched53 == false || blocks->blocknum53 == 9 && coalpick2 == true && touched2nd53 && blocktouched53 == false) {
		SDL_DestroyTexture(blocks->block_53);
		howmanybroken += 1;
		blocks->block_53 = nullptr;
		blocktouched53 = true;
	}
	else if (blocks->blocknum53 == 6 && rubypick == true && touched2nd53 && blocktouched53 == false) {
		SDL_DestroyTexture(blocks->block_53);
		howmanybroken += 1;
		blocks->block_53 = nullptr;
		blocktouched53 = true;
	}
	if (blocks->blocknum54 == 0 && shovel == true && touched54 && blocktouched54 == false || blocks->blocknum54 == 0 && shovel2 == true && touched2nd54 && blocktouched54 == false) {
		SDL_DestroyTexture(blocks->block_54);
		howmanybroken += 1;
		blocks->block_54 = nullptr;
		blocktouched54 = true;
	}
	else if (blocks->blocknum54 == 1 && drill == true && touched54 && blocktouched54 == false || blocks->blocknum54 == 1 && drill2 == true && touched2nd54 && blocktouched54 == false) {
		SDL_DestroyTexture(blocks->block_54);
		howmanybroken += 1;
		blocks->block_54 = nullptr;
		blocktouched54 = true;
	}
	else if (blocks->blocknum54 == 2 && diamondpick == true && touched54 && blocktouched54 == false) {
		SDL_DestroyTexture(blocks->block_54);
		howmanybroken += 1;
		blocks->block_54 = nullptr;
		blocktouched54 = true;
	}
	else if (blocks->blocknum54 == 3 && goldpick == true && touched54 && blocktouched54 == false || blocks->blocknum54 == 3 && goldpick2 == true && touched2nd54 && blocktouched54 == false || blocks->blocknum54 == 7 && goldpick == true && touched54 && blocktouched54 == false || blocks->blocknum54 == 7 && goldpick2 == true && touched2nd54 && blocktouched54 == false || blocks->blocknum54 == 10 && goldpick == true && touched54 && blocktouched54 == false || blocks->blocknum54 == 10 && goldpick2 == true && touched2nd54 && blocktouched54 == false) {
		SDL_DestroyTexture(blocks->block_54);
		howmanybroken += 1;
		blocks->block_54 = nullptr;
		blocktouched54 = true;
	}
	else if (blocks->blocknum54 == 4 && ironpick == true && touched54 && blocktouched54 == false || blocks->blocknum54 == 4 && ironpick2 == true && touched2nd54 && blocktouched54 == false || blocks->blocknum54 == 8 && ironpick == true && touched54 && blocktouched54 == false || blocks->blocknum54 == 8 && ironpick2 == true && touched2nd54 && blocktouched54 == false) {
		SDL_DestroyTexture(blocks->block_54);
		howmanybroken += 1;
		blocks->block_54 = nullptr;
		blocktouched54 = true;
	}
	else if (blocks->blocknum54 == 5 && coalpick == true && touched54 && blocktouched54 == false || blocks->blocknum54 == 5 && coalpick2 == true && touched2nd54 && blocktouched54 == false || blocks->blocknum54 == 9 && coalpick == true && touched54 && blocktouched54 == false || blocks->blocknum54 == 9 && coalpick2 == true && touched2nd54 && blocktouched54 == false) {
		SDL_DestroyTexture(blocks->block_54);
		howmanybroken += 1;
		blocks->block_54 = nullptr;
		blocktouched54 = true;
	}
	else if (blocks->blocknum54 == 6 && rubypick == true && touched2nd54 && blocktouched54 == false) {
		SDL_DestroyTexture(blocks->block_54);
		howmanybroken += 1;
		blocks->block_54 = nullptr;
		blocktouched54 = true;
	}
	if (blocks->blocknum55 == 0 && shovel == true && touched55 && blocktouched55 == false || blocks->blocknum55 == 0 && shovel2 == true && touched2nd55 && blocktouched55 == false) {
		SDL_DestroyTexture(blocks->block_55);
		howmanybroken += 1;
		blocks->block_55 = nullptr;
		blocktouched55 = true;
	}
	else if (blocks->blocknum55 == 1 && drill == true && touched55 && blocktouched55 == false || blocks->blocknum55 == 1 && drill2 == true && touched2nd55 && blocktouched55 == false) {
		SDL_DestroyTexture(blocks->block_55);
		howmanybroken += 1;
		blocks->block_55 = nullptr;
		blocktouched55 = true;
	}
	else if (blocks->blocknum55 == 2 && diamondpick == true && touched55 && blocktouched55 == false) {
		SDL_DestroyTexture(blocks->block_55);
		howmanybroken += 1;
		blocks->block_55 = nullptr;
		blocktouched55 = true;
	}
	else if (blocks->blocknum55 == 3 && goldpick == true && touched55 && blocktouched55 == false || blocks->blocknum55 == 3 && goldpick2 == true && touched2nd55 && blocktouched55 == false || blocks->blocknum55 == 7 && goldpick == true && touched55 && blocktouched55 == false || blocks->blocknum55 == 7 && goldpick2 == true && touched2nd55 && blocktouched55 == false || blocks->blocknum55 == 10 && goldpick == true && touched55 && blocktouched55 == false || blocks->blocknum55 == 10 && goldpick2 == true && touched2nd55 && blocktouched55 == false) {
		SDL_DestroyTexture(blocks->block_55);
		howmanybroken += 1;
		blocks->block_55 = nullptr;
		blocktouched55 = true;
	}
	else if (blocks->blocknum55 == 4 && ironpick == true && touched55 && blocktouched55 == false || blocks->blocknum55 == 4 && ironpick2 == true && touched2nd55 && blocktouched55 == false || blocks->blocknum55 == 8 && ironpick == true && touched55 && blocktouched55 == false || blocks->blocknum55 == 8 && ironpick2 == true && touched2nd55 && blocktouched55 == false) {
		SDL_DestroyTexture(blocks->block_55);
		howmanybroken += 1;
		blocks->block_55 = nullptr;
		blocktouched55 = true;
	}
	else if (blocks->blocknum55 == 5 && coalpick == true && touched55 && blocktouched55 == false || blocks->blocknum55 == 5 && coalpick2 == true && touched2nd55 && blocktouched55 == false || blocks->blocknum55 == 9 && coalpick == true && touched55 && blocktouched55 == false || blocks->blocknum55 == 9 && coalpick2 == true && touched2nd55 && blocktouched55 == false) {
		SDL_DestroyTexture(blocks->block_55);
		howmanybroken += 1;
		blocks->block_55 = nullptr;
		blocktouched55 = true;
	}
	else if (blocks->blocknum55 == 6 && rubypick == true && touched2nd55 && blocktouched55 == false) {
		SDL_DestroyTexture(blocks->block_55);
		howmanybroken += 1;
		blocks->block_55 = nullptr;
		blocktouched55 = true;
	}
	if (blocks->blocknum56 == 0 && shovel == true && touched56 && blocktouched56 == false || blocks->blocknum56 == 0 && shovel2 == true && touched2nd56 && blocktouched56 == false) {
		SDL_DestroyTexture(blocks->block_56);
		howmanybroken += 1;
		blocks->block_56 = nullptr;
		blocktouched56 = true;
	}
	else if (blocks->blocknum56 == 1 && drill == true && touched56 && blocktouched56 == false || blocks->blocknum56 == 1 && drill2 == true && touched2nd56 && blocktouched56 == false) {
		SDL_DestroyTexture(blocks->block_56);
		howmanybroken += 1;
		blocks->block_56 = nullptr;
		blocktouched56 = true;
	}
	else if (blocks->blocknum56 == 2 && diamondpick == true && touched56 && blocktouched56 == false) {
		SDL_DestroyTexture(blocks->block_56);
		howmanybroken += 1;
		blocks->block_56 = nullptr;
		blocktouched56 = true;
	}
	else if (blocks->blocknum56 == 3 && goldpick == true && touched56 && blocktouched56 == false || blocks->blocknum56 == 3 && goldpick2 == true && touched2nd56 && blocktouched56 == false || blocks->blocknum56 == 7 && goldpick == true && touched56 && blocktouched56 == false || blocks->blocknum56 == 7 && goldpick2 == true && touched2nd56 && blocktouched56 == false || blocks->blocknum56 == 10 && goldpick == true && touched56 && blocktouched56 == false || blocks->blocknum56 == 10 && goldpick2 == true && touched2nd56 && blocktouched56 == false) {
		SDL_DestroyTexture(blocks->block_56);
		howmanybroken += 1;
		blocks->block_56 = nullptr;
		blocktouched56 = true;
	}
	else if (blocks->blocknum56 == 4 && ironpick == true && touched56 && blocktouched56 == false || blocks->blocknum56 == 4 && ironpick2 == true && touched2nd56 && blocktouched56 == false || blocks->blocknum56 == 8 && ironpick == true && touched56 && blocktouched56 == false || blocks->blocknum56 == 8 && ironpick2 == true && touched2nd56 && blocktouched56 == false) {
		SDL_DestroyTexture(blocks->block_56);
		howmanybroken += 1;
		blocks->block_56 = nullptr;
		blocktouched56 = true;
	}
	else if (blocks->blocknum56 == 5 && coalpick == true && touched56 && blocktouched56 == false || blocks->blocknum56 == 5 && coalpick2 == true && touched2nd56 && blocktouched56 == false || blocks->blocknum56 == 9 && coalpick == true && touched56 && blocktouched56 == false || blocks->blocknum56 == 9 && coalpick2 == true && touched2nd56 && blocktouched56 == false) {
		SDL_DestroyTexture(blocks->block_56);
		howmanybroken += 1;
		blocks->block_56 = nullptr;
		blocktouched56 = true;
	}
	else if (blocks->blocknum56 == 6 && rubypick == true && touched2nd56 && blocktouched56 == false) {
		SDL_DestroyTexture(blocks->block_56);
		howmanybroken += 1;
		blocks->block_56 = nullptr;
		blocktouched56 = true;
	}
	if (blocks->blocknum57 == 0 && shovel == true && touched57 && blocktouched57 == false || blocks->blocknum57 == 0 && shovel2 == true && touched2nd57 && blocktouched57 == false) {
		SDL_DestroyTexture(blocks->block_57);
		howmanybroken += 1;
		blocks->block_57 = nullptr;
		blocktouched57 = true;
	}
	else if (blocks->blocknum57 == 1 && drill == true && touched57 && blocktouched57 == false || blocks->blocknum57 == 1 && drill2 == true && touched2nd57 && blocktouched57 == false) {
		SDL_DestroyTexture(blocks->block_57);
		howmanybroken += 1;
		blocks->block_57 = nullptr;
		blocktouched57 = true;
	}
	else if (blocks->blocknum57 == 2 && diamondpick == true && touched57 && blocktouched57 == false) {
		SDL_DestroyTexture(blocks->block_57);
		howmanybroken += 1;
		blocks->block_57 = nullptr;
		blocktouched57 = true;
	}
	else if (blocks->blocknum57 == 3 && goldpick == true && touched57 && blocktouched57 == false || blocks->blocknum57 == 3 && goldpick2 == true && touched2nd57 && blocktouched57 == false || blocks->blocknum57 == 7 && goldpick == true && touched57 && blocktouched57 == false || blocks->blocknum57 == 7 && goldpick2 == true && touched2nd57 && blocktouched57 == false || blocks->blocknum57 == 10 && goldpick == true && touched57 && blocktouched57 == false || blocks->blocknum57 == 10 && goldpick2 == true && touched2nd57 && blocktouched57 == false) {
		SDL_DestroyTexture(blocks->block_57);
		howmanybroken += 1;
		blocks->block_57 = nullptr;
		blocktouched57 = true;
	}
	else if (blocks->blocknum57 == 4 && ironpick == true && touched57 && blocktouched57 == false || blocks->blocknum57 == 4 && ironpick2 == true && touched2nd57 && blocktouched57 == false || blocks->blocknum57 == 8 && ironpick == true && touched57 && blocktouched57 == false || blocks->blocknum57 == 8 && ironpick2 == true && touched2nd57 && blocktouched57 == false) {
		SDL_DestroyTexture(blocks->block_57);
		howmanybroken += 1;
		blocks->block_57 = nullptr;
		blocktouched57 = true;
	}
	else if (blocks->blocknum57 == 5 && coalpick == true && touched57 && blocktouched57 == false || blocks->blocknum57 == 5 && coalpick2 == true && touched2nd57 && blocktouched57 == false || blocks->blocknum57 == 9 && coalpick == true && touched57 && blocktouched57 == false || blocks->blocknum57 == 9 && coalpick2 == true && touched2nd57 && blocktouched57 == false) {
		SDL_DestroyTexture(blocks->block_57);
		howmanybroken += 1;
		blocks->block_57 = nullptr;
		blocktouched57 = true;
	}
	else if (blocks->blocknum57 == 6 && rubypick == true && touched2nd57 && blocktouched57 == false) {
		SDL_DestroyTexture(blocks->block_57);
		howmanybroken += 1;
		blocks->block_57 = nullptr;
		blocktouched57 = true;
	}
	if (blocks->blocknum58 == 0 && shovel == true && touched58 && blocktouched58 == false || blocks->blocknum58 == 0 && shovel2 == true && touched2nd58 && blocktouched58 == false) {
		SDL_DestroyTexture(blocks->block_58);
		howmanybroken += 1;
		blocks->block_58 = nullptr;
		blocktouched58 = true;
	}
	else if (blocks->blocknum58 == 1 && drill == true && touched58 && blocktouched58 == false || blocks->blocknum58 == 1 && drill2 == true && touched2nd58 && blocktouched58 == false) {
		SDL_DestroyTexture(blocks->block_58);
		howmanybroken += 1;
		blocks->block_58 = nullptr;
		blocktouched58 = true;
	}
	else if (blocks->blocknum58 == 2 && diamondpick == true && touched58 && blocktouched58 == false) {
		SDL_DestroyTexture(blocks->block_58);
		howmanybroken += 1;
		blocks->block_58 = nullptr;
		blocktouched58 = true;
	}
	else if (blocks->blocknum58 == 3 && goldpick == true && touched58 && blocktouched58 == false || blocks->blocknum58 == 3 && goldpick2 == true && touched2nd58 && blocktouched58 == false || blocks->blocknum58 == 7 && goldpick == true && touched58 && blocktouched58 == false || blocks->blocknum58 == 7 && goldpick2 == true && touched2nd58 && blocktouched58 == false || blocks->blocknum58 == 10 && goldpick == true && touched58 && blocktouched58 == false || blocks->blocknum58 == 10 && goldpick2 == true && touched2nd58 && blocktouched58 == false) {
		SDL_DestroyTexture(blocks->block_58);
		howmanybroken += 1;
		blocks->block_58 = nullptr;
		blocktouched58 = true;
	}
	else if (blocks->blocknum58 == 4 && ironpick == true && touched58 && blocktouched58 == false || blocks->blocknum58 == 4 && ironpick2 == true && touched2nd58 && blocktouched58 == false || blocks->blocknum58 == 8 && ironpick == true && touched58 && blocktouched58 == false || blocks->blocknum58 == 8 && ironpick2 == true && touched2nd58 && blocktouched58 == false) {
		SDL_DestroyTexture(blocks->block_58);
		howmanybroken += 1;
		blocks->block_58 = nullptr;
		blocktouched58 = true;
	}
	else if (blocks->blocknum58 == 5 && coalpick == true && touched58 && blocktouched58 == false || blocks->blocknum58 == 5 && coalpick2 == true && touched2nd58 && blocktouched58 == false || blocks->blocknum58 == 9 && coalpick == true && touched58 && blocktouched58 == false || blocks->blocknum58 == 9 && coalpick2 == true && touched2nd58 && blocktouched58 == false) {
		SDL_DestroyTexture(blocks->block_58);
		howmanybroken += 1;
		blocks->block_58 = nullptr;
		blocktouched58 = true;
	}
	else if (blocks->blocknum58 == 6 && rubypick == true && touched2nd58 && blocktouched58 == false) {
		SDL_DestroyTexture(blocks->block_58);
		howmanybroken += 1;
		blocks->block_58 = nullptr;
		blocktouched58 = true;
	}
	if (blocks->blocknum59 == 0 && shovel == true && touched59 && blocktouched59 == false || blocks->blocknum59 == 0 && shovel2 == true && touched2nd59 && blocktouched59 == false) {
		SDL_DestroyTexture(blocks->block_59);
		howmanybroken += 1;
		blocks->block_59 = nullptr;
		blocktouched59 = true;
	}
	else if (blocks->blocknum59 == 1 && drill == true && touched59 && blocktouched59 == false || blocks->blocknum59 == 1 && drill2 == true && touched2nd59 && blocktouched59 == false) {
		SDL_DestroyTexture(blocks->block_59);
		howmanybroken += 1;
		blocks->block_59 = nullptr;
		blocktouched59 = true;
	}
	else if (blocks->blocknum59 == 2 && diamondpick == true && touched59 && blocktouched59 == false) {
		SDL_DestroyTexture(blocks->block_59);
		howmanybroken += 1;
		blocks->block_59 = nullptr;
		blocktouched59 = true;
	}
	else if (blocks->blocknum59 == 3 && goldpick == true && touched59 && blocktouched59 == false || blocks->blocknum59 == 3 && goldpick2 == true && touched2nd59 && blocktouched59 == false || blocks->blocknum59 == 7 && goldpick == true && touched59 && blocktouched59 == false || blocks->blocknum59 == 7 && goldpick2 == true && touched2nd59 && blocktouched59 == false || blocks->blocknum59 == 10 && goldpick == true && touched59 && blocktouched59 == false || blocks->blocknum59 == 10 && goldpick2 == true && touched2nd59 && blocktouched59 == false) {
		SDL_DestroyTexture(blocks->block_59);
		howmanybroken += 1;
		blocks->block_59 = nullptr;
		blocktouched59 = true;
	}
	else if (blocks->blocknum59 == 4 && ironpick == true && touched59 && blocktouched59 == false || blocks->blocknum59 == 4 && ironpick2 == true && touched2nd59 && blocktouched59 == false || blocks->blocknum59 == 8 && ironpick == true && touched59 && blocktouched59 == false || blocks->blocknum59 == 8 && ironpick2 == true && touched2nd59 && blocktouched59 == false) {
		SDL_DestroyTexture(blocks->block_59);
		howmanybroken += 1;
		blocks->block_59 = nullptr;
		blocktouched59 = true;
	}
	else if (blocks->blocknum59 == 5 && coalpick == true && touched59 && blocktouched59 == false || blocks->blocknum59 == 5 && coalpick2 == true && touched2nd59 && blocktouched59 == false || blocks->blocknum59 == 9 && coalpick == true && touched59 && blocktouched59 == false || blocks->blocknum59 == 9 && coalpick2 == true && touched2nd59 && blocktouched59 == false) {
		SDL_DestroyTexture(blocks->block_59);
		howmanybroken += 1;
		blocks->block_59 = nullptr;
		blocktouched59 = true;
	}
	else if (blocks->blocknum59 == 6 && rubypick == true && touched2nd59 && blocktouched59 == false) {
		SDL_DestroyTexture(blocks->block_59);
		howmanybroken += 1;
		blocks->block_59 = nullptr;
		blocktouched59 = true;
	}
	if (blocks->blocknum60 == 0 && shovel == true && touched60 && blocktouched60 == false || blocks->blocknum60 == 0 && shovel2 == true && touched2nd60 && blocktouched60 == false) {
		SDL_DestroyTexture(blocks->block_60);
		howmanybroken += 1;
		blocks->block_60 = nullptr;
		blocktouched60 = true;
	}
	else if (blocks->blocknum60 == 1 && drill == true && touched60 && blocktouched60 == false || blocks->blocknum60 == 1 && drill2 == true && touched2nd60 && blocktouched60 == false) {
		SDL_DestroyTexture(blocks->block_60);
		howmanybroken += 1;
		blocks->block_60 = nullptr;
		blocktouched60 = true;
	}
	else if (blocks->blocknum60 == 2 && diamondpick == true && touched60 && blocktouched60 == false) {
		SDL_DestroyTexture(blocks->block_60);
		howmanybroken += 1;
		blocks->block_60 = nullptr;
		blocktouched60 = true;
	}
	else if (blocks->blocknum60 == 3 && goldpick == true && touched60 && blocktouched60 == false || blocks->blocknum60 == 3 && goldpick2 == true && touched2nd60 && blocktouched60 == false || blocks->blocknum60 == 7 && goldpick == true && touched60 && blocktouched60 == false || blocks->blocknum60 == 7 && goldpick2 == true && touched2nd60 && blocktouched60 == false || blocks->blocknum60 == 10 && goldpick == true && touched60 && blocktouched60 == false || blocks->blocknum60 == 10 && goldpick2 == true && touched2nd60 && blocktouched60 == false) {
		SDL_DestroyTexture(blocks->block_60);
		howmanybroken += 1;
		blocks->block_60 = nullptr;
		blocktouched60 = true;
	}
	else if (blocks->blocknum60 == 4 && ironpick == true && touched60 && blocktouched60 == false || blocks->blocknum60 == 4 && ironpick2 == true && touched2nd60 && blocktouched60 == false || blocks->blocknum60 == 8 && ironpick == true && touched60 && blocktouched60 == false || blocks->blocknum60 == 8 && ironpick2 == true && touched2nd60 && blocktouched60 == false) {
		SDL_DestroyTexture(blocks->block_60);
		howmanybroken += 1;
		blocks->block_60 = nullptr;
		blocktouched60 = true;
	}
	else if (blocks->blocknum60 == 5 && coalpick == true && touched60 && blocktouched60 == false || blocks->blocknum60 == 5 && coalpick2 == true && touched2nd60 && blocktouched60 == false || blocks->blocknum60 == 9 && coalpick == true && touched60 && blocktouched60 == false || blocks->blocknum60 == 9 && coalpick2 == true && touched2nd60 && blocktouched60 == false) {
		SDL_DestroyTexture(blocks->block_60);
		howmanybroken += 1;
		blocks->block_60 = nullptr;
		blocktouched60 = true;
	}
	else if (blocks->blocknum60 == 6 && rubypick == true && touched2nd60 && blocktouched60 == false) {
		SDL_DestroyTexture(blocks->block_60);
		howmanybroken += 1;
		blocks->block_60 = nullptr;
		blocktouched60 = true;
	}
	if (blocks->blocknum61 == 0 && shovel == true && touched61 && blocktouched61 == false || blocks->blocknum61 == 0 && shovel2 == true && touched2nd61 && blocktouched61 == false) {
		SDL_DestroyTexture(blocks->block_61);
		howmanybroken += 1;
		blocks->block_61 = nullptr;
		blocktouched61 = true;
	}
	else if (blocks->blocknum61 == 1 && drill == true && touched61 && blocktouched61 == false || blocks->blocknum61 == 1 && drill2 == true && touched2nd61 && blocktouched61 == false) {
		SDL_DestroyTexture(blocks->block_61);
		howmanybroken += 1;
		blocks->block_61 = nullptr;
		blocktouched61 = true;
	}
	else if (blocks->blocknum61 == 2 && diamondpick == true && touched61 && blocktouched61 == false) {
		SDL_DestroyTexture(blocks->block_61);
		howmanybroken += 1;
		blocks->block_61 = nullptr;
		blocktouched61 = true;
	}
	else if (blocks->blocknum61 == 3 && goldpick == true && touched61 && blocktouched61 == false || blocks->blocknum61 == 3 && goldpick2 == true && touched2nd61 && blocktouched61 == false || blocks->blocknum61 == 7 && goldpick == true && touched61 && blocktouched61 == false || blocks->blocknum61 == 7 && goldpick2 == true && touched2nd61 && blocktouched61 == false || blocks->blocknum61 == 10 && goldpick == true && touched61 && blocktouched61 == false || blocks->blocknum61 == 10 && goldpick2 == true && touched2nd61 && blocktouched61 == false) {
		SDL_DestroyTexture(blocks->block_61);
		howmanybroken += 1;
		blocks->block_61 = nullptr;
		blocktouched61 = true;
	}
	else if (blocks->blocknum61 == 4 && ironpick == true && touched61 && blocktouched61 == false || blocks->blocknum61 == 4 && ironpick2 == true && touched2nd61 && blocktouched61 == false || blocks->blocknum61 == 8 && ironpick == true && touched61 && blocktouched61 == false || blocks->blocknum61 == 8 && ironpick2 == true && touched2nd61 && blocktouched61 == false) {
		SDL_DestroyTexture(blocks->block_61);
		howmanybroken += 1;
		blocks->block_61 = nullptr;
		blocktouched61 = true;
	}
	else if (blocks->blocknum61 == 5 && coalpick == true && touched61 && blocktouched61 == false || blocks->blocknum61 == 5 && coalpick2 == true && touched2nd61 && blocktouched61 == false || blocks->blocknum61 == 9 && coalpick == true && touched61 && blocktouched61 == false || blocks->blocknum61 == 9 && coalpick2 == true && touched2nd61 && blocktouched61 == false) {
		SDL_DestroyTexture(blocks->block_61);
		howmanybroken += 1;
		blocks->block_61 = nullptr;
		blocktouched61 = true;
	}
	else if (blocks->blocknum61 == 6 && rubypick == true && touched2nd61 && blocktouched61 == false) {
		SDL_DestroyTexture(blocks->block_61);
		howmanybroken += 1;
		blocks->block_61 = nullptr;
		blocktouched61 = true;
	}
	if (blocks->blocknum62 == 0 && shovel == true && touched62 && blocktouched62 == false || blocks->blocknum62 == 0 && shovel2 == true && touched2nd62 && blocktouched62 == false) {
		SDL_DestroyTexture(blocks->block_62);
		howmanybroken += 1;
		blocks->block_62 = nullptr;
		blocktouched62 = true;
	}
	else if (blocks->blocknum62 == 1 && drill == true && touched62 && blocktouched62 == false || blocks->blocknum62 == 1 && drill2 == true && touched2nd62 && blocktouched62 == false) {
		SDL_DestroyTexture(blocks->block_62);
		howmanybroken += 1;
		blocks->block_62 = nullptr;
		blocktouched62 = true;
	}
	else if (blocks->blocknum62 == 2 && diamondpick == true && touched62 && blocktouched62 == false) {
		SDL_DestroyTexture(blocks->block_62);
		howmanybroken += 1;
		blocks->block_62 = nullptr;
		blocktouched62 = true;
	}
	else if (blocks->blocknum62 == 3 && goldpick == true && touched62 && blocktouched62 == false || blocks->blocknum62 == 3 && goldpick2 == true && touched2nd62 && blocktouched62 == false || blocks->blocknum62 == 7 && goldpick == true && touched62 && blocktouched62 == false || blocks->blocknum62 == 7 && goldpick2 == true && touched2nd62 && blocktouched62 == false || blocks->blocknum62 == 10 && goldpick == true && touched62 && blocktouched62 == false || blocks->blocknum62 == 10 && goldpick2 == true && touched2nd62 && blocktouched62 == false) {
		SDL_DestroyTexture(blocks->block_62);
		howmanybroken += 1;
		blocks->block_62 = nullptr;
		blocktouched62 = true;
	}
	else if (blocks->blocknum62 == 4 && ironpick == true && touched62 && blocktouched62 == false || blocks->blocknum62 == 4 && ironpick2 == true && touched2nd62 && blocktouched62 == false || blocks->blocknum62 == 8 && ironpick == true && touched62 && blocktouched62 == false || blocks->blocknum62 == 8 && ironpick2 == true && touched2nd62 && blocktouched62 == false) {
		SDL_DestroyTexture(blocks->block_62);
		howmanybroken += 1;
		blocks->block_62 = nullptr;
		blocktouched62 = true;
	}
	else if (blocks->blocknum62 == 5 && coalpick == true && touched62 && blocktouched62 == false || blocks->blocknum62 == 5 && coalpick2 == true && touched2nd62 && blocktouched62 == false || blocks->blocknum62 == 9 && coalpick == true && touched62 && blocktouched62 == false || blocks->blocknum62 == 9 && coalpick2 == true && touched2nd62 && blocktouched62 == false) {
		SDL_DestroyTexture(blocks->block_62);
		howmanybroken += 1;
		blocks->block_62 = nullptr;
		blocktouched62 = true;
	}
	else if (blocks->blocknum62 == 6 && rubypick == true && touched2nd62 && blocktouched62 == false) {
		SDL_DestroyTexture(blocks->block_62);
		howmanybroken += 1;
		blocks->block_62 = nullptr;
		blocktouched62 = true;
	}
	if (blocks->blocknum63 == 0 && shovel == true && touched63 && blocktouched63 == false || blocks->blocknum63 == 0 && shovel2 == true && touched2nd63 && blocktouched63 == false) {
		SDL_DestroyTexture(blocks->block_63);
		howmanybroken += 1;
		blocks->block_63 = nullptr;
		blocktouched63 = true;
	}
	else if (blocks->blocknum63 == 1 && drill == true && touched63 && blocktouched63 == false || blocks->blocknum63 == 1 && drill2 == true && touched2nd63 && blocktouched63 == false) {
		SDL_DestroyTexture(blocks->block_63);
		howmanybroken += 1;
		blocks->block_63 = nullptr;
		blocktouched63 = true;
	}
	else if (blocks->blocknum63 == 2 && diamondpick == true && touched63 && blocktouched63 == false) {
		SDL_DestroyTexture(blocks->block_63);
		howmanybroken += 1;
		blocks->block_63 = nullptr;
		blocktouched63 = true;
	}
	else if (blocks->blocknum63 == 3 && goldpick == true && touched63 && blocktouched63 == false || blocks->blocknum63 == 3 && goldpick2 == true && touched2nd63 && blocktouched63 == false || blocks->blocknum63 == 7 && goldpick == true && touched63 && blocktouched63 == false || blocks->blocknum63 == 7 && goldpick2 == true && touched2nd63 && blocktouched63 == false || blocks->blocknum63 == 10 && goldpick == true && touched63 && blocktouched63 == false || blocks->blocknum63 == 10 && goldpick2 == true && touched2nd63 && blocktouched63 == false) {
		SDL_DestroyTexture(blocks->block_63);
		howmanybroken += 1;
		blocks->block_63 = nullptr;
		blocktouched63 = true;
	}
	else if (blocks->blocknum63 == 4 && ironpick == true && touched63 && blocktouched63 == false || blocks->blocknum63 == 4 && ironpick2 == true && touched2nd63 && blocktouched63 == false || blocks->blocknum63 == 8 && ironpick == true && touched63 && blocktouched63 == false || blocks->blocknum63 == 8 && ironpick2 == true && touched2nd63 && blocktouched63 == false) {
		SDL_DestroyTexture(blocks->block_63);
		howmanybroken += 1;
		blocks->block_63 = nullptr;
		blocktouched63 = true;
	}
	else if (blocks->blocknum63 == 5 && coalpick == true && touched63 && blocktouched63 == false || blocks->blocknum63 == 5 && coalpick2 == true && touched2nd63 && blocktouched63 == false || blocks->blocknum63 == 9 && coalpick == true && touched63 && blocktouched63 == false || blocks->blocknum63 == 9 && coalpick2 == true && touched2nd63 && blocktouched63 == false) {
		SDL_DestroyTexture(blocks->block_63);
		howmanybroken += 1;
		blocks->block_63 = nullptr;
		blocktouched63 = true;
	}
	else if (blocks->blocknum63 == 6 && rubypick == true && touched2nd63 && blocktouched63 == false) {
		SDL_DestroyTexture(blocks->block_63);
		howmanybroken += 1;
		blocks->block_63 = nullptr;
		blocktouched63 = true;
	}
	if (blocks->blocknum64 == 0 && shovel == true && touched64 && blocktouched64 == false || blocks->blocknum64 == 0 && shovel2 == true && touched2nd64 && blocktouched64 == false) {
		SDL_DestroyTexture(blocks->block_64);
		howmanybroken += 1;
		blocks->block_64 = nullptr;
		blocktouched64 = true;
	}
	else if (blocks->blocknum64 == 1 && drill == true && touched64 && blocktouched64 == false || blocks->blocknum64 == 1 && drill2 == true && touched2nd64 && blocktouched64 == false) {
		SDL_DestroyTexture(blocks->block_64);
		howmanybroken += 1;
		blocks->block_64 = nullptr;
		blocktouched64 = true;
	}
	else if (blocks->blocknum64 == 2 && diamondpick == true && touched64 && blocktouched64 == false) {
		SDL_DestroyTexture(blocks->block_64);
		howmanybroken += 1;
		blocks->block_64 = nullptr;
		blocktouched64 = true;
	}
	else if (blocks->blocknum64 == 3 && goldpick == true && touched64 && blocktouched64 == false || blocks->blocknum64 == 3 && goldpick2 == true && touched2nd64 && blocktouched64 == false || blocks->blocknum64 == 7 && goldpick == true && touched64 && blocktouched64 == false || blocks->blocknum64 == 7 && goldpick2 == true && touched2nd64 && blocktouched64 == false || blocks->blocknum64 == 10 && goldpick == true && touched64 && blocktouched64 == false || blocks->blocknum64 == 10 && goldpick2 == true && touched2nd64 && blocktouched64 == false) {
		SDL_DestroyTexture(blocks->block_64);
		howmanybroken += 1;
		blocks->block_64 = nullptr;
		blocktouched64 = true;
	}
	else if (blocks->blocknum64 == 4 && ironpick == true && touched64 && blocktouched64 == false || blocks->blocknum64 == 4 && ironpick2 == true && touched2nd64 && blocktouched64 == false || blocks->blocknum64 == 8 && ironpick == true && touched64 && blocktouched64 == false || blocks->blocknum64 == 8 && ironpick2 == true && touched2nd64 && blocktouched64 == false) {
		SDL_DestroyTexture(blocks->block_64);
		howmanybroken += 1;
		blocks->block_64 = nullptr;
		blocktouched64 = true;
	}
	else if (blocks->blocknum64 == 5 && coalpick == true && touched64 && blocktouched64 == false || blocks->blocknum64 == 5 && coalpick2 == true && touched2nd64 && blocktouched64 == false || blocks->blocknum64 == 9 && coalpick == true && touched64 && blocktouched64 == false || blocks->blocknum64 == 9 && coalpick2 == true && touched2nd64 && blocktouched64 == false) {
		SDL_DestroyTexture(blocks->block_64);
		howmanybroken += 1;
		blocks->block_64 = nullptr;
		blocktouched64 = true;
	}
	else if (blocks->blocknum64 == 6 && rubypick == true && touched2nd64 && blocktouched64 == false) {
		SDL_DestroyTexture(blocks->block_64);
		howmanybroken += 1;
		blocks->block_64 = nullptr;
		blocktouched64 = true;
	}
	if (blocks->blocknum65 == 0 && shovel == true && touched65 && blocktouched65 == false || blocks->blocknum65 == 0 && shovel2 == true && touched2nd65 && blocktouched65 == false) {
		SDL_DestroyTexture(blocks->block_65);
		howmanybroken += 1;
		blocks->block_65 = nullptr;
		blocktouched65 = true;
	}
	else if (blocks->blocknum65 == 1 && drill == true && touched65 && blocktouched65 == false || blocks->blocknum65 == 1 && drill2 == true && touched2nd65 && blocktouched65 == false) {
		SDL_DestroyTexture(blocks->block_65);
		howmanybroken += 1;
		blocks->block_65 = nullptr;
		blocktouched65 = true;
	}
	else if (blocks->blocknum65 == 2 && diamondpick == true && touched65 && blocktouched65 == false) {
		SDL_DestroyTexture(blocks->block_65);
		howmanybroken += 1;
		blocks->block_65 = nullptr;
		blocktouched65 = true;
	}
	else if (blocks->blocknum65 == 3 && goldpick == true && touched65 && blocktouched65 == false || blocks->blocknum65 == 3 && goldpick2 == true && touched2nd65 && blocktouched65 == false || blocks->blocknum65 == 7 && goldpick == true && touched65 && blocktouched65 == false || blocks->blocknum65 == 7 && goldpick2 == true && touched2nd65 && blocktouched65 == false || blocks->blocknum65 == 10 && goldpick == true && touched65 && blocktouched65 == false || blocks->blocknum65 == 10 && goldpick2 == true && touched2nd65 && blocktouched65 == false) {
		SDL_DestroyTexture(blocks->block_65);
		howmanybroken += 1;
		blocks->block_65 = nullptr;
		blocktouched65 = true;
	}
	else if (blocks->blocknum65 == 4 && ironpick == true && touched65 && blocktouched65 == false || blocks->blocknum65 == 4 && ironpick2 == true && touched2nd65 && blocktouched65 == false || blocks->blocknum65 == 8 && ironpick == true && touched65 && blocktouched65 == false || blocks->blocknum65 == 8 && ironpick2 == true && touched2nd65 && blocktouched65 == false) {
		SDL_DestroyTexture(blocks->block_65);
		howmanybroken += 1;
		blocks->block_65 = nullptr;
		blocktouched65 = true;
	}
	else if (blocks->blocknum65 == 5 && coalpick == true && touched65 && blocktouched65 == false || blocks->blocknum65 == 5 && coalpick2 == true && touched2nd65 && blocktouched65 == false || blocks->blocknum65 == 9 && coalpick == true && touched65 && blocktouched65 == false || blocks->blocknum65 == 9 && coalpick2 == true && touched2nd65 && blocktouched65 == false) {
		SDL_DestroyTexture(blocks->block_65);
		howmanybroken += 1;
		blocks->block_65 = nullptr;
		blocktouched65 = true;
	}
	else if (blocks->blocknum65 == 6 && rubypick == true && touched2nd65 && blocktouched65 == false) {
		SDL_DestroyTexture(blocks->block_65);
		howmanybroken += 1;
		blocks->block_65 = nullptr;
		blocktouched65 = true;
	}
	if (blocks->blocknum66 == 0 && shovel == true && touched66 && blocktouched66 == false || blocks->blocknum66 == 0 && shovel2 == true && touched2nd66 && blocktouched66 == false) {
		SDL_DestroyTexture(blocks->block_66);
		howmanybroken += 1;
		blocks->block_66 = nullptr;
		blocktouched66 = true;
	}
	else if (blocks->blocknum66 == 1 && drill == true && touched66 && blocktouched66 == false || blocks->blocknum66 == 1 && drill2 == true && touched2nd66 && blocktouched66 == false) {
		SDL_DestroyTexture(blocks->block_66);
		howmanybroken += 1;
		blocks->block_66 = nullptr;
		blocktouched66 = true;
	}
	else if (blocks->blocknum66 == 2 && diamondpick == true && touched66 && blocktouched66 == false) {
		SDL_DestroyTexture(blocks->block_66);
		howmanybroken += 1;
		blocks->block_66 = nullptr;
		blocktouched66 = true;
	}
	else if (blocks->blocknum66 == 3 && goldpick == true && touched66 && blocktouched66 == false || blocks->blocknum66 == 3 && goldpick2 == true && touched2nd66 && blocktouched66 == false || blocks->blocknum66 == 7 && goldpick == true && touched66 && blocktouched66 == false || blocks->blocknum66 == 7 && goldpick2 == true && touched2nd66 && blocktouched66 == false || blocks->blocknum66 == 10 && goldpick == true && touched66 && blocktouched66 == false || blocks->blocknum66 == 10 && goldpick2 == true && touched2nd66 && blocktouched66 == false) {
		SDL_DestroyTexture(blocks->block_66);
		howmanybroken += 1;
		blocks->block_66 = nullptr;
		blocktouched66 = true;
	}
	else if (blocks->blocknum66 == 4 && ironpick == true && touched66 && blocktouched66 == false || blocks->blocknum66 == 4 && ironpick2 == true && touched2nd66 && blocktouched66 == false || blocks->blocknum66 == 8 && ironpick == true && touched66 && blocktouched66 == false || blocks->blocknum66 == 8 && ironpick2 == true && touched2nd66 && blocktouched66 == false) {
		SDL_DestroyTexture(blocks->block_66);
		howmanybroken += 1;
		blocks->block_66 = nullptr;
		blocktouched66 = true;
	}
	else if (blocks->blocknum66 == 5 && coalpick == true && touched66 && blocktouched66 == false || blocks->blocknum66 == 5 && coalpick2 == true && touched2nd66 && blocktouched66 == false || blocks->blocknum66 == 9 && coalpick == true && touched66 && blocktouched66 == false || blocks->blocknum66 == 9 && coalpick2 == true && touched2nd66 && blocktouched66 == false) {
		SDL_DestroyTexture(blocks->block_66);
		howmanybroken += 1;
		blocks->block_66 = nullptr;
		blocktouched66 = true;
	}
	else if (blocks->blocknum66 == 6 && rubypick == true && touched2nd66 && blocktouched66 == false) {
		SDL_DestroyTexture(blocks->block_66);
		howmanybroken += 1;
		blocks->block_66 = nullptr;
		blocktouched66 = true;
	}
	if (blocks->blocknum67 == 0 && shovel == true && touched67 && blocktouched67 == false || blocks->blocknum67 == 0 && shovel2 == true && touched2nd67 && blocktouched67 == false) {
		SDL_DestroyTexture(blocks->block_67);
		howmanybroken += 1;
		blocks->block_67 = nullptr;
		blocktouched67 = true;
	}
	else if (blocks->blocknum67 == 1 && drill == true && touched67 && blocktouched67 == false || blocks->blocknum67 == 1 && drill2 == true && touched2nd67 && blocktouched67 == false) {
		SDL_DestroyTexture(blocks->block_67);
		howmanybroken += 1;
		blocks->block_67 = nullptr;
		blocktouched67 = true;
	}
	else if (blocks->blocknum67 == 2 && diamondpick == true && touched67 && blocktouched67 == false) {
		SDL_DestroyTexture(blocks->block_67);
		howmanybroken += 1;
		blocks->block_67 = nullptr;
		blocktouched67 = true;
	}
	else if (blocks->blocknum67 == 3 && goldpick == true && touched67 && blocktouched67 == false || blocks->blocknum67 == 3 && goldpick2 == true && touched2nd67 && blocktouched67 == false || blocks->blocknum67 == 7 && goldpick == true && touched67 && blocktouched67 == false || blocks->blocknum67 == 7 && goldpick2 == true && touched2nd67 && blocktouched67 == false || blocks->blocknum67 == 10 && goldpick == true && touched67 && blocktouched67 == false || blocks->blocknum67 == 10 && goldpick2 == true && touched2nd67 && blocktouched67 == false) {
		SDL_DestroyTexture(blocks->block_67);
		howmanybroken += 1;
		blocks->block_67 = nullptr;
		blocktouched67 = true;
	}
	else if (blocks->blocknum67 == 4 && ironpick == true && touched67 && blocktouched67 == false || blocks->blocknum67 == 4 && ironpick2 == true && touched2nd67 && blocktouched67 == false || blocks->blocknum67 == 8 && ironpick == true && touched67 && blocktouched67 == false || blocks->blocknum67 == 8 && ironpick2 == true && touched2nd67 && blocktouched67 == false) {
		SDL_DestroyTexture(blocks->block_67);
		howmanybroken += 1;
		blocks->block_67 = nullptr;
		blocktouched67 = true;
	}
	else if (blocks->blocknum67 == 5 && coalpick == true && touched67 && blocktouched67 == false || blocks->blocknum67 == 5 && coalpick2 == true && touched2nd67 && blocktouched67 == false || blocks->blocknum67 == 9 && coalpick == true && touched67 && blocktouched67 == false || blocks->blocknum67 == 9 && coalpick2 == true && touched2nd67 && blocktouched67 == false) {
		SDL_DestroyTexture(blocks->block_67);
		howmanybroken += 1;
		blocks->block_67 = nullptr;
		blocktouched67 = true;
	}
	else if (blocks->blocknum67 == 6 && rubypick == true && touched2nd67 && blocktouched67 == false) {
		SDL_DestroyTexture(blocks->block_67);
		howmanybroken += 1;
		blocks->block_67 = nullptr;
		blocktouched67 = true;
	}
	if (blocks->blocknum68 == 0 && shovel == true && touched68 && blocktouched68 == false || blocks->blocknum68 == 0 && shovel2 == true && touched2nd68 && blocktouched68 == false) {
		SDL_DestroyTexture(blocks->block_68);
		howmanybroken += 1;
		blocks->block_68 = nullptr;
		blocktouched68 = true;
	}
	else if (blocks->blocknum68 == 1 && drill == true && touched68 && blocktouched68 == false || blocks->blocknum68 == 1 && drill2 == true && touched2nd68 && blocktouched68 == false) {
		SDL_DestroyTexture(blocks->block_68);
		howmanybroken += 1;
		blocks->block_68 = nullptr;
		blocktouched68 = true;
	}
	else if (blocks->blocknum68 == 2 && diamondpick == true && touched68 && blocktouched68 == false) {
		SDL_DestroyTexture(blocks->block_68);
		howmanybroken += 1;
		blocks->block_68 = nullptr;
		blocktouched68 = true;
	}
	else if (blocks->blocknum68 == 3 && goldpick == true && touched68 && blocktouched68 == false || blocks->blocknum68 == 3 && goldpick2 == true && touched2nd68 && blocktouched68 == false || blocks->blocknum68 == 7 && goldpick == true && touched68 && blocktouched68 == false || blocks->blocknum68 == 7 && goldpick2 == true && touched2nd68 && blocktouched68 == false || blocks->blocknum68 == 10 && goldpick == true && touched68 && blocktouched68 == false || blocks->blocknum68 == 10 && goldpick2 == true && touched2nd68 && blocktouched68 == false) {
		SDL_DestroyTexture(blocks->block_68);
		howmanybroken += 1;
		blocks->block_68 = nullptr;
		blocktouched68 = true;
	}
	else if (blocks->blocknum68 == 4 && ironpick == true && touched68 && blocktouched68 == false || blocks->blocknum68 == 4 && ironpick2 == true && touched2nd68 && blocktouched68 == false || blocks->blocknum68 == 8 && ironpick == true && touched68 && blocktouched68 == false || blocks->blocknum68 == 8 && ironpick2 == true && touched2nd68 && blocktouched68 == false) {
		SDL_DestroyTexture(blocks->block_68);
		howmanybroken += 1;
		blocks->block_68 = nullptr;
		blocktouched68 = true;
	}
	else if (blocks->blocknum68 == 5 && coalpick == true && touched68 && blocktouched68 == false || blocks->blocknum68 == 5 && coalpick2 == true && touched2nd68 && blocktouched68 == false || blocks->blocknum68 == 9 && coalpick == true && touched68 && blocktouched68 == false || blocks->blocknum68 == 9 && coalpick2 == true && touched2nd68 && blocktouched68 == false) {
		SDL_DestroyTexture(blocks->block_68);
		howmanybroken += 1;
		blocks->block_68 = nullptr;
		blocktouched68 = true;
	}
	else if (blocks->blocknum68 == 6 && rubypick == true && touched2nd68 && blocktouched68 == false) {
		SDL_DestroyTexture(blocks->block_68);
		howmanybroken += 1;
		blocks->block_68 = nullptr;
		blocktouched68 = true;
	}
	if (blocks->blocknum69 == 0 && shovel == true && touched69 && blocktouched69 == false || blocks->blocknum69 == 0 && shovel2 == true && touched2nd69 && blocktouched69 == false) {
		SDL_DestroyTexture(blocks->block_69);
		howmanybroken += 1;
		blocks->block_69 = nullptr;
		blocktouched69 = true;
	}
	else if (blocks->blocknum69 == 1 && drill == true && touched69 && blocktouched69 == false || blocks->blocknum69 == 1 && drill2 == true && touched2nd69 && blocktouched69 == false) {
		SDL_DestroyTexture(blocks->block_69);
		howmanybroken += 1;
		blocks->block_69 = nullptr;
		blocktouched69 = true;
	}
	else if (blocks->blocknum69 == 2 && diamondpick == true && touched69 && blocktouched69 == false) {
		SDL_DestroyTexture(blocks->block_69);
		howmanybroken += 1;
		blocks->block_69 = nullptr;
		blocktouched69 = true;
	}
	else if (blocks->blocknum69 == 3 && goldpick == true && touched69 && blocktouched69 == false || blocks->blocknum69 == 3 && goldpick2 == true && touched2nd69 && blocktouched69 == false || blocks->blocknum69 == 7 && goldpick == true && touched69 && blocktouched69 == false || blocks->blocknum69 == 7 && goldpick2 == true && touched2nd69 && blocktouched69 == false || blocks->blocknum69 == 10 && goldpick == true && touched69 && blocktouched69 == false || blocks->blocknum69 == 10 && goldpick2 == true && touched2nd69 && blocktouched69 == false) {
		SDL_DestroyTexture(blocks->block_69);
		howmanybroken += 1;
		blocks->block_69 = nullptr;
		blocktouched69 = true;
	}
	else if (blocks->blocknum69 == 4 && ironpick == true && touched69 && blocktouched69 == false || blocks->blocknum69 == 4 && ironpick2 == true && touched2nd69 && blocktouched69 == false || blocks->blocknum69 == 8 && ironpick == true && touched69 && blocktouched69 == false || blocks->blocknum69 == 8 && ironpick2 == true && touched2nd69 && blocktouched69 == false) {
		SDL_DestroyTexture(blocks->block_69);
		howmanybroken += 1;
		blocks->block_69 = nullptr;
		blocktouched69 = true;
	}
	else if (blocks->blocknum69 == 5 && coalpick == true && touched69 && blocktouched69 == false || blocks->blocknum69 == 5 && coalpick2 == true && touched2nd69 && blocktouched69 == false || blocks->blocknum69 == 9 && coalpick == true && touched69 && blocktouched69 == false || blocks->blocknum69 == 9 && coalpick2 == true && touched2nd69 && blocktouched69 == false) {
		SDL_DestroyTexture(blocks->block_69);
		howmanybroken += 1;
		blocks->block_69 = nullptr;
		blocktouched69 = true;
	}
	else if (blocks->blocknum69 == 6 && rubypick == true && touched2nd69 && blocktouched69 == false) {
		SDL_DestroyTexture(blocks->block_69);
		howmanybroken += 1;
		blocks->block_69 = nullptr;
		blocktouched69 = true;
	}
	if (blocks->blocknum70 == 0 && shovel == true && touched70 && blocktouched70 == false || blocks->blocknum70 == 0 && shovel2 == true && touched2nd70 && blocktouched70 == false) {
		SDL_DestroyTexture(blocks->block_70);
		howmanybroken += 1;
		blocks->block_70 = nullptr;
		blocktouched70 = true;
	}
	else if (blocks->blocknum70 == 1 && drill == true && touched70 && blocktouched70 == false || blocks->blocknum70 == 1 && drill2 == true && touched2nd70 && blocktouched70 == false) {
		SDL_DestroyTexture(blocks->block_70);
		howmanybroken += 1;
		blocks->block_70 = nullptr;
		blocktouched70 = true;
	}
	else if (blocks->blocknum70 == 2 && diamondpick == true && touched70 && blocktouched70 == false) {
		SDL_DestroyTexture(blocks->block_70);
		howmanybroken += 1;
		blocks->block_70 = nullptr;
		blocktouched70 = true;
	}
	else if (blocks->blocknum70 == 3 && goldpick == true && touched70 && blocktouched70 == false || blocks->blocknum70 == 3 && goldpick2 == true && touched2nd70 && blocktouched70 == false || blocks->blocknum70 == 7 && goldpick == true && touched70 && blocktouched70 == false || blocks->blocknum70 == 7 && goldpick2 == true && touched2nd70 && blocktouched70 == false || blocks->blocknum70 == 10 && goldpick == true && touched70 && blocktouched70 == false || blocks->blocknum70 == 10 && goldpick2 == true && touched2nd70 && blocktouched70 == false) {
		SDL_DestroyTexture(blocks->block_70);
		howmanybroken += 1;
		blocks->block_70 = nullptr;
		blocktouched70 = true;
	}
	else if (blocks->blocknum70 == 4 && ironpick == true && touched70 && blocktouched70 == false || blocks->blocknum70 == 4 && ironpick2 == true && touched2nd70 && blocktouched70 == false || blocks->blocknum70 == 8 && ironpick == true && touched70 && blocktouched70 == false || blocks->blocknum70 == 8 && ironpick2 == true && touched2nd70 && blocktouched70 == false) {
		SDL_DestroyTexture(blocks->block_70);
		howmanybroken += 1;
		blocks->block_70 = nullptr;
		blocktouched70 = true;
	}
	else if (blocks->blocknum70 == 5 && coalpick == true && touched70 && blocktouched70 == false || blocks->blocknum70 == 5 && coalpick2 == true && touched2nd70 && blocktouched70 == false || blocks->blocknum70 == 9 && coalpick == true && touched70 && blocktouched70 == false || blocks->blocknum70 == 9 && coalpick2 == true && touched2nd70 && blocktouched70 == false) {
		SDL_DestroyTexture(blocks->block_70);
		howmanybroken += 1;
		blocks->block_70 = nullptr;
		blocktouched70 = true;
	}
	else if (blocks->blocknum70 == 6 && rubypick == true && touched2nd70 && blocktouched70 == false) {
		SDL_DestroyTexture(blocks->block_70);
		howmanybroken += 1;
		blocks->block_70 = nullptr;
		blocktouched70 = true;
	}
	if (blocks->blocknum71 == 0 && shovel == true && touched71 && blocktouched71 == false || blocks->blocknum71 == 0 && shovel2 == true && touched2nd71 && blocktouched71 == false) {
		SDL_DestroyTexture(blocks->block_71);
		howmanybroken += 1;
		blocks->block_71 = nullptr;
		blocktouched71 = true;
	}
	else if (blocks->blocknum71 == 1 && drill == true && touched71 && blocktouched71 == false || blocks->blocknum71 == 1 && drill2 == true && touched2nd71 && blocktouched71 == false) {
		SDL_DestroyTexture(blocks->block_71);
		howmanybroken += 1;
		blocks->block_71 = nullptr;
		blocktouched71 = true;
	}
	else if (blocks->blocknum71 == 2 && diamondpick == true && touched71 && blocktouched71 == false) {
		SDL_DestroyTexture(blocks->block_71);
		howmanybroken += 1;
		blocks->block_71 = nullptr;
		blocktouched71 = true;
	}
	else if (blocks->blocknum71 == 3 && goldpick == true && touched71 && blocktouched71 == false || blocks->blocknum71 == 3 && goldpick2 == true && touched2nd71 && blocktouched71 == false || blocks->blocknum71 == 7 && goldpick == true && touched71 && blocktouched71 == false || blocks->blocknum71 == 7 && goldpick2 == true && touched2nd71 && blocktouched71 == false || blocks->blocknum71 == 10 && goldpick == true && touched71 && blocktouched71 == false || blocks->blocknum71 == 10 && goldpick2 == true && touched2nd71 && blocktouched71 == false) {
		SDL_DestroyTexture(blocks->block_71);
		howmanybroken += 1;
		blocks->block_71 = nullptr;
		blocktouched71 = true;
	}
	else if (blocks->blocknum71 == 4 && ironpick == true && touched71 && blocktouched71 == false || blocks->blocknum71 == 4 && ironpick2 == true && touched2nd71 && blocktouched71 == false || blocks->blocknum71 == 8 && ironpick == true && touched71 && blocktouched71 == false || blocks->blocknum71 == 8 && ironpick2 == true && touched2nd71 && blocktouched71 == false) {
		SDL_DestroyTexture(blocks->block_71);
		howmanybroken += 1;
		blocks->block_71 = nullptr;
		blocktouched71 = true;
	}
	else if (blocks->blocknum71 == 5 && coalpick == true && touched71 && blocktouched71 == false || blocks->blocknum71 == 5 && coalpick2 == true && touched2nd71 && blocktouched71 == false || blocks->blocknum71 == 9 && coalpick == true && touched71 && blocktouched71 == false || blocks->blocknum71 == 9 && coalpick2 == true && touched2nd71 && blocktouched71 == false) {
		SDL_DestroyTexture(blocks->block_71);
		howmanybroken += 1;
		blocks->block_71 = nullptr;
		blocktouched71 = true;
	}
	else if (blocks->blocknum71 == 6 && rubypick == true && touched2nd71 && blocktouched71 == false) {
		SDL_DestroyTexture(blocks->block_71);
		howmanybroken += 1;
		blocks->block_71 = nullptr;
		blocktouched71 = true;
	}
	if (blocks->blocknum72 == 0 && shovel == true && touched72 && blocktouched72 == false || blocks->blocknum72 == 0 && shovel2 == true && touched2nd72 && blocktouched72 == false) {
		SDL_DestroyTexture(blocks->block_72);
		howmanybroken += 1;
		blocks->block_72 = nullptr;
		blocktouched72 = true;
	}
	else if (blocks->blocknum72 == 1 && drill == true && touched72 && blocktouched72 == false || blocks->blocknum72 == 1 && drill2 == true && touched2nd72 && blocktouched72 == false) {
		SDL_DestroyTexture(blocks->block_72);
		howmanybroken += 1;
		blocks->block_72 = nullptr;
		blocktouched72 = true;
	}
	else if (blocks->blocknum72 == 2 && diamondpick == true && touched72 && blocktouched72 == false) {
		SDL_DestroyTexture(blocks->block_72);
		howmanybroken += 1;
		blocks->block_72 = nullptr;
		blocktouched72 = true;
	}
	else if (blocks->blocknum72 == 3 && goldpick == true && touched72 && blocktouched72 == false || blocks->blocknum72 == 3 && goldpick2 == true && touched2nd72 && blocktouched72 == false || blocks->blocknum72 == 7 && goldpick == true && touched72 && blocktouched72 == false || blocks->blocknum72 == 7 && goldpick2 == true && touched2nd72 && blocktouched72 == false || blocks->blocknum72 == 10 && goldpick == true && touched72 && blocktouched72 == false || blocks->blocknum72 == 10 && goldpick2 == true && touched2nd72 && blocktouched72 == false) {
		SDL_DestroyTexture(blocks->block_72);
		howmanybroken += 1;
		blocks->block_72 = nullptr;
		blocktouched72 = true;
	}
	else if (blocks->blocknum72 == 4 && ironpick == true && touched72 && blocktouched72 == false || blocks->blocknum72 == 4 && ironpick2 == true && touched2nd72 && blocktouched72 == false || blocks->blocknum72 == 8 && ironpick == true && touched72 && blocktouched72 == false || blocks->blocknum72 == 8 && ironpick2 == true && touched2nd72 && blocktouched72 == false) {
		SDL_DestroyTexture(blocks->block_72);
		howmanybroken += 1;
		blocks->block_72 = nullptr;
		blocktouched72 = true;
	}
	else if (blocks->blocknum72 == 5 && coalpick == true && touched72 && blocktouched72 == false || blocks->blocknum72 == 5 && coalpick2 == true && touched2nd72 && blocktouched72 == false || blocks->blocknum72 == 9 && coalpick == true && touched72 && blocktouched72 == false || blocks->blocknum72 == 9 && coalpick2 == true && touched2nd72 && blocktouched72 == false) {
		SDL_DestroyTexture(blocks->block_72);
		howmanybroken += 1;
		blocks->block_72 = nullptr;
		blocktouched72 = true;
	}
	else if (blocks->blocknum72 == 6 && rubypick == true && touched2nd72 && blocktouched72 == false) {
		SDL_DestroyTexture(blocks->block_72);
		howmanybroken += 1;
		blocks->block_72 = nullptr;
		blocktouched72 = true;
	}
	if (blocks->blocknum73 == 0 && shovel == true && touched73 && blocktouched73 == false || blocks->blocknum73 == 0 && shovel2 == true && touched2nd73 && blocktouched73 == false) {
		SDL_DestroyTexture(blocks->block_73);
		howmanybroken += 1;
		blocks->block_73 = nullptr;
		blocktouched73 = true;
	}
	else if (blocks->blocknum73 == 1 && drill == true && touched73 && blocktouched73 == false || blocks->blocknum73 == 1 && drill2 == true && touched2nd73 && blocktouched73 == false) {
		SDL_DestroyTexture(blocks->block_73);
		howmanybroken += 1;
		blocks->block_73 = nullptr;
		blocktouched73 = true;
	}
	else if (blocks->blocknum73 == 2 && diamondpick == true && touched73 && blocktouched73 == false) {
		SDL_DestroyTexture(blocks->block_73);
		howmanybroken += 1;
		blocks->block_73 = nullptr;
		blocktouched73 = true;
	}
	else if (blocks->blocknum73 == 3 && goldpick == true && touched73 && blocktouched73 == false || blocks->blocknum73 == 3 && goldpick2 == true && touched2nd73 && blocktouched73 == false || blocks->blocknum73 == 7 && goldpick == true && touched73 && blocktouched73 == false || blocks->blocknum73 == 7 && goldpick2 == true && touched2nd73 && blocktouched73 == false || blocks->blocknum73 == 10 && goldpick == true && touched73 && blocktouched73 == false || blocks->blocknum73 == 10 && goldpick2 == true && touched2nd73 && blocktouched73 == false) {
		SDL_DestroyTexture(blocks->block_73);
		howmanybroken += 1;
		blocks->block_73 = nullptr;
		blocktouched73 = true;
	}
	else if (blocks->blocknum73 == 4 && ironpick == true && touched73 && blocktouched73 == false || blocks->blocknum73 == 4 && ironpick2 == true && touched2nd73 && blocktouched73 == false || blocks->blocknum73 == 8 && ironpick == true && touched73 && blocktouched73 == false || blocks->blocknum73 == 8 && ironpick2 == true && touched2nd73 && blocktouched73 == false) {
		SDL_DestroyTexture(blocks->block_73);
		howmanybroken += 1;
		blocks->block_73 = nullptr;
		blocktouched73 = true;
	}
	else if (blocks->blocknum73 == 5 && coalpick == true && touched73 && blocktouched73 == false || blocks->blocknum73 == 5 && coalpick2 == true && touched2nd73 && blocktouched73 == false || blocks->blocknum73 == 9 && coalpick == true && touched73 && blocktouched73 == false || blocks->blocknum73 == 9 && coalpick2 == true && touched2nd73 && blocktouched73 == false) {
		SDL_DestroyTexture(blocks->block_73);
		howmanybroken += 1;
		blocks->block_73 = nullptr;
		blocktouched73 = true;
	}
	else if (blocks->blocknum73 == 6 && rubypick == true && touched2nd73 && blocktouched73 == false) {
		SDL_DestroyTexture(blocks->block_73);
		howmanybroken += 1;
		blocks->block_73 = nullptr;
		blocktouched73 = true;
	}
	if (blocks->blocknum74 == 0 && shovel == true && touched74 && blocktouched74 == false || blocks->blocknum74 == 0 && shovel2 == true && touched2nd74 && blocktouched74 == false) {
		SDL_DestroyTexture(blocks->block_74);
		howmanybroken += 1;
		blocks->block_74 = nullptr;
		blocktouched74 = true;
	}
	else if (blocks->blocknum74 == 1 && drill == true && touched74 && blocktouched74 == false || blocks->blocknum74 == 1 && drill2 == true && touched2nd74 && blocktouched74 == false) {
		SDL_DestroyTexture(blocks->block_74);
		howmanybroken += 1;
		blocks->block_74 = nullptr;
		blocktouched74 = true;
	}
	else if (blocks->blocknum74 == 2 && diamondpick == true && touched74 && blocktouched74 == false) {
		SDL_DestroyTexture(blocks->block_74);
		howmanybroken += 1;
		blocks->block_74 = nullptr;
		blocktouched74 = true;
	}
	else if (blocks->blocknum74 == 3 && goldpick == true && touched74 && blocktouched74 == false || blocks->blocknum74 == 3 && goldpick2 == true && touched2nd74 && blocktouched74 == false || blocks->blocknum74 == 7 && goldpick == true && touched74 && blocktouched74 == false || blocks->blocknum74 == 7 && goldpick2 == true && touched2nd74 && blocktouched74 == false || blocks->blocknum74 == 10 && goldpick == true && touched74 && blocktouched74 == false || blocks->blocknum74 == 10 && goldpick2 == true && touched2nd74 && blocktouched74 == false) {
		SDL_DestroyTexture(blocks->block_74);
		howmanybroken += 1;
		blocks->block_74 = nullptr;
		blocktouched74 = true;
	}
	else if (blocks->blocknum74 == 4 && ironpick == true && touched74 && blocktouched74 == false || blocks->blocknum74 == 4 && ironpick2 == true && touched2nd74 && blocktouched74 == false || blocks->blocknum74 == 8 && ironpick == true && touched74 && blocktouched74 == false || blocks->blocknum74 == 8 && ironpick2 == true && touched2nd74 && blocktouched74 == false) {
		SDL_DestroyTexture(blocks->block_74);
		howmanybroken += 1;
		blocks->block_74 = nullptr;
		blocktouched74 = true;
	}
	else if (blocks->blocknum74 == 5 && coalpick == true && touched74 && blocktouched74 == false || blocks->blocknum74 == 5 && coalpick2 == true && touched2nd74 && blocktouched74 == false || blocks->blocknum74 == 9 && coalpick == true && touched74 && blocktouched74 == false || blocks->blocknum74 == 9 && coalpick2 == true && touched2nd74 && blocktouched74 == false) {
		SDL_DestroyTexture(blocks->block_74);
		howmanybroken += 1;
		blocks->block_74 = nullptr;
		blocktouched74 = true;
	}
	else if (blocks->blocknum74 == 6 && rubypick == true && touched2nd74 && blocktouched74 == false) {
		SDL_DestroyTexture(blocks->block_74);
		howmanybroken += 1;
		blocks->block_74 = nullptr;
		blocktouched74 = true;
	}
	if (blocks->blocknum75 == 0 && shovel == true && touched75 && blocktouched75 == false || blocks->blocknum75 == 0 && shovel2 == true && touched2nd75 && blocktouched75 == false) {
		SDL_DestroyTexture(blocks->block_75);
		howmanybroken += 1;
		blocks->block_75 = nullptr;
		blocktouched75 = true;
	}
	else if (blocks->blocknum75 == 1 && drill == true && touched75 && blocktouched75 == false || blocks->blocknum75 == 1 && drill2 == true && touched2nd75 && blocktouched75 == false) {
		SDL_DestroyTexture(blocks->block_75);
		howmanybroken += 1;
		blocks->block_75 = nullptr;
		blocktouched75 = true;
	}
	else if (blocks->blocknum75 == 2 && diamondpick == true && touched75 && blocktouched75 == false) {
		SDL_DestroyTexture(blocks->block_75);
		howmanybroken += 1;
		blocks->block_75 = nullptr;
		blocktouched75 = true;
	}
	else if (blocks->blocknum75 == 3 && goldpick == true && touched75 && blocktouched75 == false || blocks->blocknum75 == 3 && goldpick2 == true && touched2nd75 && blocktouched75 == false || blocks->blocknum75 == 7 && goldpick == true && touched75 && blocktouched75 == false || blocks->blocknum75 == 7 && goldpick2 == true && touched2nd75 && blocktouched75 == false || blocks->blocknum75 == 10 && goldpick == true && touched75 && blocktouched75 == false || blocks->blocknum75 == 10 && goldpick2 == true && touched2nd75 && blocktouched75 == false) {
		SDL_DestroyTexture(blocks->block_75);
		howmanybroken += 1;
		blocks->block_75 = nullptr;
		blocktouched75 = true;
	}
	else if (blocks->blocknum75 == 4 && ironpick == true && touched75 && blocktouched75 == false || blocks->blocknum75 == 4 && ironpick2 == true && touched2nd75 && blocktouched75 == false || blocks->blocknum75 == 8 && ironpick == true && touched75 && blocktouched75 == false || blocks->blocknum75 == 8 && ironpick2 == true && touched2nd75 && blocktouched75 == false) {
		SDL_DestroyTexture(blocks->block_75);
		howmanybroken += 1;
		blocks->block_75 = nullptr;
		blocktouched75 = true;
	}
	else if (blocks->blocknum75 == 5 && coalpick == true && touched75 && blocktouched75 == false || blocks->blocknum75 == 5 && coalpick2 == true && touched2nd75 && blocktouched75 == false || blocks->blocknum75 == 9 && coalpick == true && touched75 && blocktouched75 == false || blocks->blocknum75 == 9 && coalpick2 == true && touched2nd75 && blocktouched75 == false) {
		SDL_DestroyTexture(blocks->block_75);
		howmanybroken += 1;
		blocks->block_75 = nullptr;
		blocktouched75 = true;
	}
	else if (blocks->blocknum75 == 6 && rubypick == true && touched2nd75 && blocktouched75 == false) {
		SDL_DestroyTexture(blocks->block_75);
		howmanybroken += 1;
		blocks->block_75 = nullptr;
		blocktouched75 = true;
	}
	if (blocks->blocknum76 == 0 && shovel == true && touched76 && blocktouched76 == false || blocks->blocknum76 == 0 && shovel2 == true && touched2nd76 && blocktouched76 == false) {
		SDL_DestroyTexture(blocks->block_76);
		howmanybroken += 1;
		blocks->block_76 = nullptr;
		blocktouched76 = true;
	}
	else if (blocks->blocknum76 == 1 && drill == true && touched76 && blocktouched76 == false || blocks->blocknum76 == 1 && drill2 == true && touched2nd76 && blocktouched76 == false) {
		SDL_DestroyTexture(blocks->block_76);
		howmanybroken += 1;
		blocks->block_76 = nullptr;
		blocktouched76 = true;
	}
	else if (blocks->blocknum76 == 2 && diamondpick == true && touched76 && blocktouched76 == false) {
		SDL_DestroyTexture(blocks->block_76);
		howmanybroken += 1;
		blocks->block_76 = nullptr;
		blocktouched76 = true;
	}
	else if (blocks->blocknum76 == 3 && goldpick == true && touched76 && blocktouched76 == false || blocks->blocknum76 == 3 && goldpick2 == true && touched2nd76 && blocktouched76 == false || blocks->blocknum76 == 7 && goldpick == true && touched76 && blocktouched76 == false || blocks->blocknum76 == 7 && goldpick2 == true && touched2nd76 && blocktouched76 == false || blocks->blocknum76 == 10 && goldpick == true && touched76 && blocktouched76 == false || blocks->blocknum76 == 10 && goldpick2 == true && touched2nd76 && blocktouched76 == false) {
		SDL_DestroyTexture(blocks->block_76);
		howmanybroken += 1;
		blocks->block_76 = nullptr;
		blocktouched76 = true;
	}
	else if (blocks->blocknum76 == 4 && ironpick == true && touched76 && blocktouched76 == false || blocks->blocknum76 == 4 && ironpick2 == true && touched2nd76 && blocktouched76 == false || blocks->blocknum76 == 8 && ironpick == true && touched76 && blocktouched76 == false || blocks->blocknum76 == 8 && ironpick2 == true && touched2nd76 && blocktouched76 == false) {
		SDL_DestroyTexture(blocks->block_76);
		howmanybroken += 1;
		blocks->block_76 = nullptr;
		blocktouched76 = true;
	}
	else if (blocks->blocknum76 == 5 && coalpick == true && touched76 && blocktouched76 == false || blocks->blocknum76 == 5 && coalpick2 == true && touched2nd76 && blocktouched76 == false || blocks->blocknum76 == 9 && coalpick == true && touched76 && blocktouched76 == false || blocks->blocknum76 == 9 && coalpick2 == true && touched2nd76 && blocktouched76 == false) {
		SDL_DestroyTexture(blocks->block_76);
		howmanybroken += 1;
		blocks->block_76 = nullptr;
		blocktouched76 = true;
	}
	else if (blocks->blocknum76 == 6 && rubypick == true && touched2nd76 && blocktouched76 == false) {
		SDL_DestroyTexture(blocks->block_76);
		howmanybroken += 1;
		blocks->block_76 = nullptr;
		blocktouched76 = true;
	}
	if (blocks->blocknum77 == 0 && shovel == true && touched77 && blocktouched77 == false || blocks->blocknum77 == 0 && shovel2 == true && touched2nd77 && blocktouched77 == false) {
		SDL_DestroyTexture(blocks->block_77);
		howmanybroken += 1;
		blocks->block_77 = nullptr;
		blocktouched77 = true;
	}
	else if (blocks->blocknum77 == 1 && drill == true && touched77 && blocktouched77 == false || blocks->blocknum77 == 1 && drill2 == true && touched2nd77 && blocktouched77 == false) {
		SDL_DestroyTexture(blocks->block_77);
		howmanybroken += 1;
		blocks->block_77 = nullptr;
		blocktouched77 = true;
	}
	else if (blocks->blocknum77 == 2 && diamondpick == true && touched77 && blocktouched77 == false) {
		SDL_DestroyTexture(blocks->block_77);
		howmanybroken += 1;
		blocks->block_77 = nullptr;
		blocktouched77 = true;
	}
	else if (blocks->blocknum77 == 3 && goldpick == true && touched77 && blocktouched77 == false || blocks->blocknum77 == 3 && goldpick2 == true && touched2nd77 && blocktouched77 == false || blocks->blocknum77 == 7 && goldpick == true && touched77 && blocktouched77 == false || blocks->blocknum77 == 7 && goldpick2 == true && touched2nd77 && blocktouched77 == false || blocks->blocknum77 == 10 && goldpick == true && touched77 && blocktouched77 == false || blocks->blocknum77 == 10 && goldpick2 == true && touched2nd77 && blocktouched77 == false) {
		SDL_DestroyTexture(blocks->block_77);
		howmanybroken += 1;
		blocks->block_77 = nullptr;
		blocktouched77 = true;
	}
	else if (blocks->blocknum77 == 4 && ironpick == true && touched77 && blocktouched77 == false || blocks->blocknum77 == 4 && ironpick2 == true && touched2nd77 && blocktouched77 == false || blocks->blocknum77 == 8 && ironpick == true && touched77 && blocktouched77 == false || blocks->blocknum77 == 8 && ironpick2 == true && touched2nd77 && blocktouched77 == false) {
		SDL_DestroyTexture(blocks->block_77);
		howmanybroken += 1;
		blocks->block_77 = nullptr;
		blocktouched77 = true;
	}
	else if (blocks->blocknum77 == 5 && coalpick == true && touched77 && blocktouched77 == false || blocks->blocknum77 == 5 && coalpick2 == true && touched2nd77 && blocktouched77 == false || blocks->blocknum77 == 9 && coalpick == true && touched77 && blocktouched77 == false || blocks->blocknum77 == 9 && coalpick2 == true && touched2nd77 && blocktouched77 == false) {
		SDL_DestroyTexture(blocks->block_77);
		howmanybroken += 1;
		blocks->block_77 = nullptr;
		blocktouched77 = true;
	}
	else if (blocks->blocknum77 == 6 && rubypick == true && touched2nd77 && blocktouched77 == false) {
		SDL_DestroyTexture(blocks->block_77);
		howmanybroken += 1;
		blocks->block_77 = nullptr;
		blocktouched77 = true;
	}
	if (blocks->blocknum78 == 0 && shovel == true && touched78 && blocktouched78 == false || blocks->blocknum78 == 0 && shovel2 == true && touched2nd78 && blocktouched78 == false) {
		SDL_DestroyTexture(blocks->block_78);
		howmanybroken += 1;
		blocks->block_78 = nullptr;
		blocktouched78 = true;
	}
	else if (blocks->blocknum78 == 1 && drill == true && touched78 && blocktouched78 == false || blocks->blocknum78 == 1 && drill2 == true && touched2nd78 && blocktouched78 == false) {
		SDL_DestroyTexture(blocks->block_78);
		howmanybroken += 1;
		blocks->block_78 = nullptr;
		blocktouched78 = true;
	}
	else if (blocks->blocknum78 == 2 && diamondpick == true && touched78 && blocktouched78 == false) {
		SDL_DestroyTexture(blocks->block_78);
		howmanybroken += 1;
		blocks->block_78 = nullptr;
		blocktouched78 = true;
	}
	else if (blocks->blocknum78 == 3 && goldpick == true && touched78 && blocktouched78 == false || blocks->blocknum78 == 3 && goldpick2 == true && touched2nd78 && blocktouched78 == false || blocks->blocknum78 == 7 && goldpick == true && touched78 && blocktouched78 == false || blocks->blocknum78 == 7 && goldpick2 == true && touched2nd78 && blocktouched78 == false || blocks->blocknum78 == 10 && goldpick == true && touched78 && blocktouched78 == false || blocks->blocknum78 == 10 && goldpick2 == true && touched2nd78 && blocktouched78 == false) {
		SDL_DestroyTexture(blocks->block_78);
		howmanybroken += 1;
		blocks->block_78 = nullptr;
		blocktouched78 = true;
	}
	else if (blocks->blocknum78 == 4 && ironpick == true && touched78 && blocktouched78 == false || blocks->blocknum78 == 4 && ironpick2 == true && touched2nd78 && blocktouched78 == false || blocks->blocknum78 == 8 && ironpick == true && touched78 && blocktouched78 == false || blocks->blocknum78 == 8 && ironpick2 == true && touched2nd78 && blocktouched78 == false) {
		SDL_DestroyTexture(blocks->block_78);
		howmanybroken += 1;
		blocks->block_78 = nullptr;
		blocktouched78 = true;
	}
	else if (blocks->blocknum78 == 5 && coalpick == true && touched78 && blocktouched78 == false || blocks->blocknum78 == 5 && coalpick2 == true && touched2nd78 && blocktouched78 == false || blocks->blocknum78 == 9 && coalpick == true && touched78 && blocktouched78 == false || blocks->blocknum78 == 9 && coalpick2 == true && touched2nd78 && blocktouched78 == false) {
		SDL_DestroyTexture(blocks->block_78);
		howmanybroken += 1;
		blocks->block_78 = nullptr;
		blocktouched78 = true;
	}
	else if (blocks->blocknum78 == 6 && rubypick == true && touched2nd78 && blocktouched78 == false) {
		SDL_DestroyTexture(blocks->block_78);
		howmanybroken += 1;
		blocks->block_78 = nullptr;
		blocktouched78 = true;
	}
	if (blocks->blocknum79 == 0 && shovel == true && touched79 && blocktouched79 == false || blocks->blocknum79 == 0 && shovel2 == true && touched2nd79 && blocktouched79 == false) {
		SDL_DestroyTexture(blocks->block_79);
		howmanybroken += 1;
		blocks->block_79 = nullptr;
		blocktouched79 = true;
	}
	else if (blocks->blocknum79 == 1 && drill == true && touched79 && blocktouched79 == false || blocks->blocknum79 == 1 && drill2 == true && touched2nd79 && blocktouched79 == false) {
		SDL_DestroyTexture(blocks->block_79);
		howmanybroken += 1;
		blocks->block_79 = nullptr;
		blocktouched79 = true;
	}
	else if (blocks->blocknum79 == 2 && diamondpick == true && touched79 && blocktouched79 == false) {
		SDL_DestroyTexture(blocks->block_79);
		howmanybroken += 1;
		blocks->block_79 = nullptr;
		blocktouched79 = true;
	}
	else if (blocks->blocknum79 == 3 && goldpick == true && touched79 && blocktouched79 == false || blocks->blocknum79 == 3 && goldpick2 == true && touched2nd79 && blocktouched79 == false || blocks->blocknum79 == 7 && goldpick == true && touched79 && blocktouched79 == false || blocks->blocknum79 == 7 && goldpick2 == true && touched2nd79 && blocktouched79 == false || blocks->blocknum79 == 10 && goldpick == true && touched79 && blocktouched79 == false || blocks->blocknum79 == 10 && goldpick2 == true && touched2nd79 && blocktouched79 == false) {
		SDL_DestroyTexture(blocks->block_79);
		howmanybroken += 1;
		blocks->block_79 = nullptr;
		blocktouched79 = true;
	}
	else if (blocks->blocknum79 == 4 && ironpick == true && touched79 && blocktouched79 == false || blocks->blocknum79 == 4 && ironpick2 == true && touched2nd79 && blocktouched79 == false || blocks->blocknum79 == 8 && ironpick == true && touched79 && blocktouched79 == false || blocks->blocknum79 == 8 && ironpick2 == true && touched2nd79 && blocktouched79 == false) {
		SDL_DestroyTexture(blocks->block_79);
		howmanybroken += 1;
		blocks->block_79 = nullptr;
		blocktouched79 = true;
	}
	else if (blocks->blocknum79 == 5 && coalpick == true && touched79 && blocktouched79 == false || blocks->blocknum79 == 5 && coalpick2 == true && touched2nd79 && blocktouched79 == false || blocks->blocknum79 == 9 && coalpick == true && touched79 && blocktouched79 == false || blocks->blocknum79 == 9 && coalpick2 == true && touched2nd79 && blocktouched79 == false) {
		SDL_DestroyTexture(blocks->block_79);
		howmanybroken += 1;
		blocks->block_79 = nullptr;
		blocktouched79 = true;
	}
	else if (blocks->blocknum79 == 6 && rubypick == true && touched2nd79 && blocktouched79 == false) {
		SDL_DestroyTexture(blocks->block_79);
		howmanybroken += 1;
		blocks->block_79 = nullptr;
		blocktouched79 = true;
	}
	if (blocks->blocknum80 == 0 && shovel == true && touched80 && blocktouched80 == false || blocks->blocknum80 == 0 && shovel2 == true && touched2nd80 && blocktouched80 == false) {
		SDL_DestroyTexture(blocks->block_80);
		howmanybroken += 1;
		blocks->block_80 = nullptr;
		blocktouched80 = true;
	}
	else if (blocks->blocknum80 == 1 && drill == true && touched80 && blocktouched80 == false || blocks->blocknum80 == 1 && drill2 == true && touched2nd80 && blocktouched80 == false) {
		SDL_DestroyTexture(blocks->block_80);
		howmanybroken += 1;
		blocks->block_80 = nullptr;
		blocktouched80 = true;
	}
	else if (blocks->blocknum80 == 2 && diamondpick == true && touched80 && blocktouched80 == false) {
		SDL_DestroyTexture(blocks->block_80);
		howmanybroken += 1;
		blocks->block_80 = nullptr;
		blocktouched80 = true;
	}
	else if (blocks->blocknum80 == 3 && goldpick == true && touched80 && blocktouched80 == false || blocks->blocknum80 == 3 && goldpick2 == true && touched2nd80 && blocktouched80 == false || blocks->blocknum80 == 7 && goldpick == true && touched80 && blocktouched80 == false || blocks->blocknum80 == 7 && goldpick2 == true && touched2nd80 && blocktouched80 == false || blocks->blocknum80 == 10 && goldpick == true && touched80 && blocktouched80 == false || blocks->blocknum80 == 10 && goldpick2 == true && touched2nd80 && blocktouched80 == false) {
		SDL_DestroyTexture(blocks->block_80);
		howmanybroken += 1;
		blocks->block_80 = nullptr;
		blocktouched80 = true;
	}
	else if (blocks->blocknum80 == 4 && ironpick == true && touched80 && blocktouched80 == false || blocks->blocknum80 == 4 && ironpick2 == true && touched2nd80 && blocktouched80 == false || blocks->blocknum80 == 8 && ironpick == true && touched80 && blocktouched80 == false || blocks->blocknum80 == 8 && ironpick2 == true && touched2nd80 && blocktouched80 == false) {
		SDL_DestroyTexture(blocks->block_80);
		howmanybroken += 1;
		blocks->block_80 = nullptr;
		blocktouched80 = true;
	}
	else if (blocks->blocknum80 == 5 && coalpick == true && touched80 && blocktouched80 == false || blocks->blocknum80 == 5 && coalpick2 == true && touched2nd80 && blocktouched80 == false || blocks->blocknum80 == 9 && coalpick == true && touched80 && blocktouched80 == false || blocks->blocknum80 == 9 && coalpick2 == true && touched2nd80 && blocktouched80 == false) {
		SDL_DestroyTexture(blocks->block_80);
		howmanybroken += 1;
		blocks->block_80 = nullptr;
		blocktouched80 = true;
	}
	else if (blocks->blocknum80 == 6 && rubypick == true && touched2nd80 && blocktouched80 == false) {
		SDL_DestroyTexture(blocks->block_80);
		howmanybroken += 1;
		blocks->block_80 = nullptr;
		blocktouched80 = true;
	}
	if (blocks->blocknum81 == 0 && shovel == true && touched81 && blocktouched81 == false || blocks->blocknum81 == 0 && shovel2 == true && touched2nd81 && blocktouched81 == false) {
		SDL_DestroyTexture(blocks->block_81);
		howmanybroken += 1;
		blocks->block_81 = nullptr;
		blocktouched81 = true;
	}
	else if (blocks->blocknum81 == 1 && drill == true && touched81 && blocktouched81 == false || blocks->blocknum81 == 1 && drill2 == true && touched2nd81 && blocktouched81 == false) {
		SDL_DestroyTexture(blocks->block_81);
		howmanybroken += 1;
		blocks->block_81 = nullptr;
		blocktouched81 = true;
	}
	else if (blocks->blocknum81 == 2 && diamondpick == true && touched81 && blocktouched81 == false) {
		SDL_DestroyTexture(blocks->block_81);
		howmanybroken += 1;
		blocks->block_81 = nullptr;
		blocktouched81 = true;
	}
	else if (blocks->blocknum81 == 3 && goldpick == true && touched81 && blocktouched81 == false || blocks->blocknum81 == 3 && goldpick2 == true && touched2nd81 && blocktouched81 == false || blocks->blocknum81 == 7 && goldpick == true && touched81 && blocktouched81 == false || blocks->blocknum81 == 7 && goldpick2 == true && touched2nd81 && blocktouched81 == false || blocks->blocknum81 == 10 && goldpick == true && touched81 && blocktouched81 == false || blocks->blocknum81 == 10 && goldpick2 == true && touched2nd81 && blocktouched81 == false) {
		SDL_DestroyTexture(blocks->block_81);
		howmanybroken += 1;
		blocks->block_81 = nullptr;
		blocktouched81 = true;
	}
	else if (blocks->blocknum81 == 4 && ironpick == true && touched81 && blocktouched81 == false || blocks->blocknum81 == 4 && ironpick2 == true && touched2nd81 && blocktouched81 == false || blocks->blocknum81 == 8 && ironpick == true && touched81 && blocktouched81 == false || blocks->blocknum81 == 8 && ironpick2 == true && touched2nd81 && blocktouched81 == false) {
		SDL_DestroyTexture(blocks->block_81);
		howmanybroken += 1;
		blocks->block_81 = nullptr;
		blocktouched81 = true;
	}
	else if (blocks->blocknum81 == 5 && coalpick == true && touched81 && blocktouched81 == false || blocks->blocknum81 == 5 && coalpick2 == true && touched2nd81 && blocktouched81 == false || blocks->blocknum81 == 9 && coalpick == true && touched81 && blocktouched81 == false || blocks->blocknum81 == 9 && coalpick2 == true && touched2nd81 && blocktouched81 == false) {
		SDL_DestroyTexture(blocks->block_81);
		howmanybroken += 1;
		blocks->block_81 = nullptr;
		blocktouched81 = true;
	}
	else if (blocks->blocknum81 == 6 && rubypick == true && touched2nd81 && blocktouched81 == false) {
		SDL_DestroyTexture(blocks->block_81);
		howmanybroken += 1;
		blocks->block_81 = nullptr;
		blocktouched81 = true;
	}
	if (blocks->blocknum82 == 0 && shovel == true && touched82 && blocktouched82 == false || blocks->blocknum82 == 0 && shovel2 == true && touched2nd82 && blocktouched82 == false) {
		SDL_DestroyTexture(blocks->block_82);
		howmanybroken += 1;
		blocks->block_82 = nullptr;
		blocktouched82 = true;
	}
	else if (blocks->blocknum82 == 1 && drill == true && touched82 && blocktouched82 == false || blocks->blocknum82 == 1 && drill2 == true && touched2nd82 && blocktouched82 == false) {
		SDL_DestroyTexture(blocks->block_82);
		howmanybroken += 1;
		blocks->block_82 = nullptr;
		blocktouched82 = true;
	}
	else if (blocks->blocknum82 == 2 && diamondpick == true && touched82 && blocktouched82 == false) {
		SDL_DestroyTexture(blocks->block_82);
		howmanybroken += 1;
		blocks->block_82 = nullptr;
		blocktouched82 = true;
	}
	else if (blocks->blocknum82 == 3 && goldpick == true && touched82 && blocktouched82 == false || blocks->blocknum82 == 3 && goldpick2 == true && touched2nd82 && blocktouched82 == false || blocks->blocknum82 == 7 && goldpick == true && touched82 && blocktouched82 == false || blocks->blocknum82 == 7 && goldpick2 == true && touched2nd82 && blocktouched82 == false || blocks->blocknum82 == 10 && goldpick == true && touched82 && blocktouched82 == false || blocks->blocknum82 == 10 && goldpick2 == true && touched2nd82 && blocktouched82 == false) {
		SDL_DestroyTexture(blocks->block_82);
		howmanybroken += 1;
		blocks->block_82 = nullptr;
		blocktouched82 = true;
	}
	else if (blocks->blocknum82 == 4 && ironpick == true && touched82 && blocktouched82 == false || blocks->blocknum82 == 4 && ironpick2 == true && touched2nd82 && blocktouched82 == false || blocks->blocknum82 == 8 && ironpick == true && touched82 && blocktouched82 == false || blocks->blocknum82 == 8 && ironpick2 == true && touched2nd82 && blocktouched82 == false) {
		SDL_DestroyTexture(blocks->block_82);
		howmanybroken += 1;
		blocks->block_82 = nullptr;
		blocktouched82 = true;
	}
	else if (blocks->blocknum82 == 5 && coalpick == true && touched82 && blocktouched82 == false || blocks->blocknum82 == 5 && coalpick2 == true && touched2nd82 && blocktouched82 == false || blocks->blocknum82 == 9 && coalpick == true && touched82 && blocktouched82 == false || blocks->blocknum82 == 9 && coalpick2 == true && touched2nd82 && blocktouched82 == false) {
		SDL_DestroyTexture(blocks->block_82);
		howmanybroken += 1;
		blocks->block_82 = nullptr;
		blocktouched82 = true;
	}
	else if (blocks->blocknum82 == 6 && rubypick == true && touched2nd82 && blocktouched82 == false) {
		SDL_DestroyTexture(blocks->block_82);
		howmanybroken += 1;
		blocks->block_82 = nullptr;
		blocktouched82 = true;
	}
	if (blocks->blocknum83 == 0 && shovel == true && touched83 && blocktouched83 == false || blocks->blocknum83 == 0 && shovel2 == true && touched2nd83 && blocktouched83 == false) {
		SDL_DestroyTexture(blocks->block_83);
		howmanybroken += 1;
		blocks->block_83 = nullptr;
		blocktouched83 = true;
	}
	else if (blocks->blocknum83 == 1 && drill == true && touched83 && blocktouched83 == false || blocks->blocknum83 == 1 && drill2 == true && touched2nd83 && blocktouched83 == false) {
		SDL_DestroyTexture(blocks->block_83);
		howmanybroken += 1;
		blocks->block_83 = nullptr;
		blocktouched83 = true;
	}
	else if (blocks->blocknum83 == 2 && diamondpick == true && touched83 && blocktouched83 == false) {
		SDL_DestroyTexture(blocks->block_83);
		howmanybroken += 1;
		blocks->block_83 = nullptr;
		blocktouched83 = true;
	}
	else if (blocks->blocknum83 == 3 && goldpick == true && touched83 && blocktouched83 == false || blocks->blocknum83 == 3 && goldpick2 == true && touched2nd83 && blocktouched83 == false || blocks->blocknum83 == 7 && goldpick == true && touched83 && blocktouched83 == false || blocks->blocknum83 == 7 && goldpick2 == true && touched2nd83 && blocktouched83 == false || blocks->blocknum83 == 10 && goldpick == true && touched83 && blocktouched83 == false || blocks->blocknum83 == 10 && goldpick2 == true && touched2nd83 && blocktouched83 == false) {
		SDL_DestroyTexture(blocks->block_83);
		howmanybroken += 1;
		blocks->block_83 = nullptr;
		blocktouched83 = true;
	}
	else if (blocks->blocknum83 == 4 && ironpick == true && touched83 && blocktouched83 == false || blocks->blocknum83 == 4 && ironpick2 == true && touched2nd83 && blocktouched83 == false || blocks->blocknum83 == 8 && ironpick == true && touched83 && blocktouched83 == false || blocks->blocknum83 == 8 && ironpick2 == true && touched2nd83 && blocktouched83 == false) {
		SDL_DestroyTexture(blocks->block_83);
		howmanybroken += 1;
		blocks->block_83 = nullptr;
		blocktouched83 = true;
	}
	else if (blocks->blocknum83 == 5 && coalpick == true && touched83 && blocktouched83 == false || blocks->blocknum83 == 5 && coalpick2 == true && touched2nd83 && blocktouched83 == false || blocks->blocknum83 == 9 && coalpick == true && touched83 && blocktouched83 == false || blocks->blocknum83 == 9 && coalpick2 == true && touched2nd83 && blocktouched83 == false) {
		SDL_DestroyTexture(blocks->block_83);
		howmanybroken += 1;
		blocks->block_83 = nullptr;
		blocktouched83 = true;
	}
	else if (blocks->blocknum83 == 6 && rubypick == true && touched2nd83 && blocktouched83 == false) {
		SDL_DestroyTexture(blocks->block_83);
		howmanybroken += 1;
		blocks->block_83 = nullptr;
		blocktouched83 = true;
	}
	if (blocks->blocknum84 == 0 && shovel == true && touched84 && blocktouched84 == false || blocks->blocknum84 == 0 && shovel2 == true && touched2nd84 && blocktouched84 == false) {
		SDL_DestroyTexture(blocks->block_84);
		howmanybroken += 1;
		blocks->block_84 = nullptr;
		blocktouched84 = true;
	}
	else if (blocks->blocknum84 == 1 && drill == true && touched84 && blocktouched84 == false || blocks->blocknum84 == 1 && drill2 == true && touched2nd84 && blocktouched84 == false) {
		SDL_DestroyTexture(blocks->block_84);
		howmanybroken += 1;
		blocks->block_84 = nullptr;
		blocktouched84 = true;
	}
	else if (blocks->blocknum84 == 2 && diamondpick == true && touched84 && blocktouched84 == false) {
		SDL_DestroyTexture(blocks->block_84);
		howmanybroken += 1;
		blocks->block_84 = nullptr;
		blocktouched84 = true;
	}
	else if (blocks->blocknum84 == 3 && goldpick == true && touched84 && blocktouched84 == false || blocks->blocknum84 == 3 && goldpick2 == true && touched2nd84 && blocktouched84 == false || blocks->blocknum84 == 7 && goldpick == true && touched84 && blocktouched84 == false || blocks->blocknum84 == 7 && goldpick2 == true && touched2nd84 && blocktouched84 == false || blocks->blocknum84 == 10 && goldpick == true && touched84 && blocktouched84 == false || blocks->blocknum84 == 10 && goldpick2 == true && touched2nd84 && blocktouched84 == false) {
		SDL_DestroyTexture(blocks->block_84);
		howmanybroken += 1;
		blocks->block_84 = nullptr;
		blocktouched84 = true;
	}
	else if (blocks->blocknum84 == 4 && ironpick == true && touched84 && blocktouched84 == false || blocks->blocknum84 == 4 && ironpick2 == true && touched2nd84 && blocktouched84 == false || blocks->blocknum84 == 8 && ironpick == true && touched84 && blocktouched84 == false || blocks->blocknum84 == 8 && ironpick2 == true && touched2nd84 && blocktouched84 == false) {
		SDL_DestroyTexture(blocks->block_84);
		howmanybroken += 1;
		blocks->block_84 = nullptr;
		blocktouched84 = true;
	}
	else if (blocks->blocknum84 == 5 && coalpick == true && touched84 && blocktouched84 == false || blocks->blocknum84 == 5 && coalpick2 == true && touched2nd84 && blocktouched84 == false || blocks->blocknum84 == 9 && coalpick == true && touched84 && blocktouched84 == false || blocks->blocknum84 == 9 && coalpick2 == true && touched2nd84 && blocktouched84 == false) {
		SDL_DestroyTexture(blocks->block_84);
		howmanybroken += 1;
		blocks->block_84 = nullptr;
		blocktouched84 = true;
	}
	else if (blocks->blocknum84 == 6 && rubypick == true && touched2nd84 && blocktouched84 == false) {
		SDL_DestroyTexture(blocks->block_84);
		howmanybroken += 1;
		blocks->block_84 = nullptr;
		blocktouched84 = true;
	}
	if (blocks->blocknum85 == 0 && shovel == true && touched85 && blocktouched85 == false || blocks->blocknum85 == 0 && shovel2 == true && touched2nd85 && blocktouched85 == false) {
		SDL_DestroyTexture(blocks->block_85);
		howmanybroken += 1;
		blocks->block_85 = nullptr;
		blocktouched85 = true;
	}
	else if (blocks->blocknum85 == 1 && drill == true && touched85 && blocktouched85 == false || blocks->blocknum85 == 1 && drill2 == true && touched2nd85 && blocktouched85 == false) {
		SDL_DestroyTexture(blocks->block_85);
		howmanybroken += 1;
		blocks->block_85 = nullptr;
		blocktouched85 = true;
	}
	else if (blocks->blocknum85 == 2 && diamondpick == true && touched85 && blocktouched85 == false) {
		SDL_DestroyTexture(blocks->block_85);
		howmanybroken += 1;
		blocks->block_85 = nullptr;
		blocktouched85 = true;
	}
	else if (blocks->blocknum85 == 3 && goldpick == true && touched85 && blocktouched85 == false || blocks->blocknum85 == 3 && goldpick2 == true && touched2nd85 && blocktouched85 == false || blocks->blocknum85 == 7 && goldpick == true && touched85 && blocktouched85 == false || blocks->blocknum85 == 7 && goldpick2 == true && touched2nd85 && blocktouched85 == false || blocks->blocknum85 == 10 && goldpick == true && touched85 && blocktouched85 == false || blocks->blocknum85 == 10 && goldpick2 == true && touched2nd85 && blocktouched85 == false) {
		SDL_DestroyTexture(blocks->block_85);
		howmanybroken += 1;
		blocks->block_85 = nullptr;
		blocktouched85 = true;
	}
	else if (blocks->blocknum85 == 4 && ironpick == true && touched85 && blocktouched85 == false || blocks->blocknum85 == 4 && ironpick2 == true && touched2nd85 && blocktouched85 == false || blocks->blocknum85 == 8 && ironpick == true && touched85 && blocktouched85 == false || blocks->blocknum85 == 8 && ironpick2 == true && touched2nd85 && blocktouched85 == false) {
		SDL_DestroyTexture(blocks->block_85);
		howmanybroken += 1;
		blocks->block_85 = nullptr;
		blocktouched85 = true;
	}
	else if (blocks->blocknum85 == 5 && coalpick == true && touched85 && blocktouched85 == false || blocks->blocknum85 == 5 && coalpick2 == true && touched2nd85 && blocktouched85 == false || blocks->blocknum85 == 9 && coalpick == true && touched85 && blocktouched85 == false || blocks->blocknum85 == 9 && coalpick2 == true && touched2nd85 && blocktouched85 == false) {
		SDL_DestroyTexture(blocks->block_85);
		howmanybroken += 1;
		blocks->block_85 = nullptr;
		blocktouched85 = true;
	}
	else if (blocks->blocknum85 == 6 && rubypick == true && touched2nd85 && blocktouched85 == false) {
		SDL_DestroyTexture(blocks->block_85);
		howmanybroken += 1;
		blocks->block_85 = nullptr;
		blocktouched85 = true;
	}
	if (blocks->blocknum86 == 0 && shovel == true && touched86 && blocktouched86 == false || blocks->blocknum86 == 0 && shovel2 == true && touched2nd86 && blocktouched86 == false) {
		SDL_DestroyTexture(blocks->block_86);
		howmanybroken += 1;
		blocks->block_86 = nullptr;
		blocktouched86 = true;
	}
	else if (blocks->blocknum86 == 1 && drill == true && touched86 && blocktouched86 == false || blocks->blocknum86 == 1 && drill2 == true && touched2nd86 && blocktouched86 == false) {
		SDL_DestroyTexture(blocks->block_86);
		howmanybroken += 1;
		blocks->block_86 = nullptr;
		blocktouched86 = true;
	}
	else if (blocks->blocknum86 == 2 && diamondpick == true && touched86 && blocktouched86 == false) {
		SDL_DestroyTexture(blocks->block_86);
		howmanybroken += 1;
		blocks->block_86 = nullptr;
		blocktouched86 = true;
	}
	else if (blocks->blocknum86 == 3 && goldpick == true && touched86 && blocktouched86 == false || blocks->blocknum86 == 3 && goldpick2 == true && touched2nd86 && blocktouched86 == false || blocks->blocknum86 == 7 && goldpick == true && touched86 && blocktouched86 == false || blocks->blocknum86 == 7 && goldpick2 == true && touched2nd86 && blocktouched86 == false || blocks->blocknum86 == 10 && goldpick == true && touched86 && blocktouched86 == false || blocks->blocknum86 == 10 && goldpick2 == true && touched2nd86 && blocktouched86 == false) {
		SDL_DestroyTexture(blocks->block_86);
		howmanybroken += 1;
		blocks->block_86 = nullptr;
		blocktouched86 = true;
	}
	else if (blocks->blocknum86 == 4 && ironpick == true && touched86 && blocktouched86 == false || blocks->blocknum86 == 4 && ironpick2 == true && touched2nd86 && blocktouched86 == false || blocks->blocknum86 == 8 && ironpick == true && touched86 && blocktouched86 == false || blocks->blocknum86 == 8 && ironpick2 == true && touched2nd86 && blocktouched86 == false) {
		SDL_DestroyTexture(blocks->block_86);
		howmanybroken += 1;
		blocks->block_86 = nullptr;
		blocktouched86 = true;
	}
	else if (blocks->blocknum86 == 5 && coalpick == true && touched86 && blocktouched86 == false || blocks->blocknum86 == 5 && coalpick2 == true && touched2nd86 && blocktouched86 == false || blocks->blocknum86 == 9 && coalpick == true && touched86 && blocktouched86 == false || blocks->blocknum86 == 9 && coalpick2 == true && touched2nd86 && blocktouched86 == false) {
		SDL_DestroyTexture(blocks->block_86);
		howmanybroken += 1;
		blocks->block_86 = nullptr;
		blocktouched86 = true;
	}
	else if (blocks->blocknum86 == 6 && rubypick == true && touched2nd86 && blocktouched86 == false) {
		SDL_DestroyTexture(blocks->block_86);
		howmanybroken += 1;
		blocks->block_86 = nullptr;
		blocktouched86 = true;
	}
	if (blocks->blocknum87 == 0 && shovel == true && touched87 && blocktouched87 == false || blocks->blocknum87 == 0 && shovel2 == true && touched2nd87 && blocktouched87 == false) {
		SDL_DestroyTexture(blocks->block_87);
		howmanybroken += 1;
		blocks->block_87 = nullptr;
		blocktouched87 = true;
	}
	else if (blocks->blocknum87 == 1 && drill == true && touched87 && blocktouched87 == false || blocks->blocknum87 == 1 && drill2 == true && touched2nd87 && blocktouched87 == false) {
		SDL_DestroyTexture(blocks->block_87);
		howmanybroken += 1;
		blocks->block_87 = nullptr;
		blocktouched87 = true;
	}
	else if (blocks->blocknum87 == 2 && diamondpick == true && touched87 && blocktouched87 == false) {
		SDL_DestroyTexture(blocks->block_87);
		howmanybroken += 1;
		blocks->block_87 = nullptr;
		blocktouched87 = true;
	}
	else if (blocks->blocknum87 == 3 && goldpick == true && touched87 && blocktouched87 == false || blocks->blocknum87 == 3 && goldpick2 == true && touched2nd87 && blocktouched87 == false || blocks->blocknum87 == 7 && goldpick == true && touched87 && blocktouched87 == false || blocks->blocknum87 == 7 && goldpick2 == true && touched2nd87 && blocktouched87 == false || blocks->blocknum87 == 10 && goldpick == true && touched87 && blocktouched87 == false || blocks->blocknum87 == 10 && goldpick2 == true && touched2nd87 && blocktouched87 == false) {
		SDL_DestroyTexture(blocks->block_87);
		howmanybroken += 1;
		blocks->block_87 = nullptr;
		blocktouched87 = true;
	}
	else if (blocks->blocknum87 == 4 && ironpick == true && touched87 && blocktouched87 == false || blocks->blocknum87 == 4 && ironpick2 == true && touched2nd87 && blocktouched87 == false || blocks->blocknum87 == 8 && ironpick == true && touched87 && blocktouched87 == false || blocks->blocknum87 == 8 && ironpick2 == true && touched2nd87 && blocktouched87 == false) {
		SDL_DestroyTexture(blocks->block_87);
		howmanybroken += 1;
		blocks->block_87 = nullptr;
		blocktouched87 = true;
	}
	else if (blocks->blocknum87 == 5 && coalpick == true && touched87 && blocktouched87 == false || blocks->blocknum87 == 5 && coalpick2 == true && touched2nd87 && blocktouched87 == false || blocks->blocknum87 == 9 && coalpick == true && touched87 && blocktouched87 == false || blocks->blocknum87 == 9 && coalpick2 == true && touched2nd87 && blocktouched87 == false) {
		SDL_DestroyTexture(blocks->block_87);
		howmanybroken += 1;
		blocks->block_87 = nullptr;
		blocktouched87 = true;
	}
	else if (blocks->blocknum87 == 6 && rubypick == true && touched2nd87 && blocktouched87 == false) {
		SDL_DestroyTexture(blocks->block_87);
		howmanybroken += 1;
		blocks->block_87 = nullptr;
		blocktouched87 = true;
	}
	if (blocks->blocknum88 == 0 && shovel == true && touched88 && blocktouched88 == false || blocks->blocknum88 == 0 && shovel2 == true && touched2nd88 && blocktouched88 == false) {
		SDL_DestroyTexture(blocks->block_88);
		howmanybroken += 1;
		blocks->block_88 = nullptr;
		blocktouched88 = true;
	}
	else if (blocks->blocknum88 == 1 && drill == true && touched88 && blocktouched88 == false || blocks->blocknum88 == 1 && drill2 == true && touched2nd88 && blocktouched88 == false) {
		SDL_DestroyTexture(blocks->block_88);
		howmanybroken += 1;
		blocks->block_88 = nullptr;
		blocktouched88 = true;
	}
	else if (blocks->blocknum88 == 2 && diamondpick == true && touched88 && blocktouched88 == false) {
		SDL_DestroyTexture(blocks->block_88);
		howmanybroken += 1;
		blocks->block_88 = nullptr;
		blocktouched88 = true;
	}
	else if (blocks->blocknum88 == 3 && goldpick == true && touched88 && blocktouched88 == false || blocks->blocknum88 == 3 && goldpick2 == true && touched2nd88 && blocktouched88 == false || blocks->blocknum88 == 7 && goldpick == true && touched88 && blocktouched88 == false || blocks->blocknum88 == 7 && goldpick2 == true && touched2nd88 && blocktouched88 == false || blocks->blocknum88 == 10 && goldpick == true && touched88 && blocktouched88 == false || blocks->blocknum88 == 10 && goldpick2 == true && touched2nd88 && blocktouched88 == false) {
		SDL_DestroyTexture(blocks->block_88);
		howmanybroken += 1;
		blocks->block_88 = nullptr;
		blocktouched88 = true;
	}
	else if (blocks->blocknum88 == 4 && ironpick == true && touched88 && blocktouched88 == false || blocks->blocknum88 == 4 && ironpick2 == true && touched2nd88 && blocktouched88 == false || blocks->blocknum88 == 8 && ironpick == true && touched88 && blocktouched88 == false || blocks->blocknum88 == 8 && ironpick2 == true && touched2nd88 && blocktouched88 == false) {
		SDL_DestroyTexture(blocks->block_88);
		howmanybroken += 1;
		blocks->block_88 = nullptr;
		blocktouched88 = true;
	}
	else if (blocks->blocknum88 == 5 && coalpick == true && touched88 && blocktouched88 == false || blocks->blocknum88 == 5 && coalpick2 == true && touched2nd88 && blocktouched88 == false || blocks->blocknum88 == 9 && coalpick == true && touched88 && blocktouched88 == false || blocks->blocknum88 == 9 && coalpick2 == true && touched2nd88 && blocktouched88 == false) {
		SDL_DestroyTexture(blocks->block_88);
		howmanybroken += 1;
		blocks->block_88 = nullptr;
		blocktouched88 = true;
	}
	else if (blocks->blocknum88 == 6 && rubypick == true && touched2nd88 && blocktouched88 == false) {
		SDL_DestroyTexture(blocks->block_88);
		howmanybroken += 1;
		blocks->block_88 = nullptr;
		blocktouched88 = true;
	}
	if (blocks->blocknum89 == 0 && shovel == true && touched89 && blocktouched89 == false || blocks->blocknum89 == 0 && shovel2 == true && touched2nd89 && blocktouched89 == false) {
		SDL_DestroyTexture(blocks->block_89);
		howmanybroken += 1;
		blocks->block_89 = nullptr;
		blocktouched89 = true;
	}
	else if (blocks->blocknum89 == 1 && drill == true && touched89 && blocktouched89 == false || blocks->blocknum89 == 1 && drill2 == true && touched2nd89 && blocktouched89 == false) {
		SDL_DestroyTexture(blocks->block_89);
		howmanybroken += 1;
		blocks->block_89 = nullptr;
		blocktouched89 = true;
	}
	else if (blocks->blocknum89 == 2 && diamondpick == true && touched89 && blocktouched89 == false) {
		SDL_DestroyTexture(blocks->block_89);
		howmanybroken += 1;
		blocks->block_89 = nullptr;
		blocktouched89 = true;
	}
	else if (blocks->blocknum89 == 3 && goldpick == true && touched89 && blocktouched89 == false || blocks->blocknum89 == 3 && goldpick2 == true && touched2nd89 && blocktouched89 == false || blocks->blocknum89 == 7 && goldpick == true && touched89 && blocktouched89 == false || blocks->blocknum89 == 7 && goldpick2 == true && touched2nd89 && blocktouched89 == false || blocks->blocknum89 == 10 && goldpick == true && touched89 && blocktouched89 == false || blocks->blocknum89 == 10 && goldpick2 == true && touched2nd89 && blocktouched89 == false) {
		SDL_DestroyTexture(blocks->block_89);
		howmanybroken += 1;
		blocks->block_89 = nullptr;
		blocktouched89 = true;
	}
	else if (blocks->blocknum89 == 4 && ironpick == true && touched89 && blocktouched89 == false || blocks->blocknum89 == 4 && ironpick2 == true && touched2nd89 && blocktouched89 == false || blocks->blocknum89 == 8 && ironpick == true && touched89 && blocktouched89 == false || blocks->blocknum89 == 8 && ironpick2 == true && touched2nd89 && blocktouched89 == false) {
		SDL_DestroyTexture(blocks->block_89);
		howmanybroken += 1;
		blocks->block_89 = nullptr;
		blocktouched89 = true;
	}
	else if (blocks->blocknum89 == 5 && coalpick == true && touched89 && blocktouched89 == false || blocks->blocknum89 == 5 && coalpick2 == true && touched2nd89 && blocktouched89 == false || blocks->blocknum89 == 9 && coalpick == true && touched89 && blocktouched89 == false || blocks->blocknum89 == 9 && coalpick2 == true && touched2nd89 && blocktouched89 == false) {
		SDL_DestroyTexture(blocks->block_89);
		howmanybroken += 1;
		blocks->block_89 = nullptr;
		blocktouched89 = true;
	}
	else if (blocks->blocknum89 == 6 && rubypick == true && touched2nd89 && blocktouched89 == false) {
		SDL_DestroyTexture(blocks->block_89);
		howmanybroken += 1;
		blocks->block_89 = nullptr;
		blocktouched89 = true;
	}
	if (blocks->blocknum90 == 0 && shovel == true && touched90 && blocktouched90 == false || blocks->blocknum90 == 0 && shovel2 == true && touched2nd90 && blocktouched90 == false) {
		SDL_DestroyTexture(blocks->block_90);
		howmanybroken += 1;
		blocks->block_90 = nullptr;
		blocktouched90 = true;
	}
	else if (blocks->blocknum90 == 1 && drill == true && touched90 && blocktouched90 == false || blocks->blocknum90 == 1 && drill2 == true && touched2nd90 && blocktouched90 == false) {
		SDL_DestroyTexture(blocks->block_90);
		howmanybroken += 1;
		blocks->block_90 = nullptr;
		blocktouched90 = true;
	}
	else if (blocks->blocknum90 == 2 && diamondpick == true && touched90 && blocktouched90 == false) {
		SDL_DestroyTexture(blocks->block_90);
		howmanybroken += 1;
		blocks->block_90 = nullptr;
		blocktouched90 = true;
	}
	else if (blocks->blocknum90 == 3 && goldpick == true && touched90 && blocktouched90 == false || blocks->blocknum90 == 3 && goldpick2 == true && touched2nd90 && blocktouched90 == false || blocks->blocknum90 == 7 && goldpick == true && touched90 && blocktouched90 == false || blocks->blocknum90 == 7 && goldpick2 == true && touched2nd90 && blocktouched90 == false || blocks->blocknum90 == 10 && goldpick == true && touched90 && blocktouched90 == false || blocks->blocknum90 == 10 && goldpick2 == true && touched2nd90 && blocktouched90 == false) {
		SDL_DestroyTexture(blocks->block_90);
		howmanybroken += 1;
		blocks->block_90 = nullptr;
		blocktouched90 = true;
	}
	else if (blocks->blocknum90 == 4 && ironpick == true && touched90 && blocktouched90 == false || blocks->blocknum90 == 4 && ironpick2 == true && touched2nd90 && blocktouched90 == false || blocks->blocknum90 == 8 && ironpick == true && touched90 && blocktouched90 == false || blocks->blocknum90 == 8 && ironpick2 == true && touched2nd90 && blocktouched90 == false) {
		SDL_DestroyTexture(blocks->block_90);
		howmanybroken += 1;
		blocks->block_90 = nullptr;
		blocktouched90 = true;
	}
	else if (blocks->blocknum90 == 5 && coalpick == true && touched90 && blocktouched90 == false || blocks->blocknum90 == 5 && coalpick2 == true && touched2nd90 && blocktouched90 == false || blocks->blocknum90 == 9 && coalpick == true && touched90 && blocktouched90 == false || blocks->blocknum90 == 9 && coalpick2 == true && touched2nd90 && blocktouched90 == false) {
		SDL_DestroyTexture(blocks->block_90);
		howmanybroken += 1;
		blocks->block_90 = nullptr;
		blocktouched90 = true;
	}
	else if (blocks->blocknum90 == 6 && rubypick == true && touched2nd90 && blocktouched90 == false) {
		SDL_DestroyTexture(blocks->block_90);
		howmanybroken += 1;
		blocks->block_90 = nullptr;
		blocktouched90 = true;
	}
	if (blocks->blocknum91 == 0 && shovel == true && touched91 && blocktouched91 == false || blocks->blocknum91 == 0 && shovel2 == true && touched2nd91 && blocktouched91 == false) {
		SDL_DestroyTexture(blocks->block_91);
		howmanybroken += 1;
		blocks->block_91 = nullptr;
		blocktouched91 = true;
	}
	else if (blocks->blocknum91 == 1 && drill == true && touched91 && blocktouched91 == false || blocks->blocknum91 == 1 && drill2 == true && touched2nd91 && blocktouched91 == false) {
		SDL_DestroyTexture(blocks->block_91);
		howmanybroken += 1;
		blocks->block_91 = nullptr;
		blocktouched91 = true;
	}
	else if (blocks->blocknum91 == 2 && diamondpick == true && touched91 && blocktouched91 == false) {
		SDL_DestroyTexture(blocks->block_91);
		howmanybroken += 1;
		blocks->block_91 = nullptr;
		blocktouched91 = true;
	}
	else if (blocks->blocknum91 == 3 && goldpick == true && touched91 && blocktouched91 == false || blocks->blocknum91 == 3 && goldpick2 == true && touched2nd91 && blocktouched91 == false || blocks->blocknum91 == 7 && goldpick == true && touched91 && blocktouched91 == false || blocks->blocknum91 == 7 && goldpick2 == true && touched2nd91 && blocktouched91 == false || blocks->blocknum91 == 10 && goldpick == true && touched91 && blocktouched91 == false || blocks->blocknum91 == 10 && goldpick2 == true && touched2nd91 && blocktouched91 == false) {
		SDL_DestroyTexture(blocks->block_91);
		howmanybroken += 1;
		blocks->block_91 = nullptr;
		blocktouched91 = true;
	}
	else if (blocks->blocknum91 == 4 && ironpick == true && touched91 && blocktouched91 == false || blocks->blocknum91 == 4 && ironpick2 == true && touched2nd91 && blocktouched91 == false || blocks->blocknum91 == 8 && ironpick == true && touched91 && blocktouched91 == false || blocks->blocknum91 == 8 && ironpick2 == true && touched2nd91 && blocktouched91 == false) {
		SDL_DestroyTexture(blocks->block_91);
		howmanybroken += 1;
		blocks->block_91 = nullptr;
		blocktouched91 = true;
	}
	else if (blocks->blocknum91 == 5 && coalpick == true && touched91 && blocktouched91 == false || blocks->blocknum91 == 5 && coalpick2 == true && touched2nd91 && blocktouched91 == false || blocks->blocknum91 == 9 && coalpick == true && touched91 && blocktouched91 == false || blocks->blocknum91 == 9 && coalpick2 == true && touched2nd91 && blocktouched91 == false) {
		SDL_DestroyTexture(blocks->block_91);
		howmanybroken += 1;
		blocks->block_91 = nullptr;
		blocktouched91 = true;
	}
	else if (blocks->blocknum91 == 6 && rubypick == true && touched2nd91 && blocktouched91 == false) {
		SDL_DestroyTexture(blocks->block_91);
		howmanybroken += 1;
		blocks->block_91 = nullptr;
		blocktouched91 = true;
	}
	if (blocks->blocknum92 == 0 && shovel == true && touched92 && blocktouched92 == false || blocks->blocknum92 == 0 && shovel2 == true && touched2nd92 && blocktouched92 == false) {
		SDL_DestroyTexture(blocks->block_92);
		howmanybroken += 1;
		blocks->block_92 = nullptr;
		blocktouched92 = true;
	}
	else if (blocks->blocknum92 == 1 && drill == true && touched92 && blocktouched92 == false || blocks->blocknum92 == 1 && drill2 == true && touched2nd92 && blocktouched92 == false) {
		SDL_DestroyTexture(blocks->block_92);
		howmanybroken += 1;
		blocks->block_92 = nullptr;
		blocktouched92 = true;
	}
	else if (blocks->blocknum92 == 2 && diamondpick == true && touched92 && blocktouched92 == false) {
		SDL_DestroyTexture(blocks->block_92);
		howmanybroken += 1;
		blocks->block_92 = nullptr;
		blocktouched92 = true;
	}
	else if (blocks->blocknum92 == 3 && goldpick == true && touched92 && blocktouched92 == false || blocks->blocknum92 == 3 && goldpick2 == true && touched2nd92 && blocktouched92 == false || blocks->blocknum92 == 7 && goldpick == true && touched92 && blocktouched92 == false || blocks->blocknum92 == 7 && goldpick2 == true && touched2nd92 && blocktouched92 == false || blocks->blocknum92 == 10 && goldpick == true && touched92 && blocktouched92 == false || blocks->blocknum92 == 10 && goldpick2 == true && touched2nd92 && blocktouched92 == false) {
		SDL_DestroyTexture(blocks->block_92);
		howmanybroken += 1;
		blocks->block_92 = nullptr;
		blocktouched92 = true;
	}
	else if (blocks->blocknum92 == 4 && ironpick == true && touched92 && blocktouched92 == false || blocks->blocknum92 == 4 && ironpick2 == true && touched2nd92 && blocktouched92 == false || blocks->blocknum92 == 8 && ironpick == true && touched92 && blocktouched92 == false || blocks->blocknum92 == 8 && ironpick2 == true && touched2nd92 && blocktouched92 == false) {
		SDL_DestroyTexture(blocks->block_92);
		howmanybroken += 1;
		blocks->block_92 = nullptr;
		blocktouched92 = true;
	}
	else if (blocks->blocknum92 == 5 && coalpick == true && touched92 && blocktouched92 == false || blocks->blocknum92 == 5 && coalpick2 == true && touched2nd92 && blocktouched92 == false || blocks->blocknum92 == 9 && coalpick == true && touched92 && blocktouched92 == false || blocks->blocknum92 == 9 && coalpick2 == true && touched2nd92 && blocktouched92 == false) {
		SDL_DestroyTexture(blocks->block_92);
		howmanybroken += 1;
		blocks->block_92 = nullptr;
		blocktouched92 = true;
	}
	else if (blocks->blocknum92 == 6 && rubypick == true && touched2nd92 && blocktouched92 == false) {
		SDL_DestroyTexture(blocks->block_92);
		howmanybroken += 1;
		blocks->block_92 = nullptr;
		blocktouched92 = true;
	}
	if (blocks->blocknum93 == 0 && shovel == true && touched93 && blocktouched93 == false || blocks->blocknum93 == 0 && shovel2 == true && touched2nd93 && blocktouched93 == false) {
		SDL_DestroyTexture(blocks->block_93);
		howmanybroken += 1;
		blocks->block_93 = nullptr;
		blocktouched93 = true;
	}
	else if (blocks->blocknum93 == 1 && drill == true && touched93 && blocktouched93 == false || blocks->blocknum93 == 1 && drill2 == true && touched2nd93 && blocktouched93 == false) {
		SDL_DestroyTexture(blocks->block_93);
		howmanybroken += 1;
		blocks->block_93 = nullptr;
		blocktouched93 = true;
	}
	else if (blocks->blocknum93 == 2 && diamondpick == true && touched93 && blocktouched93 == false) {
		SDL_DestroyTexture(blocks->block_93);
		howmanybroken += 1;
		blocks->block_93 = nullptr;
		blocktouched93 = true;
	}
	else if (blocks->blocknum93 == 3 && goldpick == true && touched93 && blocktouched93 == false || blocks->blocknum93 == 3 && goldpick2 == true && touched2nd93 && blocktouched93 == false || blocks->blocknum93 == 7 && goldpick == true && touched93 && blocktouched93 == false || blocks->blocknum93 == 7 && goldpick2 == true && touched2nd93 && blocktouched93 == false || blocks->blocknum93 == 10 && goldpick == true && touched93 && blocktouched93 == false || blocks->blocknum93 == 10 && goldpick2 == true && touched2nd93 && blocktouched93 == false) {
		SDL_DestroyTexture(blocks->block_93);
		howmanybroken += 1;
		blocks->block_93 = nullptr;
		blocktouched93 = true;
	}
	else if (blocks->blocknum93 == 4 && ironpick == true && touched93 && blocktouched93 == false || blocks->blocknum93 == 4 && ironpick2 == true && touched2nd93 && blocktouched93 == false || blocks->blocknum93 == 8 && ironpick == true && touched93 && blocktouched93 == false || blocks->blocknum93 == 8 && ironpick2 == true && touched2nd93 && blocktouched93 == false) {
		SDL_DestroyTexture(blocks->block_93);
		howmanybroken += 1;
		blocks->block_93 = nullptr;
		blocktouched93 = true;
	}
	else if (blocks->blocknum93 == 5 && coalpick == true && touched93 && blocktouched93 == false || blocks->blocknum93 == 5 && coalpick2 == true && touched2nd93 && blocktouched93 == false || blocks->blocknum93 == 9 && coalpick == true && touched93 && blocktouched93 == false || blocks->blocknum93 == 9 && coalpick2 == true && touched2nd93 && blocktouched93 == false) {
		SDL_DestroyTexture(blocks->block_93);
		howmanybroken += 1;
		blocks->block_93 = nullptr;
		blocktouched93 = true;
	}
	else if (blocks->blocknum93 == 6 && rubypick == true && touched2nd93 && blocktouched93 == false) {
		SDL_DestroyTexture(blocks->block_93);
		howmanybroken += 1;
		blocks->block_93 = nullptr;
		blocktouched93 = true;
	}
	if (blocks->blocknum94 == 0 && shovel == true && touched94 && blocktouched94 == false || blocks->blocknum94 == 0 && shovel2 == true && touched2nd94 && blocktouched94 == false) {
		SDL_DestroyTexture(blocks->block_94);
		howmanybroken += 1;
		blocks->block_94 = nullptr;
		blocktouched94 = true;
	}
	else if (blocks->blocknum94 == 1 && drill == true && touched94 && blocktouched94 == false || blocks->blocknum94 == 1 && drill2 == true && touched2nd94 && blocktouched94 == false) {
		SDL_DestroyTexture(blocks->block_94);
		howmanybroken += 1;
		blocks->block_94 = nullptr;
		blocktouched94 = true;
	}
	else if (blocks->blocknum94 == 2 && diamondpick == true && touched94 && blocktouched94 == false) {
		SDL_DestroyTexture(blocks->block_94);
		howmanybroken += 1;
		blocks->block_94 = nullptr;
		blocktouched94 = true;
	}
	else if (blocks->blocknum94 == 3 && goldpick == true && touched94 && blocktouched94 == false || blocks->blocknum94 == 3 && goldpick2 == true && touched2nd94 && blocktouched94 == false || blocks->blocknum94 == 7 && goldpick == true && touched94 && blocktouched94 == false || blocks->blocknum94 == 7 && goldpick2 == true && touched2nd94 && blocktouched94 == false || blocks->blocknum94 == 10 && goldpick == true && touched94 && blocktouched94 == false || blocks->blocknum94 == 10 && goldpick2 == true && touched2nd94 && blocktouched94 == false) {
		SDL_DestroyTexture(blocks->block_94);
		howmanybroken += 1;
		blocks->block_94 = nullptr;
		blocktouched94 = true;
	}
	else if (blocks->blocknum94 == 4 && ironpick == true && touched94 && blocktouched94 == false || blocks->blocknum94 == 4 && ironpick2 == true && touched2nd94 && blocktouched94 == false || blocks->blocknum94 == 8 && ironpick == true && touched94 && blocktouched94 == false || blocks->blocknum94 == 8 && ironpick2 == true && touched2nd94 && blocktouched94 == false) {
		SDL_DestroyTexture(blocks->block_94);
		howmanybroken += 1;
		blocks->block_94 = nullptr;
		blocktouched94 = true;
	}
	else if (blocks->blocknum94 == 5 && coalpick == true && touched94 && blocktouched94 == false || blocks->blocknum94 == 5 && coalpick2 == true && touched2nd94 && blocktouched94 == false || blocks->blocknum94 == 9 && coalpick == true && touched94 && blocktouched94 == false || blocks->blocknum94 == 9 && coalpick2 == true && touched2nd94 && blocktouched94 == false) {
		SDL_DestroyTexture(blocks->block_94);
		howmanybroken += 1;
		blocks->block_94 = nullptr;
		blocktouched94 = true;
	}
	else if (blocks->blocknum94 == 6 && rubypick == true && touched2nd94 && blocktouched94 == false) {
		SDL_DestroyTexture(blocks->block_94);
		howmanybroken += 1;
		blocks->block_94 = nullptr;
		blocktouched94 = true;
	}
	if (blocks->blocknum95 == 0 && shovel == true && touched95 && blocktouched95 == false || blocks->blocknum95 == 0 && shovel2 == true && touched2nd95 && blocktouched95 == false) {
		SDL_DestroyTexture(blocks->block_95);
		howmanybroken += 1;
		blocks->block_95 = nullptr;
		blocktouched95 = true;
	}
	else if (blocks->blocknum95 == 1 && drill == true && touched95 && blocktouched95 == false || blocks->blocknum95 == 1 && drill2 == true && touched2nd95 && blocktouched95 == false) {
		SDL_DestroyTexture(blocks->block_95);
		howmanybroken += 1;
		blocks->block_95 = nullptr;
		blocktouched95 = true;
	}
	else if (blocks->blocknum95 == 2 && diamondpick == true && touched95 && blocktouched95 == false) {
		SDL_DestroyTexture(blocks->block_95);
		howmanybroken += 1;
		blocks->block_95 = nullptr;
		blocktouched95 = true;
	}
	else if (blocks->blocknum95 == 3 && goldpick == true && touched95 && blocktouched95 == false || blocks->blocknum95 == 3 && goldpick2 == true && touched2nd95 && blocktouched95 == false || blocks->blocknum95 == 7 && goldpick == true && touched95 && blocktouched95 == false || blocks->blocknum95 == 7 && goldpick2 == true && touched2nd95 && blocktouched95 == false || blocks->blocknum95 == 10 && goldpick == true && touched95 && blocktouched95 == false || blocks->blocknum95 == 10 && goldpick2 == true && touched2nd95 && blocktouched95 == false) {
		SDL_DestroyTexture(blocks->block_95);
		howmanybroken += 1;
		blocks->block_95 = nullptr;
		blocktouched95 = true;
	}
	else if (blocks->blocknum95 == 4 && ironpick == true && touched95 && blocktouched95 == false || blocks->blocknum95 == 4 && ironpick2 == true && touched2nd95 && blocktouched95 == false || blocks->blocknum95 == 8 && ironpick == true && touched95 && blocktouched95 == false || blocks->blocknum95 == 8 && ironpick2 == true && touched2nd95 && blocktouched95 == false) {
		SDL_DestroyTexture(blocks->block_95);
		howmanybroken += 1;
		blocks->block_95 = nullptr;
		blocktouched95 = true;
	}
	else if (blocks->blocknum95 == 5 && coalpick == true && touched95 && blocktouched95 == false || blocks->blocknum95 == 5 && coalpick2 == true && touched2nd95 && blocktouched95 == false || blocks->blocknum95 == 9 && coalpick == true && touched95 && blocktouched95 == false || blocks->blocknum95 == 9 && coalpick2 == true && touched2nd95 && blocktouched95 == false) {
		SDL_DestroyTexture(blocks->block_95);
		howmanybroken += 1;
		blocks->block_95 = nullptr;
		blocktouched95 = true;
	}
	else if (blocks->blocknum95 == 6 && rubypick == true && touched2nd95 && blocktouched95 == false) {
		SDL_DestroyTexture(blocks->block_95);
		howmanybroken += 1;
		blocks->block_95 = nullptr;
		blocktouched95 = true;
	}
	if (blocks->blocknum96 == 0 && shovel == true && touched96 && blocktouched96 == false || blocks->blocknum96 == 0 && shovel2 == true && touched2nd96 && blocktouched96 == false) {
		SDL_DestroyTexture(blocks->block_96);
		howmanybroken += 1;
		blocks->block_96 = nullptr;
		blocktouched96 = true;
	}
	else if (blocks->blocknum96 == 1 && drill == true && touched96 && blocktouched96 == false || blocks->blocknum96 == 1 && drill2 == true && touched2nd96 && blocktouched96 == false) {
		SDL_DestroyTexture(blocks->block_96);
		howmanybroken += 1;
		blocks->block_96 = nullptr;
		blocktouched96 = true;
	}
	else if (blocks->blocknum96 == 2 && diamondpick == true && touched96 && blocktouched96 == false) {
		SDL_DestroyTexture(blocks->block_96);
		howmanybroken += 1;
		blocks->block_96 = nullptr;
		blocktouched96 = true;
	}
	else if (blocks->blocknum96 == 3 && goldpick == true && touched96 && blocktouched96 == false || blocks->blocknum96 == 3 && goldpick2 == true && touched2nd96 && blocktouched96 == false || blocks->blocknum96 == 7 && goldpick == true && touched96 && blocktouched96 == false || blocks->blocknum96 == 7 && goldpick2 == true && touched2nd96 && blocktouched96 == false || blocks->blocknum96 == 10 && goldpick == true && touched96 && blocktouched96 == false || blocks->blocknum96 == 10 && goldpick2 == true && touched2nd96 && blocktouched96 == false) {
		SDL_DestroyTexture(blocks->block_96);
		howmanybroken += 1;
		blocks->block_96 = nullptr;
		blocktouched96 = true;
	}
	else if (blocks->blocknum96 == 4 && ironpick == true && touched96 && blocktouched96 == false || blocks->blocknum96 == 4 && ironpick2 == true && touched2nd96 && blocktouched96 == false || blocks->blocknum96 == 8 && ironpick == true && touched96 && blocktouched96 == false || blocks->blocknum96 == 8 && ironpick2 == true && touched2nd96 && blocktouched96 == false) {
		SDL_DestroyTexture(blocks->block_96);
		howmanybroken += 1;
		blocks->block_96 = nullptr;
		blocktouched96 = true;
	}
	else if (blocks->blocknum96 == 5 && coalpick == true && touched96 && blocktouched96 == false || blocks->blocknum96 == 5 && coalpick2 == true && touched2nd96 && blocktouched96 == false || blocks->blocknum96 == 9 && coalpick == true && touched96 && blocktouched96 == false || blocks->blocknum96 == 9 && coalpick2 == true && touched2nd96 && blocktouched96 == false) {
		SDL_DestroyTexture(blocks->block_96);
		howmanybroken += 1;
		blocks->block_96 = nullptr;
		blocktouched96 = true;
	}
	else if (blocks->blocknum96 == 6 && rubypick == true && touched2nd96 && blocktouched96 == false) {
		SDL_DestroyTexture(blocks->block_96);
		howmanybroken += 1;
		blocks->block_96 = nullptr;
		blocktouched96 = true;
	}
	if (blocks->blocknum97 == 0 && shovel == true && touched97 && blocktouched97 == false || blocks->blocknum97 == 0 && shovel2 == true && touched2nd97 && blocktouched97 == false) {
		SDL_DestroyTexture(blocks->block_97);
		howmanybroken += 1;
		blocks->block_97 = nullptr;
		blocktouched97 = true;
	}
	else if (blocks->blocknum97 == 1 && drill == true && touched97 && blocktouched97 == false || blocks->blocknum97 == 1 && drill2 == true && touched2nd97 && blocktouched97 == false) {
		SDL_DestroyTexture(blocks->block_97);
		howmanybroken += 1;
		blocks->block_97 = nullptr;
		blocktouched97 = true;
	}
	else if (blocks->blocknum97 == 2 && diamondpick == true && touched97 && blocktouched97 == false) {
		SDL_DestroyTexture(blocks->block_97);
		howmanybroken += 1;
		blocks->block_97 = nullptr;
		blocktouched97 = true;
	}
	else if (blocks->blocknum97 == 3 && goldpick == true && touched97 && blocktouched97 == false || blocks->blocknum97 == 3 && goldpick2 == true && touched2nd97 && blocktouched97 == false || blocks->blocknum97 == 7 && goldpick == true && touched97 && blocktouched97 == false || blocks->blocknum97 == 7 && goldpick2 == true && touched2nd97 && blocktouched97 == false || blocks->blocknum97 == 10 && goldpick == true && touched97 && blocktouched97 == false || blocks->blocknum97 == 10 && goldpick2 == true && touched2nd97 && blocktouched97 == false) {
		SDL_DestroyTexture(blocks->block_97);
		howmanybroken += 1;
		blocks->block_97 = nullptr;
		blocktouched97 = true;
	}
	else if (blocks->blocknum97 == 4 && ironpick == true && touched97 && blocktouched97 == false || blocks->blocknum97 == 4 && ironpick2 == true && touched2nd97 && blocktouched97 == false || blocks->blocknum97 == 8 && ironpick == true && touched97 && blocktouched97 == false || blocks->blocknum97 == 8 && ironpick2 == true && touched2nd97 && blocktouched97 == false) {
		SDL_DestroyTexture(blocks->block_97);
		howmanybroken += 1;
		blocks->block_97 = nullptr;
		blocktouched97 = true;
	}
	else if (blocks->blocknum97 == 5 && coalpick == true && touched97 && blocktouched97 == false || blocks->blocknum97 == 5 && coalpick2 == true && touched2nd97 && blocktouched97 == false || blocks->blocknum97 == 9 && coalpick == true && touched97 && blocktouched97 == false || blocks->blocknum97 == 9 && coalpick2 == true && touched2nd97 && blocktouched97 == false) {
		SDL_DestroyTexture(blocks->block_97);
		howmanybroken += 1;
		blocks->block_97 = nullptr;
		blocktouched97 = true;
	}
	else if (blocks->blocknum97 == 6 && rubypick == true && touched2nd97 && blocktouched97 == false) {
		SDL_DestroyTexture(blocks->block_97);
		howmanybroken += 1;
		blocks->block_97 = nullptr;
		blocktouched97 = true;
	}


	//if (blocktouched1 == 1 && blocktouched2 == 1 && blocktouched3 == 1 && blocktouched4 == 1 && blocktouched5 == 1 && blocktouched6 == 1 && blocktouched7 == 1 && blocktouched8 == 1 && blocktouched9 == 1 && blocktouched10 == 1 && blocktouched11 == 1 && blocktouched12 == 1 && blocktouched13 == 1 && blocktouched14 == 1 && blocktouched15 == 1 && blocktouched16 == 1 && blocktouched17 == 1 && blocktouched18 == 1 && blocktouched19 == 1 && blocktouched20 == 1 && blocktouched21 == 1 && blocktouched22 == 1 && blocktouched23 == 1 && blocktouched24 == 1 && blocktouched25 == 1 && blocktouched26 == 1 && blocktouched27 == 1 && blocktouched28 == 1 && blocktouched29 == 1 && blocktouched30 == 1 && blocktouched31 == 1 && blocktouched32 == 1 && blocktouched33 == 1 && blocktouched34 == 1 && blocktouched35 == 1 && blocktouched36 == 1 && blocktouched37 == 1 && blocktouched38 == 1 && blocktouched39 == 1 && blocktouched40 == 1 && blocktouched41 == 1 && blocktouched42 == 1 && blocktouched43 == 1 && blocktouched44 == 1 && blocktouched45 == 1 && blocktouched46 == 1 && blocktouched47 == 1 && blocktouched48 == 1 && blocktouched49 == 1 && blocktouched50 == 1 && blocktouched51 == 1 && blocktouched52 == 1 && blocktouched53 == 1 && blocktouched54 == 1 && blocktouched55 == 1 && blocktouched56 == 1 && blocktouched57 == 1 && blocktouched58 == 1 && blocktouched59 == 1 && blocktouched60 == 1 && blocktouched61 == 1 && blocktouched62 == 1 && blocktouched63 == 1 && blocktouched64 == 1 && blocktouched65 == 1 && blocktouched66 == 1 && blocktouched67 == 1 && blocktouched68 == 1 && blocktouched69 == 1 && blocktouched70 == 1 && blocktouched71 == 1 && blocktouched72 == 1 && blocktouched73 == 1 && blocktouched74 == 1 && blocktouched75 == 1 && blocktouched76 == 1 && blocktouched77 == 1 && blocktouched78 == 1 && blocktouched79 == 1 && blocktouched80 == 1 && blocktouched81 == 1 && blocktouched82 == 1 && blocktouched83 == 1 && blocktouched84 == 1 && blocktouched85 == 1 && blocktouched86 == 1 && blocktouched87 == 1 && blocktouched88 == 1 && blocktouched89 == 1 && blocktouched90 == 1 && blocktouched91 == 1 && blocktouched92 == 1 && blocktouched93 == 1 && blocktouched94 == 1 && blocktouched95 == 1 && blocktouched96 == 1 && blocktouched97 == 1)
		//wins = true;
	if (howmanybroken >= 96)
		wins = true;
}

void Game::render()
{
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer, drill, NULL, &drilll);
	SDL_RenderCopy(renderer, drill1, NULL, &drilll1);
	/*SDL_SetRenderDrawColor(renderer, 255, 0, 0, 0);
	SDL_RenderFillRect(renderer, &drill1hitbox);
	SDL_RenderFillRect(renderer, &drillhitbox);
	SDL_SetRenderDrawColor(renderer, 0, 0, 255, 0);
	SDL_RenderFillRect(renderer, &drillhitterbox);
	SDL_RenderFillRect(renderer, &drill1hitterbox);*/
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	blocks->block_rendering();
	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	InputManager::Release();
	inputmanager = NULL;
	delete gamme;
	gamme = NULL;
	delete blocks;
	blocks = NULL;
	Mix_FreeChunk(lose);
	Mix_FreeChunk(hit);
	Mix_FreeChunk(win);
	Mix_FreeMusic(background);
	Mix_CloseAudio();
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	//std::cout << "game cleaned :)" << std::endl;
}