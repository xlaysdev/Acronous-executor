/* FUN_180179d50 @ 180179d50 */

undefined8 * FUN_180179d50(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0xf,1);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0xf);
  }
  *(undefined8 *)((longlong)puVar1 + 7) = 0x72656b726f772d74;
  *puVar1 = 0x74722d6f696b6f74;
  *param_1 = 0xf;
  param_1[1] = puVar1;
  param_1[2] = 0xf;
  return param_1;
}


