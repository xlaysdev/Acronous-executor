/* FUN_1800c3480 @ 1800c3480 */

longlong FUN_1800c3480(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  
  FUN_180027490();
  puVar2 = (undefined4 *)thunk_FUN_1801d32d0(0x18,8);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *(undefined8 *)(puVar2 + 4) = param_2;
  *puVar2 = 1;
  puVar2[1] = 0;
  puVar2[2] = 1;
  puVar2[3] = 0;
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x40);
    }
  }
  *(undefined4 **)(param_1 + 0x40) = puVar2;
  *(undefined ***)(param_1 + 0x48) = &PTR_LAB_180212b78;
  return param_1;
}


