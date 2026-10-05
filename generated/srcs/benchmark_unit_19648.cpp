#include "bench/fib.hpp"

// RE Benchmark TU 19648 of 20000 (depth=28, stamp="default")
namespace bench_tu_19648 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19648>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19648
