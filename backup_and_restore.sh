files=(
  "hw/syn/xilinx/xrt/package_kernel.tcl"
  "ci/blackbox.sh"
  "hw/rtl/afu/xrt/VX_afu_wrap.sv"
  "hw/rtl/afu/xrt/vortex_afu.vh"
  "hw/syn/xilinx/xrt/Makefile"
  "hw/syn/xilinx/xrt/platforms.mk"
  "hw/syn/xilinx/xrt/vitis.ini"
)

echo "=== Step 1: *.bak 백업 생성 ==="
for f in "${files[@]}"; do
  if [[ -f "$f" ]]; then
    cp "$f" "$f.bak"
    echo "Backed up: $f  -->  $f.bak"
  else
    echo "Warning: $f 파일이 없습니다. (건너뜀)"
  fi
done

echo ""
echo "=== Step 2: git에서 원본으로 복원 ==="
for f in "${files[@]}"; do
  if git ls-files --error-unmatch "$f" >/dev/null 2>&1; then
    git checkout -- "$f"
    echo "Restored from git: $f"
  else
    echo "Warning: $f 은(는) git에서 추적되지 않는 파일입니다. (checkout 생략)"
  fi
done

echo ""
echo "✔ 완료: 모든 파일에 대해 .bak 백업을 만들고, git 기준으로 복원했습니다."
