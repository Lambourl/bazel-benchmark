#include "bench/fib.hpp"

// RE Benchmark TU 3636 of 20000 (depth=28, stamp="default")
namespace bench_tu_3636 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3636>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3636
