#ifndef GUARD_STARTER_CHOOSE_H
#define GUARD_STARTER_CHOOSE_H

#define STARTER_MON_COUNT   5

extern const u16 gBirchBagGrass_Pal[];
extern const u32 gBirchBagTilemap[];
extern const u32 gBirchGrassTilemap[];
extern const u32 gBirchBagGrass_Gfx[];
extern const u32 gPokeballSelection_Gfx[];
extern u16 gStarterPokemonSpecies;

u16 GetStarterPokemon(u16 chosenStarterId);
void CB2_ChooseStarter(void);
void AddStarterPokemonToPlayer();

#endif // GUARD_STARTER_CHOOSE_H
