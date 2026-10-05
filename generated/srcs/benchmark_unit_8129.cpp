#include "bench/fib.hpp"

// RE Benchmark TU 8129 of 20000 (depth=28, stamp="default")
namespace bench_tu_8129 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8129>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8129
