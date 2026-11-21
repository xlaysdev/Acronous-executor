/* FUN_180028bb0 @ 180028bb0 */

void FUN_180028bb0(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  puVar1 = (ulonglong *)*param_1;
  if (((short)puVar1[0xb] == 3) && (puVar1[0xc] != 0)) {
    (**(code **)(puVar1[0xc] + 0x20))(puVar1[0xf],puVar1[0xd],puVar1[0xe]);
  }
  uVar2 = puVar1[0x10];
  if (uVar2 != 0) {
    puVar3 = (undefined8 *)puVar1[0x11];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
    }
  }
  if ((*puVar1 & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(puVar1[1],*puVar1,1);
  }
  thunk_FUN_1801d3330(puVar1,0x90,8);
  return;
}


