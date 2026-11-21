/* FUN_1801123f0 @ 1801123f0 */

undefined1 * FUN_1801123f0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char local_1a;
  undefined8 local_19;
  undefined8 uStack_11;
  undefined1 local_9;
  
  FUN_180112710(&local_1a,param_3);
  uVar1 = 2;
  if (local_1a == '\x01') {
    param_1[0x11] = local_9;
    *(undefined8 *)(param_1 + 1) = local_19;
    *(undefined8 *)(param_1 + 9) = uStack_11;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return param_1;
}


