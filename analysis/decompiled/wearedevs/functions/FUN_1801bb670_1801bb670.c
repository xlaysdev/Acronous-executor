/* FUN_1801bb670 @ 1801bb670 */

void FUN_1801bb670(ulonglong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*param_1 & 0xfffffffffffffff8);
  if (puVar1[1] != 0) {
    thunk_FUN_1801d3330(*puVar1,puVar1[1] << 4,8);
  }
  thunk_FUN_1801d3330(puVar1,0x10,8);
  return;
}


