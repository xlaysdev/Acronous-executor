/* FUN_18004ed60 @ 18004ed60 */

void FUN_18004ed60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    if (puVar2[2] != 0 && puVar2[1] != 0) {
      thunk_FUN_1801d3330(puVar2[1],puVar2[2],1);
    }
    thunk_FUN_1801d3330(puVar2,0x20,8);
    puVar2 = puVar1;
  }
  return;
}


