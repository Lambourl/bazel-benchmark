#include "bench/fib.hpp"

// RE Benchmark TU 8200 of 20000 (depth=28, stamp="default")
namespace bench_tu_8200 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8200>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8200
