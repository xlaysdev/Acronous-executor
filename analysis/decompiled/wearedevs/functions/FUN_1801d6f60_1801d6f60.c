/* FUN_1801d6f60 @ 1801d6f60 */

undefined8 FUN_1801d6f60(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) || (DAT_1802fd7d8 != '\0')) {
    DAT_1802fd7d8 = '\x01';
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar3 + 0xe0);
    cVar2 = *(char *)(lVar3 + 0xe8);
    local_20 = param_1;
    if (cVar2 != '\x01') {
      local_28 = param_1;
      if (cVar2 == '\x02') {
        if (param_1 != (longlong *)0x0) {
          LOCK();
          *param_1 = *param_1 + -1;
          UNLOCK();
          if (*param_1 == 0) {
            FUN_1801e37a0(&local_28);
          }
        }
        return 1;
      }
      FUN_1801fff20(puVar1);
    }
    *puVar1 = local_20;
  }
  return 0;
}


