/* FUN_18009a310 @ 18009a310 */

void FUN_18009a310(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((char)param_1[0x20] != '\x02') {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))
              (*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1a),
               *(undefined8 *)(param_1 + 0x1c),param_4,param_1,0xfffffffffffffffe);
  }
  if (*param_1 == 3) {
    return;
  }
  FUN_18009a670(param_1);
  return;
}


