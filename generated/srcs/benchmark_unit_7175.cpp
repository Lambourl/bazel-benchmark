#include "bench/fib.hpp"

// RE Benchmark TU 7175 of 20000 (depth=28, stamp="default")
namespace bench_tu_7175 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7175>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7175
