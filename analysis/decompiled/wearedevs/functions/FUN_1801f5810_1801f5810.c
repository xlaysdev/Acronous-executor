/* FUN_1801f5810 @ 1801f5810 */

ulonglong FUN_1801f5810(ulonglong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1 + param_3;
  if (0x27 >= uVar2 && !CARRY8(uVar1,param_3)) {
    memcpy((void *)((longlong)param_1 + uVar1 + 8),param_2,param_3);
    *param_1 = uVar2;
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0x27 < uVar2 || CARRY8(uVar1,param_3)) &
         0xffffffff;
}


