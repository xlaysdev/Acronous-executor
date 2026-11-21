/* FUN_180137050 @ 180137050 */

undefined1 *
FUN_180137050(undefined1 *param_1,undefined8 param_2,longlong *param_3,longlong param_4,char param_5
             )

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar1 = *(uint *)(param_4 + 0x40);
  iVar2 = 6;
  if (3 < uVar1) {
    iVar2 = uVar1 - 4;
  }
  if (iVar2 == 6) {
                    /* WARNING: Could not recover jumptable at 0x0001801370c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined1 *)
             (*(code *)(&DAT_18024e0e8 + *(int *)(&DAT_18024e0e8 + (ulonglong)uVar1 * 4)))();
    return puVar3;
  }
  if ((((iVar2 == 5) || (iVar2 == 3)) && (param_5 == '\0')) && (*(char *)(param_4 + 0x44) != '\0'))
  {
    param_1[1] = 8;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *param_1 = 3;
    *(int *)(param_1 + 8) = iVar2;
  }
  else {
    puVar5 = *(undefined8 **)*param_3;
    uVar4 = (*(code *)*puVar5)(((undefined8 *)*param_3)[1]);
    if (*(longlong *)(param_4 + 0x98) != 0) {
      (**(code **)(*(longlong *)(param_4 + 0x98) + 0x18))(*(undefined8 *)(param_4 + 0xa0));
    }
    *(undefined8 *)(param_4 + 0x98) = uVar4;
    *(undefined8 **)(param_4 + 0xa0) = puVar5;
    *param_1 = 6;
  }
  return param_1;
}


