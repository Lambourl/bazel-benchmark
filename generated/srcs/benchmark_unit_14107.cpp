#include "bench/fib.hpp"

// RE Benchmark TU 14107 of 20000 (depth=28, stamp="default")
namespace bench_tu_14107 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14107>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14107
