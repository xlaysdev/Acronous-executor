/* FUN_180115680 @ 180115680 */

undefined8 *
FUN_180115680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8,param_3,param_4,uVar2);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 9;
  FUN_180115a70(puVar1,param_1);
  return puVar1;
}


