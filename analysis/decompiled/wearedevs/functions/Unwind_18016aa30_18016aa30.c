/* Unwind@18016aa30 @ 18016aa30 */

void Unwind_18016aa30(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(char *)(param_2 + 0xcf) != '\0') {
    piVar1 = *(int **)(param_2 + 0xb8);
    FUN_180167a10(piVar1 + 0x10);
    if (*piVar1 != 3) {
      FUN_180167e60(piVar1 + 2);
    }
    thunk_FUN_1801d3330(piVar1,0x98,8);
  }
  return;
}


