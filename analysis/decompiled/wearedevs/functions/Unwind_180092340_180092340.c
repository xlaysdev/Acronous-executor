/* Unwind@180092340 @ 180092340 */

void Unwind_180092340(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_2 + 0x48);
  puVar2 = *(undefined8 **)(param_2 + 0x78);
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 8);
  if (lVar3 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x70),lVar3,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x10));
  }
  *puVar2 = 0;
  puVar1[2] = *(undefined8 *)(param_2 + 0x60);
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *puVar1 = *(undefined8 *)(param_2 + 0x50);
  puVar1[1] = uVar4;
  return;
}


