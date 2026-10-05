#include "bench/fib.hpp"

// RE Benchmark TU 19107 of 20000 (depth=28, stamp="default")
namespace bench_tu_19107 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19107>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19107
