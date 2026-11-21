/* FUN_1801e4ce0 @ 1801e4ce0 */

undefined8 * FUN_1801e4ce0(undefined8 *param_1)

{
  undefined1 local_4c8 [584];
  int local_280 [2];
  longlong local_278;
  undefined8 local_270;
  undefined1 local_268 [584];
  
  FUN_1801e5aa0(local_280);
  if (local_280[0] == 1) {
    if (local_278 != 0) {
      memcpy(local_4c8,local_268,0x248);
    }
    param_1[1] = local_278;
    param_1[2] = local_270;
    memcpy(param_1 + 3,local_4c8,0x248);
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}


