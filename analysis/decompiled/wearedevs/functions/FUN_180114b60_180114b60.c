/* FUN_180114b60 @ 180114b60 */

void FUN_180114b60(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 8);
  while (plVar2 != (longlong *)0x0) {
    plVar1 = (longlong *)plVar2[5];
    if (*plVar2 != 0) {
      FUN_180044a30(plVar2 + 1);
    }
    thunk_FUN_1801d3330(plVar2,0x30,8);
    plVar2 = plVar1;
  }
  return;
}


