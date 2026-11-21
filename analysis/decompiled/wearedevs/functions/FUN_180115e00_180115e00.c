/* FUN_180115e00 @ 180115e00 */

undefined8 *
FUN_180115e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18,param_3,param_4,param_1,0,uVar2);
  }
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 7;
  FUN_1801158f0(puVar1,param_1);
  return puVar1;
}


