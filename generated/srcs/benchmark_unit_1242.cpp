#include "bench/fib.hpp"

// RE Benchmark TU 1242 of 20000 (depth=28, stamp="default")
namespace bench_tu_1242 {
constexpr unsigned long long result = ::bench::slow_fib<28, 1242>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_1242
