#include "bench/fib.hpp"

// RE Benchmark TU 68 of 20000 (depth=28, stamp="default")
namespace bench_tu_68 {
constexpr unsigned long long result = ::bench::slow_fib<28, 68>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_68
