/* Unwind@1800f4f80 @ 1800f4f80 */

void Unwind_1800f4f80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x1340);
  if (*(char *)(lVar1 + 0x480) == '\x02') {
    return;
  }
  if (*(char *)(lVar1 + 0x5ad) == '\0') {
    return;
  }
  (**(code **)(*(longlong *)(lVar1 + 0x460) + 0x20))
            (*(undefined8 *)(lVar1 + 0x478),*(undefined8 *)(lVar1 + 0x468),
             *(undefined8 *)(lVar1 + 0x470));
  return;
}


