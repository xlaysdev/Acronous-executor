/* Unwind@1800f4850 @ 1800f4850 */

void Unwind_1800f4850(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x1340) + 0x480) != '\x02') {
    lVar1 = *(longlong *)(param_2 + 0x1340);
    (**(code **)(*(longlong *)(lVar1 + 0x460) + 0x20))
              (*(undefined8 *)(lVar1 + 0x478),*(undefined8 *)(lVar1 + 0x468),
               *(undefined8 *)(lVar1 + 0x470));
  }
  return;
}


