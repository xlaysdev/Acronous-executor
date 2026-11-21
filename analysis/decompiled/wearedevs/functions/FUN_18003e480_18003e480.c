/* FUN_18003e480 @ 18003e480 */

undefined8 * FUN_18003e480(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x88;
  puVar1 = (undefined8 *)FUN_1801ec950(8);
  puVar2 = puVar1;
  if (lVar3 != 0) {
    FUN_180027490();
    puVar2 = (undefined8 *)thunk_FUN_1801d32d0(lVar3,puVar1);
  }
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(puVar1,lVar3);
  }
  *puVar2 = 1;
  puVar2[1] = 1;
  param_1[2] = puVar2;
  *param_1 = 8;
  param_1[1] = 0x88;
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}


