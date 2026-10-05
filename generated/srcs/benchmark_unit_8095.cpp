#include "bench/fib.hpp"

// RE Benchmark TU 8095 of 20000 (depth=28, stamp="default")
namespace bench_tu_8095 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8095>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8095
