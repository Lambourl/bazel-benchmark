#include "bench/fib.hpp"

// RE Benchmark TU 11636 of 20000 (depth=28, stamp="default")
namespace bench_tu_11636 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11636>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11636
