/* FUN_180042910 @ 180042910 */

void FUN_180042910(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((char)param_1[0x20] != '\x02') {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))
              (*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1a),
               *(undefined8 *)(param_1 + 0x1c),param_4,param_1,0xfffffffffffffffe);
  }
  if (*param_1 == 3) {
    return;
  }
  FUN_1800430f0(param_1);
  return;
}


