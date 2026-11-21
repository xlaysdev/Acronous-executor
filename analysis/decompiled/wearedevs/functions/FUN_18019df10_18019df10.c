/* FUN_18019df10 @ 18019df10 */

void * FUN_18019df10(undefined8 *param_1)

{
  size_t _Size;
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_1[1];
  _Size = param_1[4];
  *param_1 = 1;
  param_1[1] = 1;
  if (_Size != 0) {
    lVar1 = param_1[2];
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (param_1[3] != lVar2) {
      pvVar3 = memmove((void *)(*(longlong *)(lVar1 + 8) + lVar2),
                       (void *)(param_1[3] + *(longlong *)(lVar1 + 8)),_Size);
    }
    *(size_t *)(lVar1 + 0x10) = lVar2 + _Size;
  }
  return pvVar3;
}


