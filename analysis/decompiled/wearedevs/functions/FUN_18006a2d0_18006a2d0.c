/* FUN_18006a2d0 @ 18006a2d0 */

undefined8 * FUN_18006a2d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  uVar4 = (**(code **)(lVar2 + 0x38))();
  FUN_180027490();
  lVar5 = thunk_FUN_1801d32d0(0x2000,1);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0x2000);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar3 = param_2[2];
  param_1[2] = 0x2000;
  param_1[3] = lVar5;
  param_1[6] = 0;
  param_1[7] = 8;
  param_1[10] = 0x66000;
  *(undefined1 *)(param_1 + 0xb) = uVar4;
  *(undefined2 *)(param_1 + 0x16) = 0;
  param_1[0xf] = uVar1;
  param_1[0x10] = lVar2;
  param_1[0x11] = uVar3;
  *param_1 = 0;
  param_1[0x12] = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 1;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0x2000;
  param_1[0xe] = 0x66000;
  return param_1;
}


